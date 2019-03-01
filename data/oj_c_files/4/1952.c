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
int ROW,COL,row, col;
int k,i,j;
int sz[101][101];
scanf("%d %d",&ROW,&COL);
for(row=0;row<ROW;row++){
for(col=0;col<COL;col++){
scanf("%d",&sz[row][col]);}
} 
for (k=0; k<COL; k++) {
for (i=0, j=k; i<ROW && j>=0; i++, j--)
printf("%d\n",sz[i][j]);
}
for (k=1; k<ROW; k++) {
for (i=k, j=COL-1; i<ROW && j>=0; i++, j--)
printf("%d\n",sz[i][j]);
}
return 0;
}
