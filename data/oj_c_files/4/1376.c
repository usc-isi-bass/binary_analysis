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
  int row,col,a[100][100],i,k,j;
  scanf("%d %d",&row,&col);
  for(k=0;k<row;k++){
    for(i=0;i<col;i++){
      scanf("%d",&(a[k][i]));
    }
  }
  for(i=0;i<201;i++){
    k=0;
    j=i;
    while(j>=0){
      if(0<=j&&j<col&&0<=k&&k<row)printf("%d\n",a[k][j]);
      j--;
      k++;
    }
  }
  return 0;
}
