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

void f(int,char[],char,char);
int tag[100]={0};
int main()
{
	char a[100];
	cin.getline(a,100);
	int l,p;
	l=strlen(a);
	char boy,girl;
	boy=a[0];
	for(int i=0;i<l;i++)
	{
		if(a[i]!=boy)
		{
			girl=a[i];
			p=i;
			break;
		}
	}
	f(p,a,boy,girl);
	return 0;
}
void f(int p,char b[100],char m,char fe)
{
	if(b[p]=='\0') return;
	if(b[p]!=fe) f(p+1,b,m,fe);
	else
	{
		for(int i=p-1;i>=0;i--)
		{
			if(tag[i]==0)
			{
				cout<<i<<" "<<p<<endl;
				tag[i]=1;
				tag[p]=1;
				break;
			}
		}
		f(p+1,b,m,fe);
	}
}