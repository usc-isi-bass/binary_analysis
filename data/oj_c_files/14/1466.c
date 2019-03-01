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

 struct student
 { int id;
   int a;
   int b;
   int zong;
 }; 
 struct student ren[100000];
 
 int main()
 {int n,i,fen,flag=0,j;
 
  scanf("%d\n",&n);
   for(i=0;i<=n-1;i++)
   { scanf("%d",&ren[i].id);
    scanf("%d",&ren[i].a);
    scanf("%d",&ren[i].b);
    ren[i].zong=ren[i].a+ren[i].b;
   }
   
   for(fen=200;fen>=100;fen--)
   { for(i=0;i<=n-1;i++)
      if(fen==ren[i].zong)
      {printf("%d %d\n",ren[i].id,ren[i].zong);
       flag=flag+1;
       if(flag==3)goto end;
      
      }
      }
      end:
  getchar();
  
}