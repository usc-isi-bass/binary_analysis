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

char s[1000];
int i ,len,sum,p;
int flag;
void main()
{
	scanf("%s",s);
	len = strlen(s);
	sum = 0 ; flag = 1;
	for (i = 0; i < len ; ++i)
	{
		sum =(sum*10+s[i]-'0');
		p = sum/13;
		sum = sum%13;
		if (!p && flag) continue;
		flag = 0;
		printf("%d",p);
	}
	if (flag) printf("%d",0);
	printf("\n");
	printf("%d\n",sum);
}