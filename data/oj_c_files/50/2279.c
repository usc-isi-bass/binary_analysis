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

main()
{
   int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31},m,w,d=13,i,b;
   
  
   scanf("%d",&w);
    b=w;
   for(m=1;m<13;m++)
     {
     	w=b;
     {for(i=1;i<m;i++)
       {w+=days[i];} w+=12;}
	   if(w%7==5) printf("%d\n",m);}
}