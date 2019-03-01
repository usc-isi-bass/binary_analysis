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


int main(int argc, char* argv[])
{
	int m,n,i,j,t,s,k=0;
	int a[9][9],max=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){			
		scanf("%d",&a[i][j]);
	}
	}

	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>=max){
				max=a[i][j];
				s=i;
				t=j;
		}}
		
		for(i=0;i<m;i++,i!=s){
			if(a[i][t]>max){
			printf("%d+%d",s,t);
			k=1;
			break;
	}}}
		if(k!=1){
			printf("No");
	}

	return 0;
}
