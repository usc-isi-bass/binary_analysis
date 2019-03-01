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

int main() {
  char str[110] ;
  int flag[110] ;
  memset(flag,1,sizeof(flag));
  gets(str);
  int len=strlen(str);
  int i;
  for(i=0; i<len-1;i++) { 
     if(str[i]==' ' && str[i+1]==' ')
       flag[i+1]=0 ;
  }
  for(i=0; i<len; i++)
     if(flag[i]!=0)
       printf("%c",str[i]);   
  return 1;
}