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

int main()
{
	int array[100][100];
	int row,col,m,n;
	scanf("%d%d",&m,&n);
	int a,x,y,z=0;
	for(row=0;row<m;row++){
		for(col=0;col<n;col++){
			scanf("%d",&array[row][col]);
		}
	}
	for(a=0;a<m+1/2&&a<n+1/2;a++){
		x=m-a;
		y=n-a;
		for(col=a;col<y;col++){
			printf("%d\n",array[a][col]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
		for(row=a+1;row<x;row++){
			printf("%d\n",array[row][y-1]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
		for(col=y-2;col>a-1;col--){
			printf("%d\n",array[x-1][col]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
		for(row=x-2;row>a;row--){
			printf("%d\n",array[row][a]);
			z+=1;
		}
		if(z>=m*n){
	break;
		}
	}
	return 0;
}
