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
	int i,j,m,n;
	int a[100][6],b[100];
	for(i=0;;i++){
		for(j=0;j<6;j++){
			scanf("%d",&a[i][j]);
				}
		if(a[i][0]==0){
			break;
		}
		scanf("\n");
	}
	m=i;
	for(i=0;i<m;i++){
		b[i]=(a[i][3]+12)*3600+a[i][4]*60+a[i][5]-
			(a[i][0]*3600+a[i][1]*60+a[i][2]);
	}
	for(i=0;i<m;i++){
		printf("%d\n",b[i]);
	}
	return 0;
}