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

int main (){
    int n,i,j,l;
    char s[300];
    scanf("%d",&n);
    for (i=0; i<n; i++)
      {
          scanf("%s",s);
          l=strlen(s);
          if (s[l-1]=='r') s[l-2]=0;
          if (s[l-1]=='g') s[l-3]=0;
          if (s[l-1]=='y') s[l-2]=0;
          puts(s);
          
      }
      return 0;
}

