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
	char a[100]={0},b[100]={0},c[100][100]={0};
	int i=0,j=0,k=0,l=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;a[i]!='\0'&&a[i]!=' ';i++)
		{
			c[k][j]=a[i];
			j++;
		}
		if(k!=0)
			c[k][j]=' ';
		k++;
	}
	for(i=k-1;i>=0;i--)
		strcat(b,c[i]);
	printf("%s\n",b);
}
