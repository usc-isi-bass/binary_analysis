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
	char a[1000]={0},b[1000]={0};
	int i,j;
	while(gets(a))
	{
		for(i=0;a[i]!='\0';i++)
		{
			b[i]=a[i];
		}b[i]='\0';
		for(i=0;b[i]!='\0';i++)
		{
			if(b[i]==')'){
				for(j=i;j>=0;j--)
				{
					if(b[j]=='(')
					{
						b[j]=' ';
						b[i]=' ';
						break;
					}
				}
			}
		}
		for(i=0;b[i]!='\0';i++)
		{
			if((b[i]>='a'&&b[i]<='z')||(b[i]>='A'&&b[i]<='Z'))
			   b[i]=' ';
			else if(b[i]=='(')b[i]='$';
			else if(b[i]==')')b[i]='?';
		}//cout<<i<<b[i]<<endl;
		cout<<a<<endl;
		cout<<b<<endl;
		
	}
		return 0;
}


	