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

/**
*@file 1.cpp
*@author ???
*@date 2013-10-30
*@description ??
*/


int main()
{
    int a[30], i, j, count1, count2 ;
    while(scanf("%d",&a[0]),a[0]!=-1)
 {
    count2=0;
    i=0;
    while(a[i]){scanf("%d",&a[++i]);}
    count1=i-1;
    for(i=0; i<=count1; i++)
    {
        for(j=i+1; j<=count1; j++)
            if(a[i]==2*a[j]||a[j]==2*a[i])
            count2++;
    }
    cout << count2 << endl ;
 }
    return 0;
}
