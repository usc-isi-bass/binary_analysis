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
	char str[512];
	int n=0,i,j,k,m;
	gets(str);
	for(i=0;str[i]!='\0';i++)
		n++;
	j=n-1;
    for(i=n-1;i>=0;i--)
	{
		if(str[i]!=' '&&str[i-1]==' '||i==0)
		{
			k=i;
			for(m=k;m<=j;m++)
			printf("%c",str[m]);
			if(k!=0) printf(" ");
			if(i!=0) j=i-2;
		}
	}
}
