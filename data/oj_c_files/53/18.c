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
	int n,k[300]={0},s[300]={0};int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&k[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(k[j]==k[i])
				s[j]=1;
		}
	}
	printf("%d",k[0]);
	for(i=1;i<n;i++)
		if(s[i]==0)
			printf(",%d",k[i]);

}