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
   char pSource[100];
   gets(pSource);

char arrSentence[100] = {0};
int i = 0 ,j = 0;
int nSpace = 0;
while ( pSource[i] != 0 )
{
 if ( nSpace < 1 )
 {
  arrSentence[j++] = pSource[i];
 }
 if ( pSource[i] == ' ' )
 {
  nSpace ++;
  if ( pSource[i+1] != ' ' )
  {
   nSpace = 0;
  }
 }
 i++;
}
printf("%s\n" ,arrSentence);
return 0;
}