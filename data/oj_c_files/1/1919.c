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


int sum=0;//?????????????
void count(int N,int i)
{
    if(N==1) sum++;//??N??????i?????N???1????????????????sum??1
    while(i<=N){
        if(N%i==0) count(N/i,i);
        i++;//N??????????????i?
    }
    return ;
}
int main()
{
    int T=0;//??????
    cin >> T;
    while(T--)
    {
        int N=0;//?????
        cin >> N;
        int i=2,total=1;//???????2???a=a????????total?????1
        while(i<=N/2)
        {
            if(N%i==0)
            {
                sum = 0;
                count(N/i,i);
                total+=sum;
            }//??N??????????????????????
            i++;
        }
        cout<<total<<endl;
    }
    return 0;
}
