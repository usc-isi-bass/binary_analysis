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
    int oushu,xiao,da,i,j,panduan; 
    cin>>oushu;
    for(xiao=3;xiao<=oushu/2;xiao++)
    {  
                                         panduan=0;
                                         da=oushu-xiao;
                                         for(i=2;i<xiao;i++)     
                                         {
                                                                     if(xiao%i==0)panduan++;//??????????? ??????panduan?? 
                                         }
                                         for(j=2;j<da;j++)     
                                         {
                                                                   if(da%j==0)panduan++;//?????????????????panduan?? 
                                         }
                                         if(panduan==0)cout<<xiao<<" "<<da<<endl;//???????????panduan????????? 
       
    }
cin.get();cin.get();cin.get();
return 0;
} 
