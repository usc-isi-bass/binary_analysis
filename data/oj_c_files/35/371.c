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
	int m,n,a[8][8],i,j,b,p,e=0,f=0,sum=0;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);}}
	for(i=0;i<m;i++){
		sum=0;
		b=a[i][0];
		e=i;
		f=0;
		for(j=0;j<n;j++){
			if(a[i][j]>b){
				b=a[i][j];
			e=i;
			f=j;}}
		for(p=0;p<m;p++){
			if(a[p][f]<b)
				break;
			else
				sum++;}
		if(sum==m){
			printf("%d+%d",e,f);
			break;}}
	if(sum!=m)
		printf("No");
	return 0;
}
