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

int len;
void f(char a[])
{
	int i,j;
	len=strlen(a); 
	for(i=len-1;i>=0;i--)
	{
		if(a[i]=='(')
		{
			for(j=i+1;j<len;j++)
			{
				if(a[j]==')')
				{
					a[i]=a[j]=' ';
					break;	
				}	
			}
			if(a[j]=='\0')
			{
				a[i]='$';	
			}
				f(a);	
		}	
	}

}
int main()
{
	char c[110]={'\0'};
	int i;
	while(cin.getline(c,101))
	{cout<<c<<endl;
	for(i=0;c[i]!='\0';i++)
		if(c[i]!='('&&c[i]!=')')
			c[i]=' ';//????????????
f(c);
	for(i=0;c[i]!='\0';i++)
		if(c[i]==')')
			c[i]='?';//???????????
	cout<<c<<endl;}
	return 0;
}
