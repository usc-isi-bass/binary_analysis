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
	int n,i,x,y,A[200],B[200],C[200];
	scanf("%d",&n);
	0 < n <= 200;
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&A[i],&B[i],&C[i]);
	}
	for(i=0;i<n;i++)
	{
         if(B[i]==1)x=1;
         else if(B[i]==2)x=31+1;
         else if(B[i]==3)x=31+28+1;
         else if(B[i]==4)x=31+28+31+1;
         else if(B[i]==5)x=31+28+31+30+1;
         else if(B[i]==6)x=31+28+31+30+31+1;
         else if(B[i]==7)x=31+28+31+30+31+30+1;
         else if(B[i]==8)x=31+28+31+30+31+30+31+1;
         else if(B[i]==9)x=31+28+31+30+31+30+31+31+1;
         else if(B[i]==10)x=31+28+31+30+31+30+31+31+30+1;
         else if(B[i]==11)x=31+28+31+30+31+30+31+31+30+31+1;
         else if(B[i]==12)x=31+28+31+30+31+30+31+31+30+31+30+1;
         if( (( (A[i]%4==0)&&(A[i]%100!=0) ) ||(A[i]%400==0))&&(B[i]>2))x=x+1;
		 else x=x;
		 if(C[i]==1)y=1;
         else if(C[i]==2)y=31+1;
         else if(C[i]==3)y=31+28+1;
         else if(C[i]==4)y=31+28+31+1;
         else if(C[i]==5)y=31+28+31+30+1;
         else if(C[i]==6)y=31+28+31+30+31+1;
         else if(C[i]==7)y=31+28+31+30+31+30+1;
         else if(C[i]==8)y=31+28+31+30+31+30+31+1;
         else if(C[i]==9)y=31+28+31+30+31+30+31+31+1;
         else if(C[i]==10)y=31+28+31+30+31+30+31+31+30+1;
         else if(C[i]==11)y=31+28+31+30+31+30+31+31+30+31+1;
         else if(C[i]==12)y=31+28+31+30+31+30+31+31+30+31+30+1;
         if( (( (A[i]%4==0)&&(A[i]%100!=0) ) ||(A[i]%400==0))&&(C[i]>2))y=y+1;
		 else y=y;
		 if((x-y)%7==0)
		 printf("YES\n");
		 else
		 printf("NO\n");
	}
	return 0;
}