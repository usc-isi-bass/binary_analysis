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

// ???K?????
// ?????????
// ???2012.10.24 
int main()  //??? 
{
	int n,k,i,j,s,t=0,a[1000];   //?????s????t??? 
	cin>>n>>k;   //??n?k 
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}        //??????? 
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			s=a[i]+a[j];
			if (s==k) t=t+1;
		}
	}    //????????k??? 
	if (t==0) cout<<"no"<<endl;
	else cout<<"yes"<<endl;   //???? 
	return 0;
}
