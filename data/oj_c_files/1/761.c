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


int Factorization(int n,int k){	//????????
	int sum=0;	//??????sum??????????
	if (n<k){	//?????????k
		return 0;	//??0
	}
	if (n%k==0){	//????????k???
		if (n==k){	//?n?k???
			return 1;	//??1
		}
		else{
			sum=sum+Factorization(n,k+1)+Factorization(n/k,k);	//??????????
		}
	}
	else{
		sum=sum+Factorization(n,k+1);	//?????????k????????
	}
	return sum;	//??sum??
}

int main(){	
	int t,i,a;	//???????t???????i??????a???????
	cin>>t;	//????????
	for (i=1;i<=t;i++){	//?????????
		cin>>a;
		cout<<Factorization(a,2)<<endl;
	}
	return 0;
}