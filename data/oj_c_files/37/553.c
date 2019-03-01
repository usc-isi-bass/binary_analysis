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
	char str[100001];
	int i,t,len,j,h,m,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",str);
		len=strlen(str);
		for(j=0,c=0;j<len;j++)
		{
			m=0;
			for(h=0;h<len;h++)
			{
				if(str[j]==str[h]&&h!=j)
				{m++;}
			}
			if(m==0)
			{printf("%c\n",str[j]);
			break;}
			else
			{c++;}
		}
		if(c==len)
		{
			printf("no\n");
		}
	}
	return 0;
}
