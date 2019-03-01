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
	char str[150][300],c;
	int i,a[300],j=0;
	for(i=0;i<300;i++)
	{
		scanf("%s",str[i]);
        *(a+i)=strlen(str[i]);
        j++;
		c=getchar();
		if(c=='\n') break;	
	}
	printf("%d",*a);
	for(i=1;i<j;i++)
		printf(",%d",*(a+i));
}