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

void turn(char a[100])
{
	int i,j,k;
	char b[100][100];
	i=0;j=0;k=0;
	while(a[i]!='\0')
	{
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		if(a[i]==' ')
		{
			b[j][k]='\0';
			k=0;
			j++;
		}
		i++;
	}
	b[j][k]='\0';
	for(i=j;i>0;i--)
		printf("%s ",b[i]);
	printf("%s",b[i]);
}
void main()
{
	char a[100];
	gets(a);
	turn(a);
}