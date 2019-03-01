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

int main()
{
	int w,m,j,w1;
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	if(w==7) printf("1\n");
	for(m=2;m<=12;m++){
		int sum =0;
		for(j=0;j<m-1;j++){
			sum+=days[j];}
		sum+=12;
		w1=(w+sum%7<=7)?(w+sum%7):(w-7+sum%7);
		if(w1==5) printf("%d\n",m);
	}
	return 0;
}