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
    int n , m ;
	double sum , s[10000];
	s[1]=1;
	s[2]=2;
	for (int i=3 ; i<100 ; i++ ){
		s[i]=s[i-1]+s[i-2];
//		printf("%d %d\n",i , s[i]);
	}
	scanf("%d",&m);
	while(m--){
		scanf("\n%d",&n);
		sum=0;
		for (int i=1 ; i<=n ; i++ )sum+=s[i+1]/s[i];
		printf("%.3f\n",sum);
	}
	return 0;
}