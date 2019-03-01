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
	int i,j,k;
	char str[1000];
    gets(str);
	k=strlen(str);
	for(i=k-1;i>=0;i--)
	{
		if(str[i]==' ')
			for(j=i+1;;j++)
			{   if(str[j]!=' ') printf("%c",str[j]);
				if(str[j]==' '||j==k-1) {printf(" "); break;}
				}
	}
	for(i=0;;i++)
	{
	if(str[i]!=' ') printf("%c",str[i]);
		if(str[i]==' '||i==k-1) break;
	}
}
