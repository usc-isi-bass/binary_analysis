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
int j,k,i,max=0;
scanf("%d",&k);
int *p=(int *)malloc(k*sizeof(int));
int *q=(int *)malloc(k*sizeof(int));
scanf("%d",&p[0]);
for(i=1;i<k;i++)
scanf(" %d",&p[i]);
for(i=0;i<k;i++)
q[i]=1;
for(i=k-2;i>=0;i--)
  for(j=i+1;j<k;j++)
	  if(p[i]>=p[j]&&q[j]>=q[i])
	  		  q[i]=q[j]+1;
for(i=0;i<k;i++)
 if(q[i]>max)
	 max=q[i];
printf("%d",max);
	 
}