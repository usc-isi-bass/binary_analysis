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
	int d[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,sum,i,j;
	cin>>n;
	for(i=1;i<=12;i++){
		sum=0;
		for(j=0;j<i-1;j++){
			sum+=d[j];
		}
		if((sum+13+n-1)%7==5) cout<<i<<endl;
	}
	return 0;
}
