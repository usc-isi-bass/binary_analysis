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

void main()
{
 char word[50];
 int a=0,b=0,c,d,i,n,j,k;
 scanf("%d",&n);
 scanf("%s",word);
  a=strlen(word)+1;
  b=b+a;
  printf("%s",word);
 for(i=1;i<n;i++)
 {
  scanf("%s",word);
  a=strlen(word)+1;
  b=b+a;
  if(b<=81) printf(" %s",word);
   if(b>81) 
  {
   printf("\n%s",word);
   b=a;
  }
 }
}