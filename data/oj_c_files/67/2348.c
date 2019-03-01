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
    int i,n;
    cin>>n;
    double a[n],b[n];//a????b???? 
    double c[n];//???????? 
    for(i=0;i<n;i++)
    {
                    cin>>a[i]>>b[i];
                    c[i]=b[i]/a[i];
    }
    for(i=1;i<n;i++)
    {
                    if(c[i]-c[0]>0.05)
                    {
                                      cout<<"better"<<endl;
                    }//??y-x??5%??????
                    else if(c[0]-c[i]>0.05)
                    {
                                      cout<<"worse"<<endl;
                    }//??x-y??5%??????
                    else 
                    {
                                      cout<<"same"<<endl;
                    }//?????????
    }
    return 0;
}
