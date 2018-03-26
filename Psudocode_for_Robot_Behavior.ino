// this is code that will allow our sumo bot to track 
//its prey and adjust its position to face it

//variable & pin declaration 
#define trigPin 2// GREY
#define echoPin 3// PURPLE
#define trigPin2 4
#define echoPin2 5

//Declaration of the IR pin sensors
//IR sensor 1 pin A2
//IR sensor 2 pin A4
//IR Sensor 3 pin A0
//IR Sensor 4 pin A1

//Declation of the Ultrasonic sensors
//Ultrasonic trig pin Right pin 0
//Ultrasonic echo pin Right pin 1
//Ultrasonic trig pin Front Right pin 2 
//Ultrasonic echo pin Front Right pin 3
//Ultrasonic trig pin Front Left pin 7
//Ultrasonic echo pin Front Left pin 8
//Ultrasonic trig pin Left pin 11
//Ultrasonic echo pin Left pin 12

//Declaration of the Motor sensors
// Right Motor Forward Pin 5
// Right Motor Revers Pin 6
// Left Motor forward Pin 9
// Left Motor Reverse Pin 10

//
 //Switch Statement
// switch (var) {
//  case label1:
//    // statements
//    break;
//  case label2:
//    // statements
//    break;
//  default:
//    // statements
//}

//Start sequence
  //drive forward short distance very quickly 
  //stop quickly
  //reverse 

// while loop

//white detected variable 
 
//SWITCH 1 
 // CASE 1 you detect white on IR sensor 1 [top-right]
      // reverse as quickly as possible
      
  // CASE 2 you detect white on IR sensor 2 [back-right]
      // forward as quickly as possible

  // CASE 3if you detect white on IR sensor 3 [back-left]
      // forward as quickly as possible
      
  // CASE 4if you detect white on IR sensor 4 [top-Left]
      // reverse as quickly as possible
//  defaults break

 //opponent position variable
 
//SWITCH 2 

  // CASE 1 If the front ultrasonics sensors detect a true 
      // Drive forward
      
  // CASE 2 If the left side ultrasonic sensor detects a true value 
        // spin 90 degree Counter Clock Wise

  // CASE 3 If the Rige side ultrasonic sensor detects a true value
        // spin 90 degree Clock Wise

  // CASE 4 If there are no ultrasonic sensors with inputs 
      // spin 180 degree 

//STATE FUNCTIONS

// Forward State

// Reverse State

// Counter Clock Wise Rotatiton State 90

// Clock Wise Rotation State 90 




 
