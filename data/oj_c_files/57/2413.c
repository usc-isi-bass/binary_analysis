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

void main()

{
  char str[50][10];
  int n,i,c;
  scanf("%d",&n);
  for(i=0,c=0;i<n;i++)
 {
  scanf("%s",str[i]);
  c=strlen(str[i]);
  if (str[i][c-1]=='r')
  str[i][c-1]=str[i][c-2]='\0';

  if (str[i][c-1]=='y')
  str[i][c-1]=str[i][c-2]='\0';

  if (str[i][c-1]=='g')
  str[i][c-1]=str[i][c-2]=str[i][c-3]='\0';
  }
  for(i=0;i<n;i++)
  printf("%s\n",str[i]);
}