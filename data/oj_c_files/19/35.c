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
 char a[100][100]={'\0'};
 int i,j=0,k;
 for(i=0;i<100;i++) {
   j+=scanf("%s",a[i]);
   if(a[i][0]<2) break;}
 for(i=0;i<100;i++) if(strcmp(a[i],a[j-1])==0) strcpy(a[i],a[j]);
 for(i=0;i<j-2;i++) printf("%s ",a[i]);
 printf("%s",a[j-2]);
 return 0;
}
