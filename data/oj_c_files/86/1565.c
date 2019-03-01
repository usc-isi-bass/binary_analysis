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
	int n,i,j,h,m,t=0,l,s=0;
	int a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=60;
		t=0;
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%d",&a[j]);
		    t++;
			if(a[j]+3*t<=58){
				s=s-3;
			} if(a[j]+3*t>62){
				s+=0;
			}else if(a[j]+3*t>60&&a[j]+3*t<63){
				s=a[j];
				break;
			}
		}printf("%d\n",s);
		
	}
	return 0;
}