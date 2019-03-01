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
	int n,i=0;
	cin>>n;
	int iNum[n-1];
	while(i<=(n-1)){
		cin>>iNum[i];
		i=i+1;
	}
	i=0;
	while(i<=(n-1)){
		int x1=1,x2=1,x3,j=3;
		if(iNum[i]<=2){
			cout<<1;
		}
		else {
			while(j<=iNum[i]){
				x3=x2+x1;
				x1=x2;
				x2=x3;
				j=j+1;
		}
			cout<<x2<<endl;			
		}
		i=i+1;
	}
	return 0;
}
