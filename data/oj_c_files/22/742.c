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
	int n,i=1,j=0,m=0,t,sig=0;
	int num[350]={-1};
	for(n=0;n<=348;n++)
		num[n+1]=num[n];
	scanf("%d",&num[0]);
	for(i=0;num[i]!=-1;i++)
	{
	scanf(",%d",&num[i+1]);}
	for(j=0;j<=(i-1);j++)
	  {
		for(m=j;m<=(i-1);m++)
		{if(num[j]<=num[m])
		{t=num[j];num[j]=num[m];num[m]=t;}
		}
      }
     for(j=0;j<=(i-2);j++) 
     {
	  if(num[j]>num[j+1])
	  {printf("%d",num[j+1]);
	  sig=1;
	  break;}
	 }
    if(sig==0)
	  printf("No");
	 return 0;
	}

