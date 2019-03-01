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

int main() { 
     int row, col, i, j, temp_i, a[100][100]; 
     scanf("%d%d", &row, &col); 
     for(i=0;i<row;i++) 
          for(j=0;j<col;j++) 
               scanf("%d", &a[i][j]); 
     for(j=0;j<col;j++){
           for(i=0;i<=j&&i<row;i++) 
                 printf("%d\n", a[i][j-i]); 
     } 
     for(i=1;i<row;i++){ 
           temp_i=i;
           for(j=col-1;j>=0 && temp_i<row;j--){ 
                 printf("%d\n", a[temp_i][j]); 
                 temp_i++;
           } 
     } 
     return 0; 
} 
