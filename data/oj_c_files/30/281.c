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

int main(){
	int n,i,a[100],j,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
		a[i]=i;
	for(j=1;j<=n;j++)
		if(j%7==0||(j-7)%10==0||j/10==7)
			a[j]=0;
	for(i=1;i<=n;i++)
		sum=sum+a[i]*a[i];
	cout<<sum;
	return 0;
}
