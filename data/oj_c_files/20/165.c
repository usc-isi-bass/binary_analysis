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
	char str[13],substr[3];
	int s,i,j,p;
	while(scanf("%s %s",str,substr)!=EOF)
	{
	s=strlen(str);
	p=0;
	for(i=0;i<=s-1;i++)
		if(str[i]>str[p])
              p=i;
    for (i=s;i>=p+1;i--)
        str[i+3]=str[i];
	for(i=p+1,j=0;j<=2;i++,j++)
		str[i]=substr[j];
	str[s+3]='\0';
    printf("%s\n",str);
	}
}