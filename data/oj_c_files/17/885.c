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

char a[100][100];
int main()
{
	int k=1;
	while(1)
	{
		cin>>a[k];
		cout<<a[k];
		cout<<endl;
		for(int i=0;i<strlen(a[k]);i++)
			if(a[k][i]!='('&&a[k][i]!=')') a[k][i]=' ';
		for(int i=0;i<strlen(a[k])-1;i++)
		{
			int sum =1;
			if(a[k][i]=='(')
			{
			for(int j=i+1;j<strlen(a[k]);j++)
			{
			   if(a[k][j]=='(') sum++;
			   if(a[k][j]==')') sum--;
			   if(sum==0) {a[k][i]=' ';a[k][j]=' ';break;}
			}
			}
		}
		 for(int i=0;i<strlen(a[k]);i++)
		 {
			 if(a[k][i]=='(') a[k][i]='$';
			 if(a[k][i]==')') a[k][i]='?';
			 cout<<a[k][i];
		 }
		 cout<<endl;
		k++;
	}
	return 0;
}

