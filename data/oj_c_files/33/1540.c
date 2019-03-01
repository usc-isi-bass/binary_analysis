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
  int n;
  char ml[300];
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++){
      scanf("%s",ml);
      int l=strlen(ml);
      for(int k=0;k<l;k++){
          if(ml[k]=='A'){ml[k]='T';}
          else if(ml[k]=='T'){ml[k]='A';}
          else if(ml[k]=='C'){ml[k]='G';}
          else if(ml[k]=='G'){ml[k]='C';}
      printf("%c",ml[k]);
      }
      printf("\n");
  }
  
  
    return 0;
}



