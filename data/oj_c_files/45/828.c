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
	int i,j=0,n,s=1,t,k=0;
	char a[50],b[50];
	scanf("%s%s",a,b);
	n=strlen(a);
	do
	{
		t=1;
		for(i=0;i<n;i++)
		{
			if(a[i]!=b[j])
			{
				s=0;
				t=t*s;
			}
			j++;
		}
		k++;
		j=k;
	}while(t==0);
	k=k-1;
	printf("%d",k);
}