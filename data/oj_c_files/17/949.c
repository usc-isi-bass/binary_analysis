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

char s[999];
int find(int i,int l)
{
	int t;
	if(s[i]=='\0') return -1;
	if(s[i]=='(')
	{
		t=find(i+1,l+1);
		if(t==-1) s[i]='$';
		else s[i]=' ';
		if(t==-1) return -1;
		else return find(t+1,l);
	}
	if(s[i]==')')
	{
		if(l==0) s[i]='?';
		else s[i]=' ';
		if(l==0) return find(i+1,0);
		else return i;
	}
	s[i]=' ';
	return find(i+1,l);
}
int main()
{
    for(;cin>>s;)
    {
    	cout<<s<<endl;
    	find(0,0);
    	cout<<s<<endl;
    }
	return 0;
}

