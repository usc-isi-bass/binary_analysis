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
	char a[101];
	int i,j,k,len,p;
	while(cin.getline(a,101))
	{
		cout<<a<<endl;
		len=strlen(a);
		for(i=len;i>=0;i--)
		{
			
			 if (a[i]=='(')
			 {
				for(j=i+1;a[j]!='\0';j++)
				{
					if (a[j]==')')
					{
						a[i]='1';
						a[j]='1';
						break;
					}
				}
				if(a[i]=='1') continue;
				else a[i]='$';
			 }
		
		}
		for(p=0;a[p]!='\0';p++)
		{
			if(a[p]==')')
			{
				for(j=p-1;j>=0;j--)
				{
					if (a[j]=='(')
					{
						a[p]='1';
						a[j]='1';
						break;
					}
				}
				if(a[p]=='1') continue;
				else a[p]='?';
			}
		}
		for(k=0;a[k]!='\0';k++)
		{
			if (( a[k]!='$')&&( a[k]!='?'))
				a[k]=' ';
		}
		cout<<a<<endl;
		
	}
	return 0;
}

			

		
