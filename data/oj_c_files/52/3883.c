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

void swap(int *p,int *q)//???????
{
	int *temp=p;
	p=q;
	q=temp;
	return;
}
int main()
{
	int m,n,a[100],temper=0;//????
	cin>>n>>m;//??
	for(int i=0;i<n;i++)
		cin>>a[i];
	int s=m;
	while(m>0)//??????
	{
		swap(a[n-m],temper);
		for(int j=n-m;j>s-m;j--)
			swap(a[j],a[j-1]);
		swap(a[s-m],temper);
		m--;
	}
	for(int i=0;i<n-1;i++)//??
		cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;
	return 0;
}
