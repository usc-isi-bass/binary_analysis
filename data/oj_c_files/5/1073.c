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
      double n;
      char a[600],b[600];
      scanf("%lf",&n);
      scanf("%s",a);
      scanf("%s",b);
      int len=strlen(a),time=0,i;
      if(strlen(a)!=strlen(b)) printf("error\n");
      else 
      {
           for(i=0;i<len;i++)
           {
                   if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')) break;
                   else if(a[i]==b[i]) time++;
           }
           if(i==len)
           {
                     if((double)time/(double)len>n) printf("yes\n");
                     else printf("no\n");
           }
           else printf("error\n");
      }
}