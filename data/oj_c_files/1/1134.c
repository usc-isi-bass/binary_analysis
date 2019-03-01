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

int qipa(int p,int q)    // ?p???????????q?????? 
{
    int i,l,s=0;
    if(p==1) return 1;
    for(i=p;i>1;i--)
      if(p%i==0 && i<=q)
        s+=qipa(p/i,i);
    return s;
}
int main()
{
  int i,j,n,m,t;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&m);   
    t=qipa(m,m);
    printf("%d\n",t);    
  }
return 0;
}