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

void Replace(char s[],int x)
{
	for(int i=x+1;i<strlen(s);i++)
	{
	if(s[i]==')'){s[x]=s[i]=' ';return;}
	if(s[i]=='(')Replace(s,i);
	}
	s[x]='$';
}
void Find(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
if(s[i]=='$'||s[i]=='?')continue;
		if(s[i]=='(')Replace(s,i);
		else if(s[i]==')')s[i]='?';
		else {
			s[i]=' ';
		}
	}
	return;
}

int main()
{
	char live[101];//string live;
	while(cin>>live)
	{
		cout<<live<<endl;
		Find(live);
		cout<<live<<endl;
	}
	return 0;
}
