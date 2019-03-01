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
	int n;
	int k;
	int a[1010];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i]; 
		}
	//???? 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				cout<<"yes"<<endl;
				return 0; 
				} 
			} 
		}
	cout<<"no"<<endl;
	return 0; 
	} 