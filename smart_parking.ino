//#define BLYNK_PRMINT Serial
//#include <SPI.h>
//#include <Ethernet.h>
//#include <BlynkSimpleEthernet.h>
//
//
//
//#define trigPin 6                       //Define the HC-SE04 triger on pin 6 on the arduino
//#define echoPin 5                       //Define the HC-SE04 echo on pin 5 on the arduino
//#define bulb 9                          //Define the relay signal on pin 9 on the arduino
//
//
//
//
//void setup()
// {
//    Serial.begin (9600);                //Start the serial monitor
//    pinMode(trigPin, OUTPUT);           //set the trigpin to output
//    pinMode(echoPin, INPUT);            //set the echopin to input 
//    pinMode (bulb, OUTPUT);             //set the bulb on pin 9 to output
// 
// }
//void loop()
//{
//  
//    int duration, distance = 350;             //Define two intregers duration and distance to be used to save data
//    digitalWrite(trigPin, HIGH);        //write a digital high to the trigpin to send out the pulse
//    delayMicroseconds(500);             //wait half a millisecond
//    digitalWrite(trigPin, LOW);         //turn off the trigpin
//    duration = pulseIn(echoPin, HIGH);  //measure the time using pulsein when the echo receives a signal set it to high
//    distance = (duration/2) / 29.1;     //distance is the duration divided by 2 becasue the signal traveled from the trigpin then back to the echo pin, then devide by 29.1 to convert to centimeters
//
//
//
//const int ldr = A0;
//int ldrVal = 0;
//
// 
// Serial.begin(9600); //sets serial port for communication
//
// 
// 
// ldrVal = analogRead(ldr); // The ldrVal Variable will now contain the data gathered by the sensor.
// delay(2000); // This Variable will be updated every 2 seconds.
//
//    if (ldrVal == 0)                  
//    {        
//     Light();                           //execute the Light subroutine below
//    }
//    
//    Serial.print(distance);             //Dispaly the distance on the serial monitor 
//    Serial.println(" CM");              //in centimeters
//    delay(500);                         //delay half a second
//  
//}
//void Light()                            //Start the Light subroutine
//  {
//  digitalWrite(bulb, HIGH);             //turn on the light
//  delay (15000);                        //wait 15 seconds
//  digitalWrite(bulb, LOW);              //turn off the light
//  }
// 
////char auth[] = "36e4637171dd475b812deead58a13b43";    // Write your Blynk project key here
////WidgetLED led1(V1);   // Virtual LED to show status on App
////WidgetLED led2(V2);
////WidgetLED led3(V3);
////int sensor1 = 2;      // IR Sensors
////int sensor2 = 3;
////int sensor3 = 4;
//
//void blynk()
//{
//  Serial.begin(9600);
//  Blynk.begin(auth);         // Starting Blynk server and connecting to the cloud
//  
////  pinMode(sensor3,INPUT);    // Setting sensors to input
//  
//  pinMode(sensor2,INPUT);
//  
//  pinMode(sensor1,INPUT);
//
//  while (Blynk.connect() == false) {
//    // Wait until connected
//  }
//}
// void ir() {  
//   int sensorval1 = digitalRead(sensor1); // Saving Values os sensors
//   int sensorval2 = digitalRead(sensor2);
////   int sensorval3 = digitalRead(sensor3);
//   Serial.println(sensorval1);            // printing values 
// Serial.println(sensorval2);
////   Serial.println(sensorval3);
//   delay(1000);
//   if (sensorval1 == 1)
//   {
//led1.on();                                 // Setting virtual led on the app
//}
//   if (sensorval2 == 1)
//   {
//led2.on();
//}
////   if (sensorval3 == 1)
////   {
////
////led3.on();
////}
//    if (sensorval1 == 0)
//   {
//
//led1.off();
//}
//   if (sensorval2 == 0)
//   {
//led2.off();
//}
// //  if (sensorval3 == 0)
////   {
////led3.off();
////}   
//    
//    Blynk.run();
//    
//     }
//
//  
