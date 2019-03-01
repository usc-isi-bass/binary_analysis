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
	int n;
	int i,j=0,k;
	int t;
	int old[100];
	int age[100];
	char a[100][20];
	char a1[100][20];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a[i]);
    	scanf("%s",a1[i]);
	}
	for(i=1;i<=n;i++)
	{
		age[i]=atoi(a1[i]);
        if(age[i]>=60)
		{
			old[j]=i;
			j++;
		}
	}
	for(i=0;i<j;i++)
		for(k=0;k<j-i-1;k++)
			if(age[old[k]]<age[old[k+1]])
			{
				t=old[k];
				old[k]=old[k+1];
				old[k+1]=t;
			}
	for(i=0;i<j;i++)
		printf("%s\n",a[old[i]]);
	for(i=1;i<=n;i++)
	{
		if(age[i]>=60)
			continue;
		printf("%s\n",a[i]);
	}
}



	





