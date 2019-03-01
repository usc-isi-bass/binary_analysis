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
      int m,a,b,k,s;
      
      scanf("%d",&m);
      for(a=3;a<=(m/2);a=a+2)
      {
        for(k=3;k<a;k=k+2)
        {if(a%k==0)
        {a=a+2;
        k=3;}}
        
        
        b=m-a;
        if(b>=a)
        {
        s=0;
        for(k=3;k<b;k=k+2)
        {if(b%k==0)
        s=s+1;}
  
        
        if(s==0)
        printf("%d %d\n",a,b);
        }
        
        }
      
      
      


}
