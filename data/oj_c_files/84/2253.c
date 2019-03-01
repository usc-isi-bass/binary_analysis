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


int main(int argc, char *argv[])
{
    int n,a,max,min,i,e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&a);
                     if(i==0) {
                              max=min=a;
                              }
                     if(a>max)  max=a;
                     else if(max>a && a>min)  min=a;
                     }
                     
                     
                     
    printf("%d\n%d\n",max,min);
                               
                               

  return 0;
}
