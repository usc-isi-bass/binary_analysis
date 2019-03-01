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
{char a[256];
 char b[256],c[256];
 scanf("%s",a);
 scanf("%s",b);
 scanf("%s",c);
 int sum1=strlen(b);
 int i,j,k,m,n,p,q,start,pd=0;
  for(start=0;start<strlen(a);start++)
      {
       k=0;
       for(i=start;i<start+sum1;i++)
        {
         if(a[i]!=b[k]) break;
         k++;
        } 
       if(i==(start+sum1)) {pd=1;p=start;break;}
      }
 
  if(pd==1) 
    {for(q=p,k=0;c[k]!='\0';q++,k++)
      a[q]=c[k];
    }
 printf("%s",a);

}
