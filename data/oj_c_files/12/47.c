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


 int main ()
 {
	 int z[15],r[100];
	 int i,j,l;
	 int sum=0;
     for(i=0;;i++)
	 {
		 scanf("%d",&z[i]);
		 if(z[i]==0)
		 {
			 r[sum]=0;
			 for(j=0;j<i-1;j++)
			 {
				 for(l=j+1;l<i;l++)
				 {
					 if(z[j]==2*z[l]||z[j]==0.5*z[l])
					 {
						 r[sum]++;
					 }
				 }
			 }
			sum++;
			i=-1;
		 }
		 else if(z[i]==-1)break;
	 }
	 for(i=0;i<sum;i++)
	 {
		 printf("%d\n",r[i]);
	 }
     return 0;
 }