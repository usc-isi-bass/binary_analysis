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
	void insert(char a[],char b[]);
	char a[10],b[3];
	while ( (scanf("%s %s",a,b)) != EOF )
		insert(a,b);
}
void insert(char a[],char b[])
{
	int i,j,len,max;
	len=strlen(a);
	max=a[0];
	for(i=1;i<len;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			j=i;
		}
	}
	for(i=0;i<=j;i++)
		printf("%c",a[i]);
	for(i=0;i<3;i++)
		printf("%c",b[i]);
	for(i=j+1;i<len;i++)
	    printf("%c",a[i]);
		printf("\n");
}

