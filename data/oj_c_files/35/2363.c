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
	int m,n,max,min,pan;
	int hang[10],lie[10];
	int i,j;
	int a[10][10];
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		max=0;
		for(j=0;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j];
				hang[i]=j;
			}
		}
	}
	for(i=0;i<n;i++){
		min=1000;
		for(j=0;j<m;j++){
			if(a[j][i]<min){
				min=a[j][i];
				lie[i]=j;
			}
		}
	}
	pan=0;
	for(i=0;i<m;i++){
		if(lie[hang[i]]==i){
			printf("%d+%d",i,hang[i]);
			pan++;
		}
	}
	if(pan==0){
		printf("No");
	}
	return 0;
}
