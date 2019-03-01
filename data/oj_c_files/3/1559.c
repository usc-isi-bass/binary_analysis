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
{int i,n,k,a[1000],j=0,m;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	m=n;	
	for(j=0;j<m;j++){
	for(n;n>0;n--){
	for(i=0;i<n;i++){
    if(a[j]+a[i]==k){printf("yes");return 0;}
	}
	}n=m-j-1;
}printf("no");return 0;}