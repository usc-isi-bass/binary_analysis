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
	int N;
	int a[500],b[500];
	cin>>N;//??????N
	for(int i=0;i<N;i++)
		cin>>a[i];//?N??????a[500]
	int t=0;
	for(int j=0;j<N;j++)
	{
		if(a[j]%2!=0)
		{
			t++;
			b[t]=a[j];
			
		}
	}//?????????b[500]?
	int p,q,w;
	for(q=1;q<t-1;q++)
	{
		for(p=1;p<t+1-q;p++)
		{
			if(b[p]>b[p+1])
			{
				w=b[p];
				b[p]=b[p+1];
				b[p+1]=w;
			}
		}
	}//?????????????
	for(int l=1;l<t;l++)
		cout<<b[l]<<",";
	cout<<b[t];//????
	return 0;
}
