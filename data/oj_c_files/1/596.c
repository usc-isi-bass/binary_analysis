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


int cut(int m,int l){
	int sum=1;
	for(int i=l;i<=sqrt((double)m/l);i++){
		if((m/l)%i==0){
		sum+=cut(m/l,i);
		}
	}
	return sum;
}

int main (){
	int n;
        cin>>n;
for(int i=0;i<n;i++){
        int t=0;
        cin>>t;
	cout<<cut(2*t,2);
	if(i<n-1) cout<<endl;
}
	
}
