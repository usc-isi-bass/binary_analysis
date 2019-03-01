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
	char a[1000];
	int num[300]={0},i,j;
	gets(a);
	for(i=0,j=0;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
			num[j]++;
		if(a[i]==' ')
			j++;
	}
	for(i=0;i<=j;i++)
	{
		if(num[i]!=0){
		printf("%d",num[i]);
		if(i<=j-1)
			printf(",");
		}
	}
}