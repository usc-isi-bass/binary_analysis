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
 char a[100],b[10];
 int n,i,j;
 gets(a);
 n=strlen(a);
 for (i=0;i<10;i++)
 b[i]='0'+i;
 for (i=0;i<n;i++)
 {
   for (j=0;j<10;j++)
   {
    if (a[i]==b[j]  &&   ( (a[i+1]-'0'>=0) || ( a[i+1]-'0'<=9 ) ) )
    printf("%c",b[j]);
    
    if ( a[i]==b[j]  &&   ( (a[i+1]-'0'<0) || ( a[i+1]-'0'>9 ) ) )
    printf("\n",b[j]);
   }
 }
}
