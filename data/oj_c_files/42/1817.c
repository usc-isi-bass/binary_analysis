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
	int n,k,i,j=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		{cin>>a[i];}
	cin>>k;
	for(i=0;i<n;i++){
		if(a[i]!=k){
			a[j]=a[i];//???????????
			j++;
		}
	}
    for(i=j;i<n;i++)a[i]='\0';//??????????
	for(i=0;i<j;i++){
		if(i==0) cout<<a[i];
		else cout<<" "<<a[i];
	}//???j??
	return 0;
}