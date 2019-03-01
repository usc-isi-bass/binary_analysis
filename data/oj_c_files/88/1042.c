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
{char a[31];
 char *p;
 cin.getline(a,31);
 p=a;
 while(*p!='\0')
 {if(*p>='0'&&*p<='9')
  {
   while(*p>='0'&&*p<='9')
   {cout<<*p;
    p++;
   }
   cout<<endl;
  }
  else p++;
 }
 return 0;
} 
 