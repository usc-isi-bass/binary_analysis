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

int main()               //??? 
{
    int n,i,j;             //???? 
    double a[100][3];      //?2??????? 
    cin>>n;   //?? 
    for(i=0;i<n;i++)
    {
                    for(j=0;j<2;j++)
                    {
                                    cin>>a[i][j];
                    }
    }   //??????????? 
    for(i=0;i<n;i++)
    {
                    a[i][2]=(a[i][1]/a[i][0]);
    }    //????? 
    for(i=1;i<n;i++)
    {
                    if ((a[i][2]-a[0][2])>0.05) cout<<"better"<<endl;
                    if ((a[i][2]-a[0][2])<-0.05) cout<<"worse"<<endl;
                    if (((a[i][2]-a[0][2])<=0.05)&&((a[i][2]-a[0][2])>=-0.05))cout<<"same"<<endl;
    }     //??????? 
    return 0;
}
