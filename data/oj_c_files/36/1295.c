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

int compare(const void*a,const void*b)
{	return *(char*)a-*(char*)b;}
int main()
{	int sum;
char a[100]={'\0'},b[100]={'\0'};

	
	scanf("%s %s",a,b);
	qsort(a,strlen(a),sizeof(char),compare);
	qsort(b,strlen(b),sizeof(char),compare);
	sum=0;
	if(strcmp(a,b)!=0)
		{	sum=sum+1;
		}

	if(sum>0)
	{	printf("NO");
	}
	if(sum==0)
	{	printf("YES");
	}

	return 0;
}