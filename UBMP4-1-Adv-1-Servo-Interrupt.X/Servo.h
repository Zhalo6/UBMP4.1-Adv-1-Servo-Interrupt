/*==============================================================================
 File: Servo.h
 Date: April 8, 2022
 
 UBMP4 Servo function prototypes
 
 Function prototypes and pin definitions for generating servo output pulses on
 UBMP4 H1-H8 headers.
==============================================================================*/

// Servo header pin bit maps for servo_pulse() function

#define SERVO1      0b00000001      // Servo output pin on H1
#define SERVO2      0b00000010      // Servo output pin on H2
#define SERVO3      0b00000100      // Servo output pin on H3
#define SERVO4      0b00001000      // Servo output pin on H4
#define SERVO5      0b00010000      // Servo output pin on H5
#define SERVO6      0b00100000      // Servo output pin on H6
#define SERVO7      0b01000000      // Servo output pin on H7
#define SERVO8      0b10000000      // Servo output pin on H8

/**
 * Function: servo_pulse(unsigned char servo, unsigned char position)
 * 
 * Creates a single servo pulse 0f 1-2ms length optimized for 90 degree servos.
 * Uses SERVO1 - SERVO8 header pin names (corresponding to H1 - H8 header pins)
 * defined in the header file as the servo parameter. 8-bit position values
 * ranging from 0-255 correspond to output pulse widths from 1-2ms. Ensure that
 * your main function repeatedly generates servo pulses every 15-20ms.
 * 
 * Example usage: servo_pulse(SERVO1, 127);
 */
void servo_pulse(unsigned char, unsigned char);
