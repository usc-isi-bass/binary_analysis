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
	char w[10000];
	int s[10000]={0};
	int b=0,k=0;
	int i;
	int n=0;
	gets(w);
	n=strlen(w);
	for(i=0;w[i]!='\0';i++)
	{
		if(w[i]!=' ')
		{
			s[k]++;
		}
		if((w[i]==' ')&&(w[i+1]!=' '))
		{
			k++;
			b++;
		}
	}
	printf("%d",s[0]);
	for(k=1;k<=b;k++)
	{
	    printf(",%d",s[k]);
	}
	return 0;
}