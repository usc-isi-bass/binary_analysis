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
  int a,b,c,k,i,j;
  char p[100],q[100];
  scanf("%s %s",p,q);
  a=strlen(p);
  b=strlen(q);
  if(a==b){
    for(i=0;i<a;i++){
      k=1;
      for(j=0;j<a-i;j++){
        if(p[i]==q[j]){
          k=0;
          for(c=j;c<a-i;c++)
          q[c]=q[c+1];
          break;
          }
          }
      if(k==1)
      break;
      }
    if(k==1)
    printf("NO");
    if(k==0)
    printf("YES");
    }
  else
    printf("NO");
    
  }  