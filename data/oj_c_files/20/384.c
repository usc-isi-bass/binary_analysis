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
	char str[11],substr[4],*p1=str,*p2=substr;
	int i,j,k;
    while(scanf("%s%s",str,substr)!=EOF)
	{for(i=0,k=0;str[i]!='\0';i++)
		{if(str[i]>str[k])
			k=i;}
	
	for(j=0;j<=k;j++)
	  printf("%c",*(p1+j));
    printf("%s",substr);
    for(j=0;str[k+1+j]!='\0';j++)
	  printf("%c",*(p1+k+1+j));
	printf("\n");
	}
}