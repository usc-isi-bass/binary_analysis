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
	int i,k,m[1000]={0},n;
	char a[5000];
	gets(a);
	n=strlen(a);
	for(i=0,k=0;i<n;i++)
	{
		if(a[i]!=' ')
			m[k]++;
		else 
		{
			do{i++;}
				while(a[i]==' ');
				i--;
			k++;
		    continue;
		}
	}
	printf("%d",m[0]);
	for(i=1;i<=k;i++)
	{
		printf(",%d",m[i]);
	}
	return 0;
}
