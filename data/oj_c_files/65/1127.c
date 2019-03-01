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
    int n,i,x,y;
x=0;
y=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
        }
    for(i=0;i<n;i++){
        if(a[i]==0&&b[i]==1){
           x++;
      } if(a[i]==0&&b[i]==2){
           y++;
           }if(a[i]==1&&b[i]==2){
           x++;
}if(a[i]==1&&b[i]==0){
y++;
}if(a[i]==2&&b[i]==0)
{x++;
}if(a[i]==2&&b[i]==1){
y++;}
}
if(x>y){
printf("A");}
else if(x==y){
printf("Tie");}
else if(x<y){
printf("B");}
           return 0;
           }

