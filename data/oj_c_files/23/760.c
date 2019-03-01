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
	int i,j,k=0,n=1;
	int c[100]={0};
	char a[101],b[100][100];
	gets(a);
	
	for (i=0;i<=strlen(a)-1;i++){
	    if (a[i]==' ') {c[n]=k;n++;k=0;}
		else {k++;b[n][k]=a[i];}
	}
	c[n]=k;
	for (i=n;i>=1;i--){
		for (j=1;j<=c[i];j++)
			printf("%c",b[i][j]);
		if (i!=1) printf(" ");
	}
}