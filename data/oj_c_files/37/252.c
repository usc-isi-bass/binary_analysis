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
	char a[10000];
	int i,j,t=0,n,la;
	cin>>n;
	while(cin>>a)
	{
		t=0;
		la=strlen(a);
		for(i=0;i<la;i++)
		{
			t=0;
			for(j=0;j<la;j++)
			{
				if(i==j) continue;
				else
				{
				    if(a[i]==a[j]) 
			    	{
				    	t=1;
					    break;
				    }
		     	}
			}
			if(t==0) 
			{
				cout<<a[i]<<endl;
				break;
			}
		}
		if(t==1) cout<<"no"<<endl;
	}
	return 0;
}