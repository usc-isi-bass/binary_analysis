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

main ()
{
     char a[1000];
     char b[1000];
     int c[1000];
     for (int i=0;i<1000;i++)
     c[i]=1;
     scanf ("%s",a);
     int l;
     l=strlen(a);
     for (int i=0;i<l;i++)
     {
         if (a[i]>'Z')
         a[i]=a[i]-'a'+'A';
     }
     int n;
     n=0;
     for (int i=0;i<l;i++)
     {
         if (i==0)
         {
                  b[0]=a[0];
         }
         else if (a[i]==a[i-1])
         {
              c[n]=c[n]+1;
         }
         else if (a[i]!=a[i-1])
         {
              n=n+1;
              b[n]=a[i];
         }
     }
     for (int i=0;i<=n;i++)
     {
         printf ("(%c,%d)",b[i],c[i]);
     }
     getchar ();
     getchar ();
}