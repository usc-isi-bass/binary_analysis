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
      int q1,q2,q3,k=0;
      scanf("%d %d %d",&q1,&q2,&q3);
      if((q1%4==0&&q1&100!=0)||q1%400==0) k++;
      int a[15],b[16];
      if(k==0) a[2]=28;else a[2]=29;
      a[1]=31;a[3]=31;a[4]=30;a[5]=31;a[6]=30;
      a[7]=31;a[8]=31;a[9]=30;a[10]=31;a[11]=30;
      a[12]=31;b[1]=0;
       for(int i=2;i<=12;i++)
       b[i]=b[i-1]+a[i-1];
       printf("%d",b[q2]+q3);
       getchar();getchar();
      }
