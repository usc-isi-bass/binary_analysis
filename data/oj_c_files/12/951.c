#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main()
{
    int output = 0, i, j, length;
    float data[16];
    
    data[0] = -2;
    
    while(data[0] != -1)
    {
                  for(i = 0; i <= 15; i++)
                  {
                        scanf("%f", &data[i]);
                        if(data[i] == 0)
                        {
                                   length = i;
                                   break;
                        }
                        if(data[i] == -1)
                                   break;
                  }
                  
                  if(data[i] == -1)
                             break;
                  
                  for(i = 0; i <= length - 1; i++)
                        for(j = 0; j <= length - 1; j++)
                        {
                              if((data[j] / data[i]) == 2)
                                      output = output + 1;
                        }
                        
                  printf("%d\n", output);
                  output = 0;
    
    }
    
    
    return 0;
}

                              
