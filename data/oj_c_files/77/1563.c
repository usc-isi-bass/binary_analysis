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

char str[101],boy,girl;
void paidui();
int l;
int main()
{
	cin.getline(str,101);
	boy=str[0];
	for(int i=1;;i++)
	{if(str[i]!=boy) {girl=str[i];break;}}
	for(int i=0;str[i]!='\0';i++)
		l=i;
	for(int i=0;i<=l;i++)
	{paidui();}
	cout<<0<<' '<<l;
	return 0;
}
void paidui()
{
	for(int i=1;i<l;i++)	
	{	if(str[i]==boy)
		{
			int x=1;
			while(str[i+x]=='\0'){x++;}
			if(str[i+x]==girl)
			{cout<<i<<' '<<i+x<<endl;
			str[i]=str[i+x]='\0';
			break;}
		}
	}
}