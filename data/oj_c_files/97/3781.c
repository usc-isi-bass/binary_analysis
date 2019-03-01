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
    int a;
    int q;
    int sz[6]={100,50,20,10,5,1};
    scanf("%d",&a);
    for(int i=0;i<=5;i++){
        q=a/sz[i];
    printf("%d\n",q);
        a=a-sz[i]*q;
    }
    return 0;
    
}
