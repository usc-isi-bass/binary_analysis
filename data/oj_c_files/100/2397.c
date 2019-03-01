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
	char string[300],c;
	int sum[200]={0},i,j,k=0;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
	{	for(j=65;j<=90;j++)
			if(c==j) sum[j]+=1;
		for(j=97;j<=122;j++)
			if(c==j) sum[j]+=1;
	}
	for(i=65;i<=122;i++)
		if(sum[i]!=0)
		{	printf("%c=%d\n",i,sum[i]);
		    k=1;
		}
	if(k==0) printf("No");
}