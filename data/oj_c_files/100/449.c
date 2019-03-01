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
  char a[350];
  int b[26];
  int i,j;
  scanf("%s",&a);
  for(i=0;i<26;i++)
    b[i]=0;
  for(i=0;a[i];i++)
    if(a[i]>='a' && a[i]<='z')
      b[a[i]-'a']++;
  for(i=0;i<26;i++)
    if(b[i]>0)
    {
      printf("%c=%d\n",i+'a',b[i]);
      j=1;
    }
  if(!j)
    printf("No\n");
  return 0;
}

