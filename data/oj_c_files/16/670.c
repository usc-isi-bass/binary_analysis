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

 int invert(long m)
 {   printf("%ld", m%10);
     m = m/10;
     if (m>0)
         invert(m)  ;
 } 
main()
 {
     long n;
     
     scanf("%ld", &n);
     invert(n);
     printf("\n");
 }
