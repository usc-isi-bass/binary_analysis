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

int main()
{
   char a[1000];
   cin.getline(a,1000,'\n');
   int c=strlen(a);
 
   char b[1000];
   char *p=a,*q=b;
   for(p=a;p<=a+c-2;q++,p++)
   *q=(char)((int)(*p)+(int)(*(p+1)));
   *q=(char)((int)(*p)+(int)(*(p-c+1)));
   for(q=b;q<b+c;q++)
     cout<<*q;

 return 0;
 }
