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
	int n,t,i,j;
	int a[25],b[25];
	cin>>n;
	for(i=0;i<n;i++)cin>>a[i];
	int max=1;
	b[0]=1;
	for(i=1;i<n;i++){
		t=1;
		for(j=i-1;j>=0;j--)
			if(a[i]<=a[j]&&t<b[j]+1)
				t=b[j]+1;
		b[i]=t;
		max=b[i]>max?b[i]:max;
	}
	cout<<max<<endl;
	return 0;
}