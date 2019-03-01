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
 char word[100],answord[100];
  gets(word);
  int len=strlen(word);
  int i=0,anslen=0;
  answord[0]=word[0];
  anslen++;
  for(i=1;i<len;i++)
  {
   if(word[i]==' '&&word[i-1]==' ')
    continue;
   else 
    answord[anslen++]=word[i];
  }
  answord[anslen]='\0';
  puts(answord);
  return 0; 
}
