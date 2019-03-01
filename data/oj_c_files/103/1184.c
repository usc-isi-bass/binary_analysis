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


void str(char s[])
{
    int i;
	for(i=0;s[i];i++)
	{
	    if(('a'<=s[i])&&(s[i]<='z'))
			s[i]=s[i]-'a'+'A';
	}
	return ;
}

int main()
{
    char s[1001];
	int i,j,n;

	scanf("%s",s);

	str(s);

	for(i=0;s[i];i=j)
	{
	
		    n=1;
	        for(j=i+1;s[j]==s[i];j++)
			{
		        n++;
			    s[j]='a';
			}
		    printf("(%c,%d)",s[i],n);
		
	}

	return 0;
}