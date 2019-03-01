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

int classify(int M, int N)
{
    if(M==1||M==0||N==1) return 1;         //?????????????????????????? 
    else if(M<0) return 0;          //????????0 ???? 
    else return classify(M,N-1)+classify(M-N,N);  //??M,N???????M,N-1????M-N,N??? 
}
int main()
{
    int t,i=0,M,N;
    cin>>t;
    int p[t];
    while(i<t)
    {
        cin>>M>>N;          //??n??? 
        p[i]=classify(M,N);    //?????????
        i++; 
    }
    for(i=0;i<t;i++)          //???????? 
    cout<<p[i]<<endl;
    return 0;
}