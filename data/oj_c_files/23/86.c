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

void main()
{
 char a[100];
 char b[100][100];
 gets(a);
 int i,l,w=0,j=0,k=0,s=0;
 l=strlen(a);
 for (i=0;i<l;i++)
     {
      if (a[i]==' ') 
         {  
           w=0;
           j++;
           k=0;
          }
       else if (w==0||w==1)
             {
              b[j][k]=a[i];
              w=1;
              k++;
             }
      }
for (i=0;i<l;i++)
    {
     if (a[i]==' ') 
        w=0;
    else if (w==0)
          {
           s++;
            w=1;
           }
    }
for (i=s;i>0;i--)
    {
     printf ("%s ",b[i]);}
    printf ("%s",b[0]);

}