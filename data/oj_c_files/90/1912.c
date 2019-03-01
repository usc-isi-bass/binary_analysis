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

int baifang(int m,int n);
int main()
{
 	int t,m,n,i;
 	scanf("%d",&t);
 	for(i=1;i<=t;i++){
		scanf("%d %d",&m,&n);
		printf("%d\n",baifang(m,n));
		}
}
int baifang(int m,int n){
	int i,r;
	if(n==1) return 1;
	if(m==1) return 1;
	if(m<n){
		r=baifang(m,n-1);
		}
	else{
		r=baifang(m,n-1)+baifang(m-n,n);
		}
	return r;
	}