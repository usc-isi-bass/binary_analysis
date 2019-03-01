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
  int n,a[65536]={0};
  int i,j,k;
  scanf("%d",&n);a[n]++; //scanf(",%d",&n);printf("%d",n);
  while (scanf(",%d",&n)!=0){a[n]++;}
  k=0;
  for(i=65535;i>=0;i--){if(a[i]!=0)k++;if (k==2)break;}
  if (k==2)printf("%d",i);else printf("No");
}