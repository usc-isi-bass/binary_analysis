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
	int n,i,j,k,s=0,a[101]={0},b[101]={0},c[101]={0},d[101]={0};
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
				{if(c[i-1]==0)s++;
		c[i]=s;}
	}
	int sum=0;
	for(i=1;i<=n;i++)
	d[c[i]]++;
	for(i=1;i<=n;i++)
	if(d[i]>sum)sum=d[i];
	cout<<sum;
	return 0;
}
