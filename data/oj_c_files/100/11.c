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

main()
{
	char ch[26],str[300];
	int num[26],n,i,l;
         for(i=0;i<26;i++)num[i]=0;
	for(i=0;i<26;i++)
		ch[i]='a'+i;
	scanf("%s",&str);l=strlen(str);
	for(i=0;i<l;i++)
	{
		if('a'<=str[i],str[i]<='z')num[str[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(num[i]!=0)
		{
			printf("%c=%d\n",ch[i],num[i]);
		}
	}
	int sum=0;
	for(i=0;i<26;i++)sum+=num[i];
	if(sum==0)printf("No\n");
}
