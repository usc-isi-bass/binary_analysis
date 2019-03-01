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



int apple(double n,double k){
	double m;
	int x=1,i;
	while(1){
		m=x*n+k;
		for(i=1;i<n;i++){
			m=m*n/(n-1)+k;
		}
		int e=(int)m;
		if(m-e==0){
			return e;
		}else{
			x++;
		}
	}
}
int main(int argc, char* argv[])
{
	double n,k;
	int num;
	int x=1;
	scanf("%lf%lf",&n,&k);
	num=apple(n,k);
	printf("%d",num);
	return 0;
}
