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

int i,s;
char a[101];
void f(int x)
{
	a[x]='$';
	if(x<s-1){
	for(int j=x+1;j<s;j++)
		{
		if(a[j]=='(')
			{i=j;f(j);}
		else if(a[j]==')')
			{
			a[x]=' ',a[j]=' ';
			return;
			}
		else
			if(a[j]!='$')
			a[j]=' ';
		}}
	return;
}
int main()
{
	int j=0;
	while(cin.getline(a,101))
	{
		if(j!=0)
			cout<<endl;
		cout<<a;
		s=strlen(a);
		for(i=0;i<s;i++)
		{
		if(a[i]=='(')
			f(i);
		else if(a[i]==')')
			a[i]='?';
		else
			a[i]=' ';
		}
		j++;
	cout<<endl<<a;
	}
}