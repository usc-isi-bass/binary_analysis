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

int bianyuan(int n,int m){
	int juzhen[100][100];
	int i,j,result;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&juzhen[i][j]);
		}
	}
	result=0;
	for(j=0;j<m;j++){
		result+=juzhen[0][j];
	}
	for(j=0;j<m;j++){
		result+=juzhen[n-1][j];
	}
	for(i=1;i<n-1;i++){
		result+=juzhen[i][0];
	}
	for(i=1;i<n-1;i++){
		result+=juzhen[i][m-1];
	}
	return result;
}
int main()
{
	int n,i;
	int a,lie,hang;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&lie,&hang);
		a=bianyuan(lie,hang);
		printf("%d\n",a);
	}
	return 0;
}