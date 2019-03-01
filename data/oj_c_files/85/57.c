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
    int n,m;
	char s[20];
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
        for(j=0;s[j];j++)
		{
			if(j==0)
			{if((s[0]>='a'&&s[0]<='z')||(s[j]>='A'&&s[j]<='Z')||s[j]=='_')
               m=1;
			else
			{	m=0;
			break;}
			}
			else
			{if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||s[j]=='_')
			m=1;
			else
			{m=0;
			break;}
			}
		}
		if(m==1)
			printf("yes\n");
		if(m==0)
			printf("no\n");
	}
	return 0;
}