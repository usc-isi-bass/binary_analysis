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
{int i,j,w;
 scanf("%d", &w);
   if ((w+12)%7==5)
	   {printf("1\n");
        printf("10\n");}
   if ((w+12)%7==6)
	   {printf("4\n");
        printf("7\n");}
   if ((w+12)%7==0)
	   {printf("9\n");
        printf("12\n");}
   if ((w+12)%7==1)
	   printf("6\n");
   if ((w+12)%7==2)
	   {printf("2\n");
        printf("3\n");
        printf("11\n");}
   if ((w+12)%7==3)
	   printf("8\n");
	if ((w+12)%7==4)
	   {
        printf("5\n");}
        
     
}