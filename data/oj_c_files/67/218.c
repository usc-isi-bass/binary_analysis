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
int n,i,sum,x;
int a[100],b[100];

   scanf ("%d",&n);

   scanf ("%d%d",&sum,&x);

   for (i=0;i<n-1;i++){
   
      scanf("%d%d",&a[i],&b[i]);

	  if ((x*0.1*10/sum-b[i]*0.1*10/a[i])>0.05){
	  
	  printf ("worse\n");}
	  
	  else if  ((b[i]*0.1*10/a[i]-x*0.1*10/sum)>0.05){
	  
	  printf ("better\n");}

	  else {printf ("same\n");}
   
   
   }

return 0;
}