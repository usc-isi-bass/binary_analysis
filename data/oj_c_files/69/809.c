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

//****************************
//????????
//???2013.12.21
//****************************
int main()
{
	char a[260],b[260];
	int i=0,j=0,n[260]={0},m[260]={0},l=0;
	gets(a);
	gets(b);
	for(i=strlen(a)-1;i>=0;i--)
		n[j++]=a[i]-'0';
	j=0;
	for(i=strlen(b)-1;i>=0;i--)
		m[j++]=b[i]-'0';
	if(strlen(a)>strlen(b))
		l=strlen(a);
	else
		l=strlen(b);
	for(i=0;i<l;i++)
	{
		n[i]=n[i]+m[i];
		if(n[i]>=10)
		{   
			n[i+1]=n[i+1]+1;
			n[i]=n[i]-10;
		}
	}
	while(n[l]==0)
		l--;
	if(l>0)
	for(i=l;i>=0;i--)
		cout<<n[i];
	else
		cout<<"0";
	cout<<endl;
	return 0;
}