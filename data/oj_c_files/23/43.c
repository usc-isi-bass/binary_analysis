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
	char a[50][20];
	int i=0,j=0,k=0,m=0,d;
	int b[50];
	char c;
	for(c=getchar();c!='\n';c=getchar()) //?????????????
	{
		if (c!=' ')
		{
			a[i][j]=c;
			j++;
			d=j;
		}
		else
		{
			i++;
			m=i;
			b[k]=j;
			k++;
			j=0;
		}
	}
	b[k]=j;  //???????????????b?
	for (;m>0;m--)  //?b[m-1]?a[m-1]??m-1???m??????????
	{
		for (j=0;j<b[m]-1;j++)
			printf("%c",a[m][j]);
		printf("%c ",a[m][b[m]-1]);//?b[i]-1??b[m]-1?????????????
	}
	for (j=0;j<b[0];j++)  //?j<d??j<b[0]?d????????j?
			printf("%c",a[0][j]);
	return 0;
}