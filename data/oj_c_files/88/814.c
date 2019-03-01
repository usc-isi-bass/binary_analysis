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

void main()
{
   char *a;
   int i,n=0,j=0,*b;
   a=(char*)malloc(30*sizeof(char));
      for(i=0;i<30;i++)
   {*(a+i)='\0';scanf("%c",a+i);}
   
   for(i=0;*(a+i)!='\0';i++)
	{   if(*(a+i)<':'&&*(a+i)>'/') 
	 printf("%c",*(a+i));
            if(*(a+i)>=':'||*(a+i)<='/'&&*(a+i+1)<':'&&*(a+i+1)>'/')
                  printf("\n"); 
             }




}
