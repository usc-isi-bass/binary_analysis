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

int i=0,j=0;
int a[200];
char c,d;
int solve()
{
 
 scanf("%c",&c);
 if(c==d) {
            a[i]=j;
            j++;
            i++;
            solve();
            return 0;
            }
   if(c!=d){
            printf("%d %d\n",a[i-1],j);
            i--;
            j++;
            if(i==0) return 0;
            solve();
            }
}
int main()
{  
scanf("%c",&c);
  d=c;
  a[i]=j;
  j++;
  i++;
  solve();
 
}