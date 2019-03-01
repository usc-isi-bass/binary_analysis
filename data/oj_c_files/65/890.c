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
    int m,n=0,o=0,p,q,j;
     scanf("%d",&m);
  for(j=0;j<m;j++){
      scanf("%d%d",&p,&q);
      if((p==0&&q==1)||(p==1&&q==2)||(q==p-2))n++;
      else if(p>q||(q==p+2))o++;
      }
  if(n>o){printf("A");}
  if(n<o){printf("B");}
  if(n==o){printf("Tie");}
  return 0;
}
  