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
      char a[1000],d[100];
      int c[100],b[100],x=0,i,j,l;
      scanf("%s",a);
           for(i=0;a[i]!='\0';i++) 
           {
                 c[i]=a[i]-'0'; 
            }//????? ??c?0??c?i�1?
           if(i<=1)
           {
           d[0]='0';
           d[1]='\0';
           x=c[0];
           } 
           else if(i==2&&c[0]==1&&c[1]<3)
           {
                d[0]='0';
                d[1]='\0';
                x=c[0]*10+c[1];
                }
           else 
           {
                if(c[0]==1&&c[1]<3)
           {
                  b[0]=(c[0]*100+c[1]*10+c[2])/13;//?????13 
                  x=(c[0]*100+c[1]*10+c[2])%13;//???? 
                  j=3;
           }
           else
           {
                  b[0]=(c[0]*10+c[1])/13;//?????13 
                  x=(c[0]*10+c[1])%13;//???? 
                  j=2;
           }
            int k=0;
            for(;j<i;j++)
           {
                   k++;
                   b[k]=(x*10+c[j])/13;//????10?????? 
                   x=(x*10+c[j])%13;//????? 
           }
           for(j=0;j<=k;j++)
                   d[j]=b[j]+'0';
           d[k+1]='\0';
           }
           printf("%s\n%d",d,x);
      getchar();
      getchar();
}
    
