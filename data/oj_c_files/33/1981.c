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

int main ()
{
    char s[1000][1000]={0};
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<1000;j++)
		{
		if(s[i][j]=='A')
        s[i][j]='T';
		else if(s[i][j]=='G')
        s[i][j]='C';
		else if(s[i][j]=='C')
        s[i][j]='G';
		else if(s[i][j]=='T')
        s[i][j]='A';
		}
	}
    for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}
	return 0;
}