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
char a[300];
int i,j,sum[200]={0},m=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
     for(j=65;j<=90;j++)
	 {
		 if(a[i]==j)
		 {
		      sum[j]++;m++;
		 }
	 }
	  for(j=97;j<=122;j++)
	 {
		 if(a[i]==j)
		 {
			 sum[j]++;m++;
		 }
	 }
}
     if(m>0)
	 {
	      for(j=65;j<=122;j++)
		  {
			  if(sum[j]!=0)
		      printf("%c=%d\n",j,sum[j]);
		  }
	 }

     if(m==0)
	 {
    	printf("No");
	 }
return 0;
}