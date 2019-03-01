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
int n;
int max1,max2,num;
int exc;
max1=0;
max2=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
scanf("%d",&num);
{if(num>max1){
exc=max1;
max1=num;
max2=exc;}else if(num<max1){if(num>max2){
max2=num;
max1=max1;}}
}}
printf("%d\n%d\n",max1,max2);

return 0;
}