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
    int n,k,i,j,c,a,m=0;
    cin>>n>>k;
     for(j=1;;j++)
     {c=j;
      for(i=1;i<=n;i++)
       {a=(c*n)+k;
        if(i!=n)
         {if(a%(n-1)==0) c=a/(n-1);
           else break;}
             else m=a;}
         if(m!=0) {cout<<m<<endl;break;}}
    
return 0;
}
                       
