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

char st[100];
char st2[100];
int main()
{
	memset(st,0,100);
	memset(st2,0,100);
	while(cin>>st)
	{
		int left=0,right=0;
		int len=strlen(st);
		for(int i=0;i<len;i++)
		{
			if(st[i]=='(')
				left++;
			if(st[i]==')')
				right++;
			if(left<right)
			{
				st2[i]='?';
				right--;
			}
		}
		left=0;
		right=0;
		for(int j=len-1;j>=0;j--)
		{
			if(st[j]=='(')
				left++;
			if(st[j]==')')
				right++;
			if(left>right)
			{
				st2[j]='$';
				left--;
			}
		}
		for(int i=0;i<len;i++)
		{
			if(st2[i]!='$'&&st2[i]!='?')
				st2[i]=' ';
		}
		cout<<st<<endl;
		cout<<st2<<endl;
		memset(st,0,100);
		memset(st2,0,100);
	}
	return 0;
}