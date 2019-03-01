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
	int n,i,j,count=0;
	char s[105][105];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		gets(s[i]);
	}
	int m,r;
	scanf("%d",&m);
	if(m>1)
	{
	    for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
			    for(r=0;r<n;r++)
				{
				    if(s[j][r]=='*')
					{
					    s[j][r]='@';
					}
				}
			}
		    for(j=0;j<n;j++)
			{
			    for(r=0;r<n;r++)
				{
				    if(s[j][r]=='@')
					{
					    if(j!=0 && s[j-1][r]=='.')
						{
						    s[j-1][r]='*';
						}
					    if(j!=n-1 && s[j+1][r]=='.')
						{
					    	s[j+1][r]='*';
						}
					    if(r!=n-1 && s[j][r+1]=='.')
						{
					    	s[j][r+1]='*';
						}
					    if(r!=0 && s[j][r-1]=='.')
						{
					    	s[j][r-1]='*';
						}
					}
				}
			}
		}
	}
	for(j=0;j<n;j++)
	{
		for(r=0;r<n;r++)
		{
			if(s[j][r]=='@')
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}