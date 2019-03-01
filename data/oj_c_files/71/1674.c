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

main()
{
    int n;
    cin>>n;
    int y,m1,m2,a,b;
    int i,sum,j;
    int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=1;i<=n;i++){
        cin>>y>>m1>>m2;
        sum=0;
        if(m1-m2>=0){
           a=m1;
           b=m2;
        }else{
           a=m2;
           b=m1;
        }
        for(j=b;j<a;j++){
            sum+=d[j];
            if((j==2)&&((y%4==0)&&(y%100!=0)||(y%400==0))){
               sum++;
            }   
        }
              
        if(sum%7==0)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
    return(0);
}