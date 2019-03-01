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
     int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
     int year,month,day;
     scanf ("%d %d %d",&year,&month,&day);
     int i,j,k;
     if (year%400==0||year%4==0&&year%100!=0)
     a[1]=29;
     for (i=0,j=day;i<month-1;i++)
     j=j+a[i];
     printf ("%d",j);
     getchar ();
     getchar ();
     }
