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

int a[1000];
int main(){
	int i,n,h,j,k,l;
	char m[3];
	m[0]='a';
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&(a[i]));
	}
	for(i=0;i<n;i++){
		   for(j=0;j<n;j++){
			   if(k==a[i]+a[j]){
				   m[0]='y';
                   m[1]='e';
				   m[2]='s';
				   for(l=0;l<3;l++){
				       printf("%c",m[l]);
				   }
				   break;
			   }
		   }
		   if(m[0]=='y'){
			   break;
		   }
	}
	if(m[0]!='y'){
		m[0]='n';
		m[1]='o';
		for(l=0;l<2;l++){
		    printf("%c",m[l]);
		}
	}
	return 0;
}
