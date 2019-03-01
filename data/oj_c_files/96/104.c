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
char a[100];
gets (a);
char b[99];
int x,y,j;
  if (strlen(a)==1)
  
{  
           printf ("%d\n%d",0,a[0]-48);
           }
           else
           {
for (j=0;j<strlen (a)-1;j++)
   {
     x=(a[j]-48)*10+(a[j+1]-48);
    b[j]=x/13;
    if (j!=0||b[j]!=0||strlen (a)==2)
    printf ("%d",b[j]);
     a[j+1]=x%13+48;
     }
     printf ("\n");
     printf ("%d",a[j]-48);
     }
getchar ();
getchar ();
     } 

