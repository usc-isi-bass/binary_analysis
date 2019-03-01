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
	char c;
	int len;
	char a[100];
	int flag=0;
	while(1)
	{
		scanf("%s",a);
		len=strlen(a);
		if(flag==0)
		{
			flag=1;
			printf("%d",len);
		}
		else if(flag==1)
		{
			printf(",%d",len);
		}
		c=getchar();
		if(c=='\n')
			break;
	}
}
