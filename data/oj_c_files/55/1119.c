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
    int i,k,r,l,x,t[40],s,a,b;
    char c[40],d[40];
    scanf("%d %s %d",&a,c,&b);
    l=strlen(c);x=0;
    for(i=0;i<l;i++)
    {
       if(c[i]>='A'&&c[i]<='Z')
          s=c[i]-'A'+10;
       else
        {
         if(c[i]>='a'&&c[i]<='z')
          s=c[i]-'a'+10;
         else
          s=c[i]-'0';
        }
        x=s+x*a;
    }
     k=0;
     r=x;
     for(i=0;i<40;i++)
     {
       t[i]=r%b;
       r=r/b;
       k++;
       if(r==0)
       break;
     }
     for(i=0;i<k;i++)
     {
       if(t[k-1-i]>=0&&t[k-1-i]<=9)
         d[i]=t[k-1-i]+'0';
       else
           if(t[k-1-i]>=10&&t[k-1-i]<=35)
         d[i]=t[k-1-i]-10+'A';  
     }
     for(i=0;i<k;i++)
     printf("%c",d[i]);
     getchar();
     getchar();
}
