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
	int n,k;
	cin>>n>>k;
	
	for(int i=1;i>0;i++){//i=the number of apples last monky get.
		int get=i;//the number of apples the last monky GET.
		for(int j=n-1;j>0;j--){
			if((get*n+k)%(n-1)){
				get=0;//get=0 meas this i is impossible.
				break;
			}
			get=(get*n+k)/(n-1);//GET for monky j.
		}
		if(get){
			cout<<(get*n+k);
			break;
		}
	}
}
			