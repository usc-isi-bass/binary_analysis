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

int i,m,n,a[1000],b[1000],c;
void f(int a[1000],int m)
{
	for(i=0;i<m-1;i++){
		for(int j=0;j<m-1-i;j++){
			if(a[j]>a[j+1]){
				c=a[j];a[j]=a[j+1];a[j+1]=c;
			}}}
	cout << a[0];
	for(i=1;i<m;i++)
		cout << " " << a[i];
}
int main(){
	cin >> m >> n;
	for( i=0;i<m;i++){
		cin >> a[i];
	}
	f(a,m);
	for(i=0;i<n;i++){
		cin >> b[i];
	}
	cout <<" ";
	f(b,n);
	return 0;
}
