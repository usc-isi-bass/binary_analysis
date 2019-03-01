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
   int i,j=0;
   char sz[101],a[101];
   gets(sz);
   int n=strlen(sz);
   for(i=0;i<n-1;i++){
    if(sz[i]==' '&&sz[i+1]==' '){continue;}else if(sz[i]!=' '||(sz[i]==' '&&sz[i+1]!=' ')){a[j]=sz[i]; j++;}}
    a[j]=sz[n-1];
   a[j+1]='\0';
    printf("%s",a);
return 0;
}