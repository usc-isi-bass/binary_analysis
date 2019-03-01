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
	char a[50][20];
	int lengh[50];
	char c;
	int n,i,j1,j2,max,min;
	for(i=0;c!='\n';i++)
	{
		scanf("%s",a[i]);
		c=getchar();
	}
	n=i;
	for(i=0,max=0,min=strlen(a[1]);i<n;i++)
	{
		lengh[i]=strlen(a[i]);
		if(lengh[i]>max) {max=lengh[i];j1=i;}
		if(lengh[i]<min) {min=lengh[i];j2=i;}
	}
	printf("%s\n%s",a[j1],a[j2]);
}