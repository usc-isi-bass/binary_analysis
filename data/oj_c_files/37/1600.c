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
	int t,i,k,length,a[26]={0};
	char c[100005]={0};
	cin>>t;
	for(k=0;k<t;k++)
	{
		cin>>c;
		length=strlen(c);
		for(i=0;i<26;i++)
			a[i]=0;
		for(i=0;i<length;i++)
		{
			a[c[i]-'a']++;
		}
		for(i=0;i<length;i++)
		{
			if(a[c[i]-'a']==1)
				break;
		}
		if(i<length&&a[c[i]-'a']==1)
			cout<<c[i]<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}