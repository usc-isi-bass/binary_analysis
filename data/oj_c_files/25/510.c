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
	int n,i,j,m,t;
	cin>>n;
	int a[1000]={0};
	a[0]=2;
	for(i=0,t=1;i<n-1;i++){
		for(j=0,m=0;j<t;j++){
			a[j]=a[j]+a[j]+m;
			if(a[j]>9){
				a[j]=a[j]-10;
				m=1;
				t++;
			}
			else m=0;
		}
	}
	for(i=99;i>0;i--)
		if(a[i]!=0)
			break;
	for(j=i;j>=0&&n!=0;j--)
		cout<<a[j];
	if(n==0)
		cout<<"1";
	cout<<endl;
	return 0;
}