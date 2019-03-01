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
    int n,m,i,j,k,sum,time;//counter
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        j=m;
        k=0;
        while(j>0)
        {
            cin>>k;
            j--;
            if((k+(m-j)*3)>60)
            break;
        }
        if((k+(m-j)*3)<=60)
        cout<<60-(m-j)*3<<endl;
        else
        {
            if(k+m*3-j*3-60>3)
            cout<<60-(m-j)*3+3<<endl;
            else
            cout<<k<<endl;
        }
        for(;j>0;j--)
        cin>>k;
    }    return 0;
}
