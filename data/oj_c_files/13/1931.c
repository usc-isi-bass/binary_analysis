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
    int n,i,j,p=0;
    int a[100000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);
                     if(i==0){printf("%d",a[0]);}
                     else{
                     for(j=0;j<i;j++){
                                      if(a[i]==a[j]){p+=1;}
                                      }
                     if(p==0){printf(" %d",a[i]);}
                     p=0;
                     }
                     }
    return 0;
}        
      