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
	int n,i,j=0,k,p=0;
	char c;
	cin>>n;
	cin.get();
	for(k=0;k<n;k++)
	{
		char a[26]={0};
		int b[26] = {0};
		while(cin.get(c) && c!= '\n')
		{ p=0;
			for(i=0;i<26;i++)
			{
				if(c==a[i])
				{ p=1;
					b[i]++;
			        break;
				}
			}
			if(p==0 && a[j]==0)
			{
				a[j]=c;b[j]++;
				j++;
			}
		}
		for(i=0;i<26;i++)
		{
			if(b[i]==1){
				cout<<a[i]<<endl;
				break;
			}
		}
		if(i==26)
		cout<<"no"<<endl;
	}
	return 0;
}