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
{char a[100],b[100];
int t,i,x,cd;
scanf("%s",a);
cd=strlen(a);
for(i=0;i<cd;i++)
      a[i]-='0';
      
      if(cd==1)
      printf("0\n%d",a[0]);
      else if(cd==2&&10*a[0]+a[1]<13)
      printf("0\n%d",10*a[0]+a[1]);
      else
      {
for(i=0;i<=cd-2;i++)
{
   x=a[i]*10+a[i+1];
   b[i]=x/13;
   a[i+1]=x-b[i]*13;
 }
   if(b[0]!=0)
   printf("%d",b[0]);
   for(i=1;i<=cd-2;i++)
   printf("%d",b[i]);
   printf("\n%d",a[i]);
   }
}
                         
                         
                         
