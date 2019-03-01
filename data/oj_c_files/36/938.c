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
	char a[100],b[100],i,j;
	int ta[24]={0},tb[24]={0};
	cin>>a;
	cin>>b;
	for(i=0;i<=23;i++)
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]=='a'+i)
				ta[i]++;
		}
	for(i=0;i<=23;i++)
		for(j=0;j<strlen(b);j++)
		{
			if(b[j]=='a'+i)
				tb[i]++;
		}
	for(i=0;i<23;i++)
		if(ta[i]!=tb[i])
		{
			cout<<"NO";
			break;
		}
	if(i==23)
		cout<<"YES";
	return 0;
}