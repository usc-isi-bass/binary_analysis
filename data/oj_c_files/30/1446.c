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
 int n,i;
 cin>>n;
 float a,b,c,d,e,s=0;
 for(i=1;i<=n;i++)
 {
  a=i%7;
  if(a==0)s=s+0;
  else{ b=i%10;
        c=b/7;
 
        if(c==1)s=s+0;
        else{d=i-b;
             e=d/70;
  
             if(e==1)s=s+0;
             else s=s+i*i;
             }
      } 
  }
 
 cout<<s<<endl;
 getchar();
 getchar();
 return 0;
 }