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
 char s[31];
 int i,j,k,l;
 gets(s);
 for(i=0;i<31;i++)
  {if(s[i]>='0'&&s[i]<='9') printf("%c",s[i]);
  if(s[i]>='0'&&s[i]<='9'&&!(s[i+1]>='0'&&s[i+1]<='9')) printf("\n");
}
}