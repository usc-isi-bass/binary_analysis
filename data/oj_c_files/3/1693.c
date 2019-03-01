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
	int n,k,i,a,m=0,s1[1000],s2[1000];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&s1[i]);
		s2[i]=s1[i];
	}
	for(i=0;i<(n-1);i++){
		for(a=(i+1);a<n;a++){
			if(s1[i]+s2[a]==k){
				m++;
			}
		}
	}
	if(m>0) printf("yes");
	else printf("no");
	return 0;
}