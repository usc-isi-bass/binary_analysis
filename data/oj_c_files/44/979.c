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
  int reverse(int num); 
  int a[6][1];
  int i;
  for(i=0;i<6;i++)
  scanf("%d",&a[i][0]);
  for(i=0;i<6;i++)	
  printf("%d\n",reverse(a[i][0]));
}
 int reverse(int num)
 {
	 int i,wei;
	 int z=0,b[100];
	 if(num<0)
	 {
	  num=-num;
	  wei=log10(num)+1;

       for(i=0;i<wei;i++)
	   {
		   b[i]=num/(pow(10,(wei-i-1)));
		   num=num-b[i]*pow(10,(wei-i-1));
	   }
	   for(i=0;i<wei;i++)
	     z+=b[i]*pow(10,i);
z=-z; 
	 }
else if(num>0)
{
		wei=log10(num)+1;

       for(i=0;i<wei;i++)
	   {
		   b[i]=num/(pow(10,(wei-i-1)));
		   num=num-b[i]*pow(10,(wei-i-1));
	   }
	   for(i=0;i<wei;i++)
	     z+=b[i]*pow(10,i);
}
else z=0;	   
	 return(z);
 }     

