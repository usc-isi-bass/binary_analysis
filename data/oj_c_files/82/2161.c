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
	int a,b,n,z[100],i,e,r;
	r=0;
	e=-1;
	scanf("%d",&n);
	for(i=0;i<100;i++) z[i]=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){z[i]=1;r=1;}
	}
	for(i=e+1;i<n-1;i++){
		if(z[i]==1&&z[i+1]==1){
			for(e=i+1;e<n-1;e++){
				if(z[e]==1&&z[e+1]==1) continue;
				else break;
			}
			if(r<e-i+1) r=e-i+1;
		}
	}
	printf("%d",r);
	return 0;
}

