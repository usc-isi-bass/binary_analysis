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
    int a=0,b=0,c=0,d=0,e=0;
    int word[6];
    for(a=1;a<6;a++)
      for(b=1;b<6;b++)
      if(a==b) continue;
      else for(c=1;c<6;c++)
           if(a==c || b==c) continue;
           else for(d=1;d<6;d++)
           if(a==d || b==d ||c==d) continue;
           else for(e=1;e<6;e++)
           if(a==e||b==e||c==e||d==e||e==2||e==3) continue;
           else{
                   word[a]=e==1;
                   word[b]=b==2;
                   word[c]=a==5;
                   word[d]=c!=1;
                   word[e]=d==1;
                   if(word[1]+word[2]==2 && word[3]+word[4]+word[5]==0)
                   cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
               }
    return 0;
}
