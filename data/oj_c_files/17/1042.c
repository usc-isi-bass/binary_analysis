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
	int n;cin>>n;
	while(n--)
	{
		char a[1000];
		cin>>a;
		cout<<a<<'\n';
		int len=strlen(a);
		for(int i=0;i<len;i++)
		{int l=-1,r=-1;
			
			for(int j=i;j>=0;j--)
			{ 
			if(a[j]==')'&&j!=i) break;
			else if(a[j]=='(') {l=j;break;}
		    }
		    for(int j=i;j<len;j++)
			{ 
			if(a[j]=='('&&j!=i) break;
			else if(a[j]==')') {r=j;break;}
		    }
		    if(r!=-1&&l!=-1)
		    {
		    	a[r]='0';a[l]='0';
		    }
		}
		for(int i=0;i<len;i++)
		{
			if(a[i]=='(') cout<<'$';
			else if(a[i]==')') cout<<'?' ;
			else cout<<" ";
		}
cout<<'\n';
	}
	return 0;
}