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
  int m,a,b;//m=????? a,b=?? 
  int i,j,k,l;
  cin>>m;
  for(a=3;a<=m/2;a++)
    {
    int j=0;
    for(i=2;i<a;i++)
      j=j+(a%i==0);
    if(j==0)
      {
        b=m-a;    
        int k=0;
        for(l=2;l<b/2;l++)
          k=k+(b%l==0);
        if(k==0)
          cout<<a<<" "<<b<<endl;    
            }
      
    
                   }
  return 0;
}
