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
	int s,i,n,k,j;
	cin>>n>>k;
	for(i=1;;i++){
		s=n*i+k;
		for(j=1;j<n;j++){
			if(s%(n-1)==0)
				s=s*n/(n-1)+k;
			else if(s%(n-1)!=0)
				break;
		}
		if(j==n) {cout<<s<<endl;return 0;}
	}
}


