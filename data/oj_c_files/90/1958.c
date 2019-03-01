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

int fpg(int m,int n){
	int ff;
	ff=0;
    if((m==1)||(n==1)||(m==0)||(n==0)){
		ff=1;
		return 1;
	}
	else if(m>=n){ff=ff+fpg(m-n,n);
	              ff=ff+fpg(m,n-1);
	}
	else{
             ff=ff+fpg(m,n-1);
			 }
	return ff;
}
int main(){
	int m,i,t,n;
    scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&m);
		scanf("%d",&n);
		printf("%d\n",fpg(m,n));
	}
	return 0;
}
