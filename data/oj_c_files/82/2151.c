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
	int n,i,j,a,max=0,y=0,sz[100][2];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&(sz[i][0]),&(sz[i][1]));
	}
	for(j=0;j<n;j++){
		y=0;
		if((sz[j][0]>=90)&&(sz[j][0]<=140)&&(sz[j][1]>=60)&&(sz[j][1]<=90)){
			y++;
			for(a=j+1;a<n;a++){
				if((sz[a][0]>=90)&&(sz[a][0]<=140)&&(sz[a][1]>=60)&&(sz[a][1]<=90)){
					y++;
				}
				else{
					break;
				}
			}
		}
		if(y>max){
			max=y;
		}
	}
	printf("%d",max);
	return 0;
}
