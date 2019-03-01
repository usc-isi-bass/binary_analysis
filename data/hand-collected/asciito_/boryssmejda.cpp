#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#define TEMP_BUFFER 30
#define TRUE 1
#define FALSE 0

long Strtol(const char *nptr , char ** endptr , int base)
{
    long number = 0;
    int current_position = -1, currently_used_digit = 0;
    int sign_of_number = 0;
    int can_prefix_be_used = FALSE;
    
    if( base < 0 || base == 1 || base > 36 )
        return number;
    int was_zero_found = FALSE, was_sign_found = FALSE;
    int length = strlen(nptr);
    
    while(nptr[++current_position] != '\0')
    {
        if(was_sign_found == FALSE && can_prefix_be_used == FALSE)
        {
            if(nptr[current_position] == ' ' && number == 0)
            {
                continue;
            }
            if(nptr[current_position] == '-')
            {
                sign_of_number = -1;
                was_sign_found = TRUE;
                continue;
            }
            if(nptr[current_position] == '+')
            {
                sign_of_number = 1;
                was_sign_found = TRUE;
                continue;
            }
        }
            
            if(was_sign_found == FALSE)
            {
                sign_of_number = 1;
                was_sign_found = TRUE;
            }
                
            if(base == 0 || base == 8 || base == 16)
            {
                can_prefix_be_used = TRUE;
            }
            
           
            
            if(nptr[current_position] == '0' && current_position >= 1 && can_prefix_be_used == TRUE)
            {
                if(  (nptr[current_position - 1] == ' ' || nptr[current_position - 1] == '+' ||  nptr[current_position - 1] == '-' )
                    &&  (nptr[current_position + 1] == 'x' || nptr[current_position + 1] == 'X') )
                {
                    current_position += 2;
                    if(base == 0)
                        base = 16;
                }
                else if(nptr[current_position - 1] == ' ' || nptr[current_position - 1] == '+' ||  nptr[current_position - 1] == '-' )
                {
                    current_position++;
                    if(base == 0)
                        base = 8;
                }
            }
            
             if(base == 0) 
                base = 10;
            
            if(nptr[current_position] >= '0' && nptr[current_position] <= '9')
            {
                currently_used_digit = nptr[current_position] - '0';
            }
            else if(nptr[current_position] >= 'A' && nptr[current_position] <= 'Z')
            {
                currently_used_digit = nptr[current_position] - 'A' + 10;
            }
            else if(nptr[current_position] >= 'a' && nptr[current_position] <= 'z')
            {
                currently_used_digit = nptr[current_position] - 'a' + 10;
            }
            else
                break;
            
             if(currently_used_digit >= base)
                 break;
             
             if(sign_of_number == 1 && number > (LONG_MAX - currently_used_digit)/base  )
             {
                 number = LONG_MAX;
                 continue;
             }
             if(sign_of_number == -1 && number < (LONG_MAX + currently_used_digit)/base )
             {
               number = LONG_MIN;
               continue;
             }
             
             number = number * base + currently_used_digit * sign_of_number;
    }
    return number;
}