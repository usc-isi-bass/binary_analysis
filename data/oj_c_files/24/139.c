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
    int a,i,b,j,m,n,e;
	char str[100][50];
	char gold[500];
	char c;
	gets(gold);
	e=strlen(gold);
    a=0;b=0;i=0;
	for(a=0;a<=e;a++)
	{
		if(gold[a]!=' ')
		{
			str[i][b]=gold[a];b++;
		}
		if(gold[a]==' ')
		{
			i++;b=0;
		}
	}
    m=0;n=0;
	for(j=0;j<=i;j++)
	{
		if(strlen(str[j])>strlen(str[m]))m=j;
        if(strlen(str[j])<strlen(str[n]))n=j;
	}
	printf("%s\n%s\n",str[m],str[n]);
}
