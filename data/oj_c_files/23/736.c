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
	char str[124],*p=str;
	int i,j,n,k;
	gets(str);
	n=strlen(str);
    for(i=n-1,j=i;i>0;i--)
	{
		if(*(p+i)==' ') 
		{
			for(k=i+1;k<=j;k++) printf("%c%s",*(p+k),k==j? " ":"");
			j=i-1;
		}
	}
	for(i=0;*(p+i)!=' '&&*(p+i)!='\0';i++) printf("%c",*(p+i));
	
}
