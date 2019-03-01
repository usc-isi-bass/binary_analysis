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


int main(int argc, char* argv[])
{  
	 
       int number;

 

      

       int reversed_number = 0;

       

     

       int remainder = 0;

       

       scanf("%d",&number);


       while(number != 0){

              remainder = number % 10;

              reversed_number *= 10;

              reversed_number += remainder;

              number /= 10;

       }

 

     

       printf("%d\n",reversed_number);

       



	return 0;
}
    