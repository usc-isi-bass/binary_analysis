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

//***********************************************
//???:??13                                 *
//??????                                  *
//??11?14?                                  *
//***********************************************
int main()
{
    int a[100],i,r=0,len;
    char c[100];
    cin.getline(c,100);
    len=strlen(c);
    for(i=0;i<len;i++)
    {
        //????????????a[i]?r? 
        a[i]=(c[i]-'0')+r*10;
        r=a[i]%13;
        a[i]/=13;
    }
    //?????????0????i 
    for(i=0;i<len;i++)
    {
        if(a[i]!=0)
        break;
    } 
    //????0.???????0 
    if(i==len)
    {
        cout<<0<<endl;
        cout<<r;
    } 
    else 
    {
        for(;i<len;i++)
            cout<<a[i];
        cout<<endl;
        cout<<r;
    }
    return 0;
} 

