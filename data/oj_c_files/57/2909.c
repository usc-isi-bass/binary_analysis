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
     int n,i,a[50];
     char str[50][32];
     scanf ("%d",&n);
     i=n;
     for (;i>0;i--)
     {
         scanf ("%s",str[n-i]);
         a[n-i]=strlen(str[n-i]);
         if (str[n-i][a[n-i]-1]=='r') {str[n-i][a[n-i]-2]='\0';}
         else if (str[n-i][a[n-i]-1]=='y') {str[n-i][a[n-i]-2]='\0';}
         else if (str[n-i][a[n-i]-1]=='g') {str[n-i][a[n-i]-3]='\0';}
     }
     for (i=0;i<n;i++)
     {
         printf ("%s\n",str[i]);
     }
} 