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

int prime(int a)
{
int i,n;
if(a==1)return 0;
n=(int)sqrt((double)a);
for(i=2;i<=n;i++)
if(a%i==0)return 0;
 return 1; 
}
void main()
{ 
  int i,m;
  scanf("%d",&m);
  for(i=3;i<=m/2;i=i+2)
  { if(prime(i)&&prime(m-i)) {printf("%d %d\n",i,m-i); continue;}}
}
