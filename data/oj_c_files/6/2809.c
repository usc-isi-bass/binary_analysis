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
 int a,b,o,p,sum,area[111][111];
 int k,i=0;
 scanf("%d",&k);
 for(i=0;i<k;i++){
  sum=0;
  scanf("%d%d",&a,&b);
  for(o=0;o<a;o++){
   for(p=0;p<b;p++){
    scanf("%d",&area[o][p]);
   }
  }
  if(a!=1&&b!=1)
       {for(p=0;p<b;p++)  {sum+=area[0][p]+area[a-1][p];}
  for(o=1;o<a-1;o++)  {sum+=area[o][0]+area[o][b-1];}}else{for(o=0;o<a;o++){ for(p=0;p<b;p++){sum+=area[o][p];}}}
  printf("%d\n",sum);
 }
 return 0;
}