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
 * ?????????.cpp
 *?????????
 *  Created on: 2012-10-12
 *      Author: ???
 */
int main()
{
 int n,i;
 float a,b,c;
 double d,e,f,x1,x2;  //????
 cin>>n;              //?????????
 for(i=n;i>=1;i--)    //??????
 {
 cin>>a>>b>>c;        //???????
 d=b*b-4*a*c;         //?????
 if(d>0)              //??????
 {
     x1=(0-b+sqrt(d))/(2*a);
     x2=(0-b-sqrt(d))/(2*a);    //?????
     cout<<fixed<<setprecision(5)<<"x1="<<x1<<';'<<"x2="<<x2<<endl;
 }
 if(d==0)             //??????
 {
      x1=(0-b)/(2*a);
      cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;  //x1??x2
 }
 if(d<0)             //??????
 {
        e=(sqrt(-d))/(2*a);
        f=(0-b)/(2*a);
        cout<<fixed<<setprecision(5)<<"x1="<<f<<"+"<<e<<"i"<<";"<<"x2="<<f<<-e<<"i"<<endl;
 }
 }
 return 0;
}                        //????
