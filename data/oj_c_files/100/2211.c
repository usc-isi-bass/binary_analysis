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


int main(){
  int a[300];
  char ch;
  int i,j;
  j=0;
  memset(a,0,sizeof(a));
  while (scanf("%c",&ch)!=EOF) a[ch]++;
  for (i=65;i<=90;i++)
    if (a[i]) {printf("%c=%d\n",i,a[i]);j++;}
  for (i=97;i<=122;i++)
    if (a[i]) {printf("%c=%d\n",i,a[i]);j++;}
  if (!j) printf("No\n");
}