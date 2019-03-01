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
    int a,b,i,j,su[8][8],k=0,x=1,y=1;
    scanf("%d,%d",&a,&b);
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    scanf("%d",&su[i][j]);
    for(i=0;i<a;i++){
    for(j=0;j<b;j++)
    if(su[i][j]>su[i][k])
    k=j;
    for(j=0;j<a;j++)
    if(su[j][k]<su[i][k])
    x=0;
    if(x)
   {
          printf("%d+%d",i,k); 
   y--;
   }
}
if(y)
printf("No");

return 0;
    }