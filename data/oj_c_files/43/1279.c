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
	int m,i,j,k,a,b;
	cin>>m;
	for(i=3;i<=m/2;i+=2){
		a=1;b=1;
		for(j=2;j<i/2;j++){
			if(i%j==0)
				a=0;}
		for(k=2;k<(m-i)/2;k++){
			if((m-i)%k==0)
				b=0;}
		if(a*b!=0)
			cout<<i<<' '<<m-i<<endl;}
	return 0;
}