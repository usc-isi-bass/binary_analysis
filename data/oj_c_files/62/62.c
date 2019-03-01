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

int main()
{
	char a[100];
	char b[100][100];
	int i,m=0,k=0,d=0;
	gets(a);
	strcat(a," ");
	for(i=0;a[i]!='\0';i++)
	{
		k=0;
		d=0;
		while((a[i]!=' ')&&(a[i]!='\0'))
		{
			b[m][k]=a[i];
			k++;
			i++;
			d=1;
		}
		if(d==1)
		{
		b[m][k]='\0';
		m++;
		}
	}
	for(i=0;i<m-1;i++)
	{
		printf("%s ",b[i]);
	}
	printf("%s",b[m-1]);
	return 0;
}




