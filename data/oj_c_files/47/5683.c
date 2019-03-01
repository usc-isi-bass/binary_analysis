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
	int n=0,i=0,j=0,p=0;
	int arrey[100]={0};
	cin>>n;
	for(i=0;i<n;i++)
		cin>>arrey[i];
	for(i=0,j=n-1;i<j;i++,j--)
	{
		p=arrey[i];
		arrey[i]=arrey[j];
		arrey[j]=p;
	}
	for(i=0;i<n-1;i++)
		cout<<arrey[i]<<" ";
	cout<<arrey[n-1]<<endl;
	return 0;
}
	