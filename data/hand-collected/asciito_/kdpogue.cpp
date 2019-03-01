/******************************************************************************
 * atof.c
 * Written By: Kevin Pogue  5/5/15
 * Recursively convert ASCII string to floating point number
 *****************************************************************************/

/******************************************************************************
 * Library Files
 *****************************************************************************/

#include <stdio.h>
#include <math.h>

/******************************************************************************
 * Global Constants
 *****************************************************************************/


#define TRUE 1
#define FALSE 0

/******************************************************************************
 * Function Definitions
 *****************************************************************************/
float ratof(char * str, float divisor, float current_total) {
  float num = 0;
  if (str[0] == 0) {
    return current_total;
  } else if (str[0] == '.') {
    return ratof(&str[1], 10.0, current_total);
  } else if (str[0] < '0' || str[0] > '9') {
    return 0;
  } else if (divisor == 1.0) { // Valid char before the decimal point
    num = current_total * 10.0;
    num += (float) (str[0] - '0');
    return ratof(&str[1], divisor, num);
  } else { // Valid char after the decimal point
    num = current_total;
    num += ((float) (str[0] - '0') / divisor);
    return ratof(&str[1], divisor * 10.0, num);
  }
}