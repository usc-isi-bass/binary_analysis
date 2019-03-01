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
 char a[31]={0};
 gets(a);
 int i,n,j,k;
 for(i=0;a[i];i++)
 if(a[i]==' ') a[i]='#';
 n=strlen(a);
 for(i=0;i<n;i++)
 {
  if(!(a[i]-'0'>=0&&a[i]-'0'<=9))
  {a[i]='#';}
 }
 for(i=0;i<n;i++)
 {
  if(a[i]=='#') continue;
  if(a[i]-'0'>=0&&a[i]-'0'<=9) printf("%d",a[i]-'0');
  if(a[i]-'0'>=0&&a[i]-'0'<=9&&a[i+1]=='#') printf("\n");
 }
}