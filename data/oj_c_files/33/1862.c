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
 int n,i,l,j;
 char a[255],b[255]={'\0'};
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%s",a);
  l=strlen(a);
  for(j=0;j<l;j++)
   {
    if(a[j]=='A')
    b[j]='T';
    if(a[j]=='T')
    b[j]='A';
    if(a[j]=='C')
    b[j]='G';
    if(a[j]=='G')
    b[j]='C';
   }
  printf("%s\n",b);
  for(j=0;j<l;j++)
   b[j]='\0';
 }
 return 0;
}


 