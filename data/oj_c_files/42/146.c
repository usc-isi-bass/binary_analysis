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

/*
?????
???2010?10?29?
??????????
????????? ????????
*/
int main()
{
	int n,i,b,t,k,d,j,s=0;
	int a[100000]={0};
	cin>>n;
	for(d=0;d<=n-1;d++)
	{
		cin>>b;
		a[d]=b;
	}//?????????
	cin>>t;
	for(i=0;i<=n-1-s;)
	{
		if(t==a[i])//??????
		{	s++;
			for(j=i;j<=n-1;j++)
				a[j]=a[j+1];//???????
			i--;
		}
		else i++ ;
	}
	cout<<a[0];
	for(k=1;k<n-s;k++)
	{	 
		cout<<" "<<a[k];
	}//??????????
	return 0;
}
