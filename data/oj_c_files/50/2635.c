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

main()
{
    int w,i;
    scanf("%d",&w);
    if(w>2)
    w=w-2;
    else if(w==2)
    w=7;
    else if(w==1)
    w=6;
    int mouth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<12;i++)
    {if(w==5)
    printf("%d\n",i+1);
    w=w+mouth[i]%7;
    w=w%7;
  }
    
}

