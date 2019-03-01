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
  int tmp=-1;
  char ch;
  while (scanf("%c",&ch)!=EOF){
    if ((ch<48)||(ch>57)){
      if (tmp>=0)
        printf("%d\n",tmp);
      tmp=-1;
    }else{
       if (tmp<0)
         tmp=ch-48;
       else
         tmp=tmp*10+ch-48;
    }
  }
  if (tmp>=0)
    printf("%d\n",tmp);
}