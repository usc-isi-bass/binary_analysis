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
    int n=0,a0=0,b0=0;              //?????????? 
    double c0;                      //??? 
    cin>>n;
    cin>>a0>>b0;
    c0=(double)b0/a0;
    for(int i=1;i<n;i++)            //n-1??????? 
    {
                    int a=0,b=0;    //???????                  
                    double c=0;     //??? 
                    cin>>a>>b;
                    c=(double)b/a;
                    if (c>c0)         //?????????? 
                    {
                            if ((c-c0)*100<=5) cout<<"same"<<endl;  
                            else cout<<"better"<<endl;
                    }
                    if (c<c0)
                    {
                             if ((c0-c)*100<=5) cout<<"same"<<endl;
                             else cout<<"worse"<<endl;
                    }
    }

    return 0;
                                
}
