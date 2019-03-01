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
    int n;              //????n
    cin>>n;             //????n
    if(n%3==0)         //??????3??
    {
        cout<<"3";     //??3 
        if(n%5==0)          //??????5??
       {
           cout<<" "<<"5";     //??5
           if (n%7==0)
           cout<<" "<<"7";     //??7
       }  
       else if(n%7==0)
       cout<<" "<<"7";        //??7 
    }
    if(n%3!=0)
  {
        if(n%5==0)          //??????5??
       {
           cout<<"5";     //??5
           if (n%7==0)
           cout<<" "<<"7";
       }  
       else if(n%7==0)
       cout<<"7";          //??7
    }
    if(n%3!=0&&n%5!=0&&n%7!=0)  //?????????
    cout<<"n";          //??n
    return 0;
}
