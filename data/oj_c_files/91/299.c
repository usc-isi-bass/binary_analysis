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
   for(int i=0;i<=c-2;i++)
     b[i]=(char)((int)(a[i])+(int)(a[i+1]));
   b[c-1]=(char)((int)(a[c-1])+(int)(a[0]));
   for(int i=0;i<c;i++)
     cout<<b[i];
 

 return 0;
 }
