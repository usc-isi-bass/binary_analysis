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
	int n,len[50],i;
	char str[50][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
		len[i]=strlen(str[i]);
		if(str[i][len[i]-1]=='r'&&str[i][len[i]-2]=='e')
		{
			str[i][len[i]-2]=0;
		}
		else if(str[i][len[i]-1]=='y'&&str[i][len[i]-2]=='l')
		{
			str[i][len[i]-2]=0;
		}
		else if(str[i][len[i]-1]=='g'&&str[i][len[i]-2]=='n'&&str[i][len[i]-3]=='i')
		{
			str[i][len[i]-3]=0;
		}
		printf("%s\n",str[i]);
	}
	return 0;
}
