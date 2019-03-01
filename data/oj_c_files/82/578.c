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
   int n;
   scanf("%d",&n);
   int i=1;
   int x,y,z=0,max;
   max=z;
   while(i<=n){
     scanf("%d %d",&x,&y);
     if(x>=90&&x<=140&&y>=60&&y<=90){
       z=z+1;
        if(z>max){
          max=z;
        }  
     }else if(z==0&&x<90||x>140||y<60||y>90){
       z=0;
     }else if(z!=0&&x<90||x>140||y<60||y>90){
       z=z-1;
     }
       i++;
   }
   printf("%d",max);
   return 0;
}
