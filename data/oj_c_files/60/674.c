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
  int n,i,a,count=0,b,x=0,m=0;
  int s[10000];
  scanf("%d",&n);

  for(i=3;i<=n;i++)
  {

    for(a=2;a<=i/2+1;a++)
    {
        if((i%a)!=0)
         {
             m=m+1;
        }
    }
    if(m==i/2)
    {
        s[count]=i;
        count=count+1;
        m=0;
    }
    else
    {m=0;}

  }




  for(b=0;b<=count-1;b++)
   {
       if(s[b+1]==s[b]+2)
       {
           printf("%d %d\n",s[b],s[b+1]);
           x=x+1;
       }
    }
   if(x==0)
   printf("empty");

}
