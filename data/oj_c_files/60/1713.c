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

int issushu(int x);
int main()
{

 int n,i,s[10000],j=0,p=0;
 scanf("%d",&n);
 
 for(i=2;i<=n;i++)
   {
     if(issushu(i))
      {
        s[j]=i;
        j++;
        
      }
   }

      for(int m=1;m<=j-1;m++)
        {if(s[m]-s[m-1]==2)
           {printf("%d %d\n",s[m-1],s[m]);{p++;}}
        }
   if(p==0){printf("empty");}     
           
     
 int y;
 scanf("%d",&y) ;   
        
 return 0;
}
int issushu(int x)
{    int result;
    for(int k=2;k<=x-1;k++)
      {
       if(x%k==0){result=0;{break;}}
       else{result=1;}
      }
      return result ;
}




