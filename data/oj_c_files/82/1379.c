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
	int n,i,j,s,t=0,m,max=0,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
        if(a>=90&&a<=140&&b>=60&&b<=90){
			t++;
            if(t>max){
			  max=t;
			}
		}else{
			t=0;
		}
	}printf("%d",max);
	return 0;
}
