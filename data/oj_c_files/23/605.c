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
  char s[110][60];
  int i,j;
  for (i=0;scanf("%s",s[i])!=EOF;i++);
  for (j=0;j<i;j++)
	  printf("%s%s",j==0?"":" ",s[i-j-1]);
  printf("\n");
  return 0;
}
