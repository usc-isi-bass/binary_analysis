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
    int a, b ,c, d , e;
    int s[5]={0};
    for(a=0;a<5;a++)
    {
                    for(b=0;b<5;b++)
                    {
                                    if(b==a)
                                    continue;
                                    //cout<<"kkk";
                                    for(c=0;c<5;c++)
                                    {
                                                    if(b==c||c==a)
                                                    continue;
                                                    //cout<<"sss";
                                                    for(d=0;d<5;d++)
                                                    {
                                                                    if(d==c||d==b||d==a)
                                                                    continue;
                                                                    //cout<<"sasas";
                                                                    e=10-a-b-c-d;
                                                                    if(e==1||e==2)
                                                                    break;
                                                                    else
                                                                    s[a]=(e==0);
                                                                    s[b]=(b==1);
                                                                    s[c]=(a==4);
                                                                    s[d]=(c!=0);
                                                                    s[e]=(d==0);
                                                                    if(s[0]+s[1]==2&&s[2]+s[3]+s[4]==0)
                                                                    cout<<a+1<<" "<<b+1<<" "<<c+1<<" "<<d+1<<" "<<e+1<<endl;
                                                    }
                                    }
                    }
    }
                                                                    

    return 0;
}
