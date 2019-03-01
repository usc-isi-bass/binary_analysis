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
	int s,i,j,p,max;
	while(scanf("%s %s",str,substr)!=EOF)//EOF????????????????????
	{
	s=strlen(str);
	max=str[0];
	for(i=0;i<=s-1;i++)
		if(str[i]>max)
		{
			max=str[i];
              p=i;
		}
    for (i=s;i>=p+1;i--)
        str[i+3]=str[i];
	for(i=p+1,j=0;j<=2;i++,j++)
		str[i]=substr[j];
    for(i=0;i<=s+2;i++)
	printf("%c",str[i]);
	printf("\n");
	}
}