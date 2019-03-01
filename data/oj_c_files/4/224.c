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

void main(){
int row, col, i, j, n;
int array[100][100];
scanf("%d%d", &row, &col);
for(i=0;i<row;i++)
    for(j=0;j<col;j++)
		scanf("%d", &array[i][j]);	
for(n=0;n<col;n++){
	for(i=0;i<n+1&&i<row;i++){
		j=n-i;
	    printf("%d\n", array[i][j]);}
}
for(n=col;n<col+row-1;n++){
    for(i=n-col+1;i<row&&i<n+1;i++){
		j=n-i;
	    printf("%d\n", array[i][j]);
	}
}
}
