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
	int n,t,i,j,a[100]={0},q=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
   scanf("%d",&t);
   for(j=0;j<t;j++)
   scanf("%d",&a[j]);
   for(j=0;j<t;j++)
   if((a[j]+j*3<=60)&&((a[j+1]+(j+1)*3>60)||(a[j+1]==0)))
	   {
   if(a[j]+3*j+6<=60) printf("%d\n",60-j*3-3);
   else printf("%d\n",a[j]);
   if(j==t-1) q=1;
   break;
	   }
	   if((q==0)&&(j==t)) printf("%d\n",60-t*3);
	else if(t==0) printf("60\n");
	for(j=0;j<t;j++)
		a[j]=0;
	}

  return 0;
}