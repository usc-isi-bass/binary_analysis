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
	int i,j,l1,l2,c[100]={0};
	char a[100],b[100];
	cin>>a>>b;
	l1=strlen(a);
	l2=strlen(b);
	if(l1==l2)
	{
		for(i=0;i<=l1-1;i++)
			for(j=0;j<=l2-1;j++)
				if(a[i]==b[j]&&c[j]==0)
				{
					c[j]=1;
					break;
				}
		for(i=0;i<=l1-1;i++)
			if(c[i]==0)
				break;
		if(i==l1)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}