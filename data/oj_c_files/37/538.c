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
	char a[100];
	int i,j,n,k,h,z,t;
	scanf("%d",&k);
	getchar();
	for(h=0;h<k;h++)
	{
		z=0;
        gets(a);
	    n=strlen(a);
	    for(i=0;i<n;i++)
		{
		    t=1;
	    	for(j=0;j<i;j++)
			{
			      if(a[i]==a[j])t=0;
			}
		    for(j=i+1;j<n;j++)
			{
			      if(a[i]==a[j])t=0;
			}
	    	if(t==1)
			{
			      printf("%c\n",a[i]);
			      z++;
			      break;
			}
		}
	    if(z==0)printf("no\n");
	}
}
