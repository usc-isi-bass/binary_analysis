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
    int i=1,n,j,r=0,a[20001],b[101];    //r?????????b???????? 
    cin>>n;
    memset(b,1,sizeof(b));              //?b????????1?????????0 
    
     do
      { 
       r=r+1;                      //?????? 
       cin>>j;                     //???????j    
       if (b[j]!=0)                //????????a????????? 
       {
       a[i]=j;
       b[a[i]]=0;
       i=i+1;
       }
       }
      while (r<n);
       
    for (j=1;j<i-1;j++)  cout<<a[j]<<' ';   
    cout<<a[i-1]; //?? 

    
    return 0;
}
    