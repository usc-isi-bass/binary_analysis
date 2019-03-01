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
	char a[250],b[250];
	int X[251]={0},Y[250]={0};
	cin>>a>>b;
	int l1=strlen(a),l2=strlen(b);
	int i,k=0;
	for(i=l1-1;i>=0;i--)
		X[k++]=a[i]-'0';
	k=0;
	for(i=l2-1;i>=0;i--)
		Y[k++]=b[i]-'0';

	if(l1>=l2)
		k=l1;
	else
		k=l2;

	for(i=0;i<k;i++)
	{
		X[i] += Y[i];
		if(X[i]>=10)
		{
			X[i+1] += 1;
			X[i] %= 10;
		}
	}
	i=k;
	while(i>0)
	{
		if(X[i]!=0)
			break;
		i--;
	}
	for(;i>=0;i--)
		cout<<X[i];
	cout<<endl;
	return 0;
}