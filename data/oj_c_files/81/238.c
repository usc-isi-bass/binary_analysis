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
int m,n;
int a,b,c;
int i,j;
int x[5][5],y[5],z[5];
for (i=0;i<5;i++){
	for (j=0;j<5;j++){
	scanf ("%d",&x[i][j]);
	}
}
scanf ("%d %d",&m,&n);
if ((m<=4)&&(n<=4)){
	for (i=m;i<=m;i++){
		for (j=0;j<5;j++){
		y[j]=x[i][j];
		}
	}
	for (i=n;i<=n;i++){
		for (j=0;j<5;j++){
		z[j]=x[i][j];
		}
	}
	
	for (i=m;i<=m;i++){
		for (j=0;j<5;j++){
		x[i][j]=z[j];
	}
	}
	for (i=n;i<=n;i++){
		for (j=0;j<5;j++){
		x[i][j]=y[j];
		}
	}
	for (i=0;i<5;i++){
	for (j=0;j<4;j++){
	printf ("%d ",x[i][j]);
	}
	for (j=4;j<5;j++){
	printf ("%d",x[i][j]);
	}
	printf ("\n");
	}
}
else {printf ("error");}
return 0;
}

