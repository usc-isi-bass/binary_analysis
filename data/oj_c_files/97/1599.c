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
    int n,hun,fif,twe,ten,fiv,one;
    scanf("%d",&n);
    hun=n/100;
    fif=(n-hun*100)/50;
    twe=(n-hun*100-fif*50)/20;
    ten=(n-hun*100-fif*50-twe*20)/10;
    fiv=(n-hun*100-fif*50-twe*20-ten*10)/5;
    one=(n-hun*100-fif*50-twe*20-ten*10-fiv*5)/1;
    int sz[6]={hun,fif,twe,ten,fiv,one};
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d\n",sz[i]);
    }
    return 0;
}