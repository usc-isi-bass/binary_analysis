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
  char s[51];
  char w[51];
  int i,j,jd;
  scanf("%s",s);
  scanf("%s",w);
  for (i=0;i<=(strlen(w)-strlen(s));i++){
      jd=0;
      if (w[i]==s[0]){
        for (j=0;j<strlen(s);j++){
            if (w[i+j]==s[j]){
                jd=0;
                }
            else jd=1;
            }
        if (jd==0){
            printf("%d",i);
            break;
            }
        }
    }
  return 0;
}
