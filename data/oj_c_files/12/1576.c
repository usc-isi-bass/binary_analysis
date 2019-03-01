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
    int num[16]={0},i=0,j=0,sum=0;
    while(1)
    {
        scanf("%d",&num[0]);
        if(num[0]==-1) break;
        for(i=1;num[i-1]!=0;i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=0;num[i]!=0;i++)
        {
            for(j=0;num[j]!=0;j++)
            {
                if((num[i]==2*num[j])&&(num[i]!=0)&&(num[j]!=0))
                sum++;
            }
        }
        cout<<sum<<endl;
        sum=0;

    }
    return 0;
}