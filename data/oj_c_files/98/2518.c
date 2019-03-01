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
    int n;
	scanf("%d",&n);
	char word[1000][41];
	int len[1000];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
		len[i]=strlen(word[i]);

	}
	int m=0;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(m==0)
		      {m+=(len[i]);flag=1;}
		else m+=(len[i]+1);
		if(m<=80)
		{
			if(flag==1)
			{printf("%s",word[i]);flag=0;}
			else printf(" %s",word[i]);

		}
		else
		{
			m=0;
			printf("\n");
			i--;
		}
	}

	

    return 0;

}
