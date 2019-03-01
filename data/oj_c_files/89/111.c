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
	int a[10010],b[10010];
	int p,q;
	cin>>n;
	cin>>p>>q;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(p!=0 || q!=0){
		a[p]++;
		b[q]++;
		cin>>p>>q;
	}
	int i;
	for(i=0;i<n;i++){
		if(a[i])
			continue;
		else{
			if(b[i] == n-1){
				cout<<i<<endl;
			}break;
		}
	}return 0;
}