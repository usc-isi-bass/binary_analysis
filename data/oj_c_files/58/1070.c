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
	int n,i,l,j,t=1;
	char a[81];
	cin>>n;
	cin.get();
	while(cin.getline(a,81,'\n'))
	{
		l=strlen(a);
		if(!((a[0]=='_')||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A')))
		{
			t=0;
			cout<<"0"<<endl;
			continue;
		}
		if((a[0]=='_')||(a[0]<='z'&&a[0]>='a')||(a[0]<='Z'&&a[0]>='A'))
		{
			t=1;
			for(j=0;j<l;j++)
			{
				if(!((a[j]=='_')||(a[j]<='z'&&a[j]>='a')||(a[j]<='Z'&&a[j]>='A')||(a[j]<='9'&&a[j]>='0')))
				{
					t=0;
					break;
				}
			}
			if(t==0) cout<<"0"<<endl;
			if(t==1) cout<<"1"<<endl;
		}
	}
	return 0;
}