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
	double p,sum=0.0;
	int i,n,m[300],k=0,temp;
	double c[300],a[300];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	p=sum/n;
	for(i=0;i<n;i++){
		double x=a[i]-p;
		c[i]=fabs(x);
	}
	double max=0;
	for(i=0;i<n;i++){
		if(c[i]>=max){
			max=c[i];
		}
	}
	for(i=0;i<n;i++){
		if(c[i]==max){
			m[k]=i;
			k++;
		}
	}
	for(int j=0;j<k-1;j++){
		for(int s=0;s<=k-1-j;s++){
			if(c[m[j]]<c[m[j+1]]){
				temp=c[m[j]];
                c[m[j]]=c[m[j+1]];
				c[m[j+1]]=temp;
			}
		}
	}
	for(i=0;i<k-1;i++)
		cout<<a[m[i]]<<",";
	cout<<a[m[k-1]];
	cout<<endl;
	
}