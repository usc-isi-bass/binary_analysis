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
	int n;
	scanf("%d",&n);
	int a[200];
	int b[200];
	int x=0;
	int y=0;
	for(int i=0;i<n;i++){
		scanf("%d %d",&(a[i]),&(b[i]));
	}
	for(int m=0;m<n;m++){
		if(a[m]<b[m]){
			if(a[m]==0&&b[m]==2){
				y++;
			}
			else{
				x++;
			}
		}
		if(a[m]>b[m]){
			if(a[m]==2&&b[m]==0){
				x++;
			}
			else{
				y++;
			}
		}
	}
	if(x>y){
		printf("A");
	}
	if(x<y){
		printf("B");
	}
	if(x==y){
		printf("Tie");
	}
	return 0;
}
