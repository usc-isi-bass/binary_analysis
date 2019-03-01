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
   int y,m,d;
   scanf("%d %d %d",&y,&m,&d);
   int month[12]={0,31,28,31,30,31,30,31,31,30,31,30};
   int i,ans;
   if(y%400==0 || (y%100&&y%4==0))month[2]=29;
   ans=0;
   for(i=1;i<m;i++)ans+=month[i];
   ans+=d;
   printf("%d\n",ans);
   return 0;
}
