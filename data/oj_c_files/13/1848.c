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
	int n,i,j,s=0,a[20000],sign;
	int b[20000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sign=0;
		for(j=0;j<i;j++){
			if(a[j]==a[i]){
				sign=sign+1;}
		}
		if(sign==0){
			b[s]=a[i];
			s++;
		}
	}
	for(i=0;i<s;i++){
		if(i!=s-1)(printf("%d ",b[i]));
                else printf("%d",b[i]);}
	return 0;
}



