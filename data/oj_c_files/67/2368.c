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
    float n,i,a0,b0,a,b,x,y,result;
    cin>>n;                                     //???????? 
    cin>>a0>>b0;                                //????????? 
    x=b0/a0;                                    //?????????? 
    for (i=1;i<n;i++)
        {
         cin>>a>>b;                             //???????? 
         y=b/a;                                 //????????? 
         result=y-x;
         if (result>0.05)
            cout<<"better"<<endl;
         else if (result<-0.05)
                 cout<<"worse"<<endl;
         else if ((result>-0.05)&&(result<0.05))
              cout<<"same"<<endl;               //??????? 
        }
    return 0;
}
