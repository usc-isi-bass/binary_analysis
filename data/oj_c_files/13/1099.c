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

int a[101];
int main()
{
  int q=0,temp,n,i,flag=0,t[200];
  memset(a,0,sizeof(a));
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
  	{ 
	  scanf("%d",&temp);
	  if(a[temp]==0)
	  t[q++]=temp;
	  a[temp]++;	  	
    }
    for(i=0;i<q;i++)
    {
    	if(flag==0) flag=1;
    	else printf(" ");
    	printf("%d",t[i]);
    }
}