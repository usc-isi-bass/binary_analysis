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
    int Ren1,Ren2;
    int i,j,n;
    int value[MAX]={0};
    cin>>n;
    while(1)
    {
        cin>>Ren1>>Ren2;            
            if(!(Ren1==0 && Ren2==0))
            {
              value[Ren1]--;           
              value[Ren2]++;         
            }
           else
           break; 
    }
 
   for(i=0;i<=n-1;i++)
     if(value[i]==n-1)
      { cout<<i;  goto line;}
     cout<<"NOT FOUND"; 
line:
    
 return 0;   
}