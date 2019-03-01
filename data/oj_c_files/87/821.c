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
    int a,b,c,d,e,f,g;
    int z=0;
    while(1)  {scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a==0){break;}
    else {z=(d+12-a)*3600-b*60-c+e*60+f;}
     printf("%d\n",z);
    }

    
    return 0;
    
}
