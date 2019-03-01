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
    int m,i;                                        //m????i
    cin>>m;
    double x;                                       //x????? 
    double a,b,c;                                   //x=b/a; 
    double result;                                  //????
    //????????? 
    for (i=1;i<=m;i++)
    {
        int n,j;                                    //n?
        cin>>n;
        a=1,b=2;                                    //a?b??????? 
        result=2/1;                                 //???????????? 
        for (j=1;j<=n;j++)
        {
            c=b+a;
            a=b;
            b=c;                                    //????? 
            
            x=b/a;                                  //j=1??x=3/2 
            result=result+x;                        //???? 
        }
        result=result-x;                            //???????
        printf("%.3f",result);
        cout<<'\n';
    } 
    return 0;                                       //?> w <? 
} 