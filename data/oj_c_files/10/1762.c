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

int k,i,j,n=0,t;
int a[25],b[25];
main()
{	
	cin>>k;
	for(i=0;i<k;i++) cin>>a[i];
	for(i=0;i<k;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>=a[i]) 
			{
				t=b[j]+1;
				if(t>b[i]) b[i]=t;
				}			
			}
		}
	for(i=0;i<k;i++) if(b[i]>n) n=b[i];
	cout<<n+1;

	}