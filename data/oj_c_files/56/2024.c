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

main()
{
   int i,chang;
   char a[5]={'\0'},b[5]={'\0'};
   scanf("%s",a);
   chang=strlen(a);
   for(i=0;i<chang;i++)
   {
   	b[i]=a[chang-i-1];
   }
   for(i=0;i<chang;i++)
   printf("%c",b[i]);
}