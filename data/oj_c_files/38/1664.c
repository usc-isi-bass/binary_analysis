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
	double m,sz[101][1003]={0},aver=0,s=0,x=0,y=0;
	for(int i=0;i<n;i++){
		scanf("%lf",&m);
		for(int j=1;j<=m;j++){
			sz[i][0]=m;
			scanf("%lf",&sz[i][j]);
		}
	}
	for(int k=0;k<n;k++){
		for(int h=1;h<=sz[k][0];h++){
			x+=sz[k][h];
		}
		aver=x/sz[k][0];
		x=0;
	
	
		for(int b=1;b<=sz[k][0];b++){
			y+=pow(sz[k][b]-aver,2);
		}
		s=sqrt(y/sz[k][0]);
		y=0;
		printf("%.5lf\n",s);
		
	}

return 0;
}