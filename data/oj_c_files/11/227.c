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
 int a[5],b[5],c[5],d[5],x[5],i;
 for(i=1;i<=5;i++)
 scanf("%d %d %d",&a[i],&b[i],&c[i]);
 for(i=1;i<=5;i++)
{if((a[i]%4==0&&a[i]%100!=0||a[i]%400==0)) x[i]=1;else x[i]=0;/* x[i]????1,???0 */
 if(b[i]==1) d[i]=c[i];
 else if(b[i]==2) d[i]=c[i]+31;
 else if(b[i]==3) d[i]=c[i]+31+28+x[i]; 
 else if(b[i]==4) d[i]=c[i]+31+28+31+x[i]; 
 else if(b[i]==5) d[i]=c[i]+31+28+31+30+x[i]; 
 else if(b[i]==6) d[i]=c[i]+31+28+31+30+31+x[i]; 
 else if(b[i]==7) d[i]=c[i]+31+28+31+30+31+30+x[i];
 else if(b[i]==8) d[i]=c[i]+31+28+31+30+31+30+31+x[i];
 else if(b[i]==9) d[i]=c[i]+31+28+31+30+31+30+31+31+x[i];
 else if(b[i]==10) d[i]=c[i]+31+28+31+30+31+30+31+31+30+x[i];
 else if(b[i]==11) d[i]=c[i]+31+28+31+30+31+30+31+31+30+31+x[i];
 else if(b[i]==12) d[i]=c[i]+31+28+31+30+31+30+31+31+30+31+30+x[i];/* d??????????*/
printf("%d\n",d[i]);
 }

}

