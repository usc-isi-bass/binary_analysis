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
	char a[1000];
	int i,j,k;
	gets(a);
	k=strlen(a);
	for(i=0;a[i]==' ';i++);
	for(;i<k;)
	{
		if(a[i]!=' ')
		{
			for(j=i+1;a[j]!=' '&&j<k;j++);
			printf("%d",j-i);
			i=j;
		}
		else
		{
			for(j=i+1;a[j]==' '&&j<k;j++);
			printf(",");
			i=j;
		}
	}
	printf("\n");
	return 0;
}