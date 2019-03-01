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
 int i=0,j;
 char a[100];
 while((a[i]=cin.get())!='\n')
 {
  i++;
 }
 for(j=i-1;j>=0;j-=1)
 {
  cout<<a[j];
 }
 
 return 0;
  }