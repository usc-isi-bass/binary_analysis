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

char a[200];
char b[200];
void main()
{
     gets(a);
     char *p =a;
     char *q =b;
     scanf("%s",&a);

     int n=strlen(a);
     b[n]='\0';
    
     for(p=a;p<a+n-1;p++)
     {
                       *q=*p+*(p+1);
                       q++;
     }
     *q= *a+ *p;
     printf("%s",b);
     
}
