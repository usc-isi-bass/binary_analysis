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
	int n,i;
	int a[100][100];
	float b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i][0],&a[i][1]);
		b[i]=(float)a[i][1]/a[i][0];
	}
	for(i=1;i<n;i++){
		if(b[0]-b[i]>0.05){
			printf("worse");
			
		}
		else if(b[i]-b[0]>0.05){
			printf("better");
		}
		else{
			printf("same");
		}
		printf("\n");
	}
	return 0;
}