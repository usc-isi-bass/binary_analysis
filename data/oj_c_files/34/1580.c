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
	cin>>n;
	while(n!=1){
		if(n%2){
			int t=n*3+1;
			cout<<n<<"*3+1="<<t<<endl;
			n=n*3+1;
		}
		else{
			int t=n/2;
			cout<<n<<"/2="<<t<<endl;
			n=n/2;
		}
	
	}
	cout<<"End"<<endl;
	return 0;
}
