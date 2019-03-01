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
 int x,y; 
    y=0; 
    scanf("%d",&x); 
    while(x>9){ 
      y=(y+x-x/10*10)*10; 
      x=x/10; 
    } 
    y=y+x; 
    printf("%d\n",y);
}