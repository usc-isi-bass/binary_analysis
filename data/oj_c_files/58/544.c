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
	int len,n,i,j,count=0;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		char a[100];
		cin.getline(a,100);
		len=strlen(a);
		if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||a[0]=='_')
		{
			count=0;
			for(j=1;j<len;j++)
				if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||a[j]=='_'||(a[j]>='0'&&a[j]<='9'))
					count++;
			if(count==len-1)
				cout<<"1"<<endl;
			else if(count<len-1)
				cout<<"0"<<endl;
		}
		else
			cout<<"0"<<endl;
		
	}
	return 0;

}