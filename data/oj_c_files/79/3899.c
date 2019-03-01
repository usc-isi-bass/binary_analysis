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


int f(int m,int n)
{
  int i;
  int k=0;
  for(i=2;i<=n;i++)
    k=((m%i)+k)%i;
  return k;
}

int main(void)
{
  int m[100],n[100],i=0,z;
  while(1){
    scanf("%d%d",&n[i],&m[i]);
    if(m[i]==0&&n[i]==0) break;
    i++;
    z=i;
  }
  for(i=0;i<z;i++){
    printf("%d\n",f(m[i],n[i])+1);
  }
  return 0;
}
