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
      int y1,y2,m1,m2,d1,d2,i,j,k,day[12]={31,28,31,30,31,30,31,31,30,31,30,31},s1,s2,r;
      scanf("%d %d %d",&y1,&m1,&d1);
      scanf("%d %d %d",&y2,&m2,&d2);
      r=(y2-y1)/4-(y2-y1)/100+(y2-y1)/400;
      s1=365*(y2-y1)+r;
      if(m2>m1 || (m2==m1 && d2>=d1))
      {
               for(i=m1-1;i<m2-1;i++)
               {
                                   s1=s1+day[i];
               }
               s1=s1-d1+d2;
               if(((y1%4==0 && y1%100!=0)||y1%400==0)&& m1<=2)s1++;
               if((y2%4==0 && y2%100!=0)||y2%400==0)
               {
                           if(m2>2)
                            s1++;
               }
      }
      else
      {
               for(i=m2-1;i<=m1-1;i++)
               {
                                   s1=s1-day[i];
               }
               s1=s1+d1-d2-1;
               if(((y1%4==0 && y1%100!=0)||y1%400==0)&& m1<=2)s1++;
               if((y2%4==0 && y2%100!=0)||y2%400==0)
               {
                           if(m2>2)
                            s1++;
               }
      }
      printf("%d",s1);
}