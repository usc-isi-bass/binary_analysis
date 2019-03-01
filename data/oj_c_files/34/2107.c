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

/**
* @file 4.cpp
* @auther ???
* @date   2011/10/26
* @description
*      ????????????????? 
*/ 


int suan1(int p)
{
cout<<p<<"*"<<3<<"+"<<1<<"="<<p*3+1<<endl;
return(p*3+1);

}

int suan2(int p)
{
cout<<p<<"/"<<2<<"="<<p/2<<endl;
return(p/2);

}

int main()
{
 int t;
 cin>>t;

 while (t>1)
 {
   if (t % 2==0)
	  t= suan2(t);
   else
	   t=suan1(t);
 
 
 }
 cout<<"End";
    return(0);
    
    
} 
