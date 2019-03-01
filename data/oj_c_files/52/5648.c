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

int main ()
{
	int i,m,n,a[110];
	cin>>n>>m;
	for(i=0;i<n;i++)    cin>>a[i];
	for(i=n-m;i<n;i++)   cout<<*(a+i)<<" ";
	for(i=0;i<n-m;i++)   
	{
		if(i<n-m-1)  cout<<*(a+i)<<" ";
		else cout<<*(a+i)<<endl;
	}
  	return 0;
}
