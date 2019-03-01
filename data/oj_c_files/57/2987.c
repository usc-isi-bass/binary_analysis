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
	int n,i,len[50];
	char s[50][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%s",s[i]);
		len[i]=strlen(s[i]);
		if(s[i][len[i]-2]=='e' && s[i][len[i]-1]=='r')
			s[i][len[i]-2]='\0';
		else if(s[i][len[i]-2]=='l' && s[i][len[i]-1]=='y')
            s[i][len[i]-2]='\0';
		else if(s[i][len[i]-3]=='i' && s[i][len[i]-2]=='n' && s[i][len[i]-1]=='g')
			s[i][len[i]-3]='\0';
		else ;
	}
	for(i=0;i<n;i++)
		printf("%s\n",s[i]);
	return 0;
}
