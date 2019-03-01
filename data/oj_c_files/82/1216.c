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

int main (){
	int n,t=0,s=0;
	int sz[100]={0},xueya[100][2];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int a=0;a<2;a++){
			scanf("%d",&xueya[i][a]);
		}
	}
	for(int b=0;b<n;b++){
		if(xueya[b][0]>=90&&xueya[b][0]<=140&&xueya[b][1]>=60&&xueya[b][1]<=90){
			sz[t]++;
		}else{
				t++;
				}
		}
	for(int g=0;g<100;g++){
		if(sz[g]>s){
			s=sz[g];
		}
	}
	printf("%d",s);
	return 0;
}
