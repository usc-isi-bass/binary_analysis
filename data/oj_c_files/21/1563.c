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

float gap(int x,float y){
	float z;
	if(x>y)z=x-y;
	else z=y-x;
	return z;
}
void main(){ 
    int num[300];
	float g;
	int n,i,j=0;
	float ave=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		ave+=num[i];
	}
	ave=ave/n;
	for(i=0;i<n-1;i++){
		if (gap(num[i],ave)<gap(num[i+1],ave) && gap(num[i+1],ave)>g)g=gap(num[i+1],ave);
		if (gap(num[i],ave)>gap(num[i+1],ave) && gap(num[i],ave)>g)g=gap(num[i],ave);
	}
	for(i=0;i<n;i++){
		if(gap(num[i],ave)==g){
			printf("%d",num[i]);
			j=i+1;
			break;}
	}
	for(i=j;i<n;i++)if(gap(num[i],ave)==g)printf(",%d",num[i]);
}
