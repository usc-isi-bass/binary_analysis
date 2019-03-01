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


void fun()        
{
    char c;           
    if((c=getchar())!='\n') 
       fun();            
    putchar(c); 

}       

main()            
{
   fun();   
   getchar();     
} 

