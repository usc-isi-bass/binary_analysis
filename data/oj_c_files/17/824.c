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
	char s[101]={0};
    while(scanf("%s",s)!=EOF)
	{
		int i,j,l,t1,t2;
        printf("%s\n",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='(')
			{
				t1=1;t2=0;
				for(j=i+1;j<l;j++)
				{
					if(s[j]=='(')
						t1++;
					if(s[j]==')')
						t2++;
					if(t1==t2)
					{
						s[i]=s[j]=' ';
						break;
					}
				}
			}
		}

		for(i=0;i<l;i++)
			if(s[i]=='(')
				s[i]='$';
			else if(s[i]==')')
				s[i]='?';
			else
				s[i]=' ';

			printf("%s\n",s);
	}
	
}