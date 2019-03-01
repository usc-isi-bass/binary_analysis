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
    int n,i,j,year,month1,month2,day=0;
    int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    cin>>n;
    while(n--)
    {         day=0;
              cin>>year>>month1>>month2;
              if(month1>month2) 
              { i=month1;month1=month2;month2=i;}
              if((year%4==0&&year%100!=0)||year%400==0)
              {
              for(i=month1-1;i<month2-1;i++)
              day=day+a[i];
              }
              else
              {for(i=month1-1;i<month2-1;i++)
              day=day+a[i];
              if(month1<=2&&month2>2) day=day-1;} 
              if(day%7==0) cout<<"YES"<<endl;
              else cout<<"NO"<<endl;
              }
              return 0;
              } 