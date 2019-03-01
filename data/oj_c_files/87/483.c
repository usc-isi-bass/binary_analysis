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
    int a,b,c,d,e,f,i,k;
    int s[1000];
    k=0;

    for(i = 0; i < 1000; i++){
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a==0){
    break;
    }
    s[i]=3600-b*60-c+(d+11-a)*3600+e*60+f;
    k++;
    }

   for(i = 0; i < k; i++){
       printf("%d\n",s[i]);
       }
        return 0;
}

