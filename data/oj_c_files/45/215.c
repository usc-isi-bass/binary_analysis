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
	char a[50];
	char b[50];
	int i,j,k,l,m=0;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++)
		;
	for(j=0;b[j]!='\0';j++)
		;
	for(k=0;k<=j-1;k++)
	{
		if(a[0]==b[k])
		{
			for(l=0;(l<=i-1)&&(k+l<=j-1);l++)
			{
				if(a[l]!=b[k+l])break;
			}
			if(l==i)m=1;
		}
		if(m==1)break;
	}
	if(k!=j)printf("%d\n",k);
	
}