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
     int a,b,c,d,e;
              //???a?? 
     a=1;d=1; //a==d???
              //e!=1,e!=2,e!=3,a!=1,a!=2
     b=2;       //??b??
     c=1;a=5;e=4;d=3;//??c??
     //?????
     printf ("%d %d %d %d %d\n",a,b,c,d,e);
}