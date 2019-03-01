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

int m,n,a[1000],b[1000];
void init(){
	cin>>m>>n;
	for(int i=0;i<m;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
}
void sort(){
	for(int i=0;i<m-1;i++)
		for(int j=m-1;j>i;j--)
			if(a[j]<a[j-1]){
				int t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
	for(int i=0;i<n-1;i++)
		for(int j=n-1;j>i;j--)
			if(b[j]<b[j-1]){
				int t=b[j-1];
				b[j-1]=b[j];
				b[j]=t;
			}	
}
void combine(){
	for(int i=m;i<m+n;i++)a[i]=b[i-m];
}
void print(){
	for(int i=0;i<m+n;i++){
		if(i)cout<<' ';
		cout<<a[i];
	}
	cout<<endl;
}
int main(){
	init();
	sort();
	combine();
	print();
	return 0;
}
