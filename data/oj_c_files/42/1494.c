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
	int n,k,l;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>k;
	l=n;
	for(int i=0;i<l;){
		if(a[i]==k){
			for(int j=i;j<l-1;j++) a[j]=a[j+1];
			l--;
		}
		else i++;
	}
	for(int i=0;i<l;i++){
		cout<<a[i];
		if(i!=l-1) cout<<' ';
	}
	return 0;
}