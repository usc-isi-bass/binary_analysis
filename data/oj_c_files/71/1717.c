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


int main()                             //?????
{ 
  int N,n,m1,m2;                       //??????n,m1,m2?????
  int a[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
                                      //????a?????12????
  cin>>N;                             //??????
  for(;N>0;N--)                       //????????
  { 
      a[1]=28;                        //?2?????28         
      int d=0;                        //??d????????
      cin>>n>>m1>>m2;                 //?????
      if(n%4==0&&n%100!=0||n%400==0)  //???????
      a[1]+=1;                        //??2??????
      if(m1>m2)                       //??m1>m2??????
      {
          m1=m1^m2;
          m2=m1^m2;
          m1=m1^m2;
      }                   
      for(;m1<m2;m1++)               //?????????????
      d+=a[m1-1];                    //?????7?????????
      if(d%7==0) 
          cout<<"YES";
      else cout<<"NO"; 
      cout<<endl;                               
  }
  return 0;
}
