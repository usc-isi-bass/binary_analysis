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

int a[1000];
int l=0,x;
int fff(int w,int t);
int main()
{
    int i,j,q,p,n,m,y;
    scanf("%d",&n);
    for(p=0;p<n;p++)
       {q=1;l=0;
        scanf("%d",&x);
        for(i=2;i<=x;i++)
           if(x%i==0)
             {a[q]=i;
             q++;
             }
        fff(q-1,1);
        printf("%d\n",l);
       }
}
int fff(int w,int t)
{
    int i,j,y,n,m,p;
    for(i=t;i<=w;i++)
       {if(x%a[i]==0)
          {x=x/a[i]; 
          if(x==1){l++;}
            if(x>1)
              fff(w,i);
           x=x*a[i];
          }
       }
}