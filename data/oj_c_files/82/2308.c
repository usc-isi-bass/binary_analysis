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
	int n,i,j,a,b,k[100],m,l;
	scanf("%d",&n);
	for(i=0;i<100;i++){k[i]=0;}
	m=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if((a>=90&&a<=140)&&b>=60&&b<=90){
			k[m]++;
		}
		else m++;
	}
	for(i=1;i<=m;i++){
		for(j=0;j<=m-i;j++){
			if(k[j]>k[j+1]){
				l=k[j];
				k[j]=k[j+1];
				k[j+1]=l;
			}
		}
	}
	printf("%d",k[m]);
	return 0;
}
