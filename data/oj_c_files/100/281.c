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
	char str[300],num[26];
	int i,t,flag=0;
	for (i=0;i<26;i++) num[i]=0;
	gets(str);
	i=0;
	while(str[i])
	{
		if ((str[i]>='a')&&(str[i]<='z')) 
		{
			t=str[i]-'a';
			num[t]++;
		}
		i++;
	}
	for(i=0;i<=25;i++)
		if(num[i]!=0)
		{
			printf("%c=%d\n",i+'a',num[i]);
			flag=1;
		}
	if(flag==0) printf("No\n");
}
