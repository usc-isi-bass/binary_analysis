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

/*
A:?????????????????: 1000ms????: 65536kB
??
??????200?????????
??
????????????200??????????????0?
??
??????????????????????0???????342?????????0342? 
????
22222222222222222222
33333333333333333333????
55555555555555555555
*/

int main()
{
    char a[300];
    char b[300];
    int aint[300];
    int bint[300];
    memset(aint,0,sizeof(aint));
    memset(bint,0,sizeof(bint));
    int la,lb,i,j;
    cin>>a>>b;
    la=strlen(a);
    lb=strlen(b);
    j=la-1;
    for(i=0;i<la;i++){
        aint[j--]=a[i]-'0';
    }
    j=lb-1;
    for(i=0;i<lb;i++){
        bint[j--]=b[i]-'0';
    }
    if(la<lb)la=lb;
    for(i=0;i<la;i++)
     {   
         aint[i]+=bint[i];
     }
     for(i=0;i<la;i++)
     {
         if(aint[i]>=10){
             aint[i+1]++;
             aint[i]%=10;
         }          
     }
    int t=0;
    for(i=299;i>=0;i--){
        if(aint[i]!=0)
             t=1;
        if(t)
            cout<<aint[i];
        if(i==0&&t==0)
            cout<<"0";
    }
    cout<<endl;
    return 0;
}
    
    
    
