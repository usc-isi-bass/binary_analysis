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

int money[6]={100,50,20,10,5,1};   //???? 
int need,ans[6];                   //????? 
int main()
{
    int i=0;
    cin>>need;                     //???? 
    while(need>0)
    {
        while(need>=money[i])
        {
            ans[i]++;
            need-=money[i];
        }
        i++;
    }                              //?????????? 
    for(i=0;i<6;++i) cout<<ans[i]<<endl;
    return 0;                      //????????? 
}
