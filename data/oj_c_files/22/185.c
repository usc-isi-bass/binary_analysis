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
	int counter=0,i=0,j,t,a[300];
	do
	{
		scanf("%d",&a[i]);
		i++;
		counter++;
	}while(getchar()!='\n');
	if(counter==1) printf("No\n");
	else
	{
	    for(i=0;i<counter;i++)
		     for(j=i+1;j<counter;j++)
			     if(a[j]>a[i])
				 {
				    t=a[i];
				    a[i]=a[j];
			        a[j]=t;
				 }
	    if(a[counter-1]==a[0]) printf("No\n");
		else{
		for(i=1;i<counter;i++)
		{
    		if(a[i]!=a[0])
			{
	     		printf("%d\n",a[i]);
	    		break;
			}
		}
		}
	}
}