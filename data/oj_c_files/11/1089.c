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
    int max[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}, i, rank=0, y, m, d ;
    cin>>y>>m>>d;
    if(y%4==0 && y%100!=0 || y%400==0)
        max[2]+=1;;
    for(i=1;i<m;i++)
    {
        rank+=max[i];            
    }
    rank+=d;
    cout<<rank;
    int x;cin>>x;
    return 0;
}
