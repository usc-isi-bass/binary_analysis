/**************************************************************************
 **  This file decribe that the method of swap function work.
 **  
 **  @file      main.c
 **  @author    Lider
 **  Copyright(c) 2015                           2015 Feb. 27
 *************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *x, int begin, int end)
{
   char c;
   if (begin >= end)
      return;
 
   c          = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end)   = c;
 
   reverse(x, ++begin, --end);
}


char * itoa_base10(char* buf, int value)
{
    sprintf(buf,"%d",value);
    return buf;
}

char * itoa_standard(char* buf, int value, int base)
{
    int i = 0;
    bool isNegative = false;

    /** Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (value == 0)
    {
        buf[i] = '0';
        buf[++i] = '\0';
        return buf;
    }

    if ((value < 0) && (base == 10))
    {
        isNegative = true;
        value = -value;
    }

    // Process individual digit
    while (value != 0)
    {
        int tmp = value % base;
        buf[i++] = (tmp > 9) ? ((tmp-10) + 'a') : (tmp + '0');
        value = value/base;
    }

    // if number is negative
    if (isNegative)
        buf[i++] = '-';
    
    buf[i] = '\0';

    reverse(buf, 0, i);
    return buf;
}

