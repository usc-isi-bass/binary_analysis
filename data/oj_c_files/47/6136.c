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
	int n;cin>>n;
	int a[n];int tr,i;
	for( i=0;i<n;i++)cin>>a[i];
	i--;
	for(int j=0;j<i;j++,i--)
	{
		tr=a[j];a[j]=a[i];a[i]=tr;
	}
	for( i=0;i<n;i++){
		if(i==0)cout<<a[i];
		else cout<<" "<<a[i];
	}
return 0;
}
