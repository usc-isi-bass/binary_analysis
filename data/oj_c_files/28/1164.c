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
	char s[5000];
	int n,w,i,j,m;
	gets(s);
	w=strlen(s);
	for(j=w-1;s[j]==' ';j--);
	for(m=j;s[m]!=' '&&m>0;m--);
	if(m>0)
	{
	i=0;
    n=0;
	while(i<m)
	{
		for(;s[i]==' ';i++);
		if(i<m)
		{
		   for(;s[i]!=' ';i++)
			  n++;
		     printf("%d,",n);
		     n=0;
		}
	}
	printf("%d",j-m);
	}
	else printf("%d",j-m+1);
}