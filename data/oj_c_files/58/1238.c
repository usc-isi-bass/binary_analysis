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
	int n,i,j;
	scanf("%d\n",&n);
	char str[100];
	int flag;
	for(i=1;i<=n;i++)
	{
		flag=1;
		gets(str);
		for(j=0;j<strlen(str);j++)
		{
		if (!(str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9'))) 
		{
	        flag=0;
			break;
		}
		if(j==0&&(str[j]>='0'&&str[j]<='9'))
		{
			flag=0;
		}
		}
		printf("%d\n",flag);
	}
	return 0;
}