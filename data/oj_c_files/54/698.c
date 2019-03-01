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


int n;
int k;

int main (){
	
	cin>>n>>k;
	int t=0;
	while(true){
		t++;
	int i=1;
	int r=t*n+k;
	
	while(i<n){
		
		if(r*n%(n-1)!=0){
			break;
		}
		r=r*n/(n-1)+k;
		i++;
	}

	if(i==n){
	cout<<r;
	break;
	}

	}

}