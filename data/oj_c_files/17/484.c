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
	char c[max];   //??????????
	char s[max];
	int l;            //?????????
	int i,j;         //??????
	while(scanf("%s",c)!=EOF)
	{
	    l=strlen(c);       //???????
	    for(i=0;i<l;i++)    //???
	    {
	    	if(c[i]=='(')
	    		s[i]='$';
	    	else
	    		if(c[i]==')')
	    			s[i]='?';
	    		else
	    			s[i]=' ';
	    }
	    s[l]='\0';
	    for(i=0;i<l;i++)      //???????
	    {
	    	if(s[i]=='?')
	    	{
	    		for(j=i-1;j>=0;j--)
	    		{
	    			if(s[j]=='$')
	    			{
	    				s[j]=' ';
	    				s[i]=' ';
	    				break;
	    			}
	    		}
	    	}
	    }
	    printf("%s\n%s\n",c,s);
	}
	return 0;
}