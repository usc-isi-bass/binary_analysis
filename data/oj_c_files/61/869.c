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

int f(int i)
{
 int a[20];
 if(i==0)
 return 1;
 else if(i==1)
 return 1;
 else
 {
 a[i]=f(i-1)+f(i-2);
 return a[i];
 }
}
main()
{
 int n,i,b[20];
 scanf("%d",&n);
 for(int k=0;k<n;k++)
 {
  scanf("%d",&b[k]);
  printf("%d\n",f(b[k]-1));

 }

}