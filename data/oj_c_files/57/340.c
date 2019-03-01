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
    int n,l,i;
    char s[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%s",s);
      l=strlen(s);
      s[l]='\0';
      if(s[l-1]=='r'&&s[l-2]=='e')
      s[l-2]='\0';
      else if(s[l-1]=='y'&&s[l-2]=='l')s[l-2]='\0';
      else s[l-3]='\0';
      printf("%s\n",s);
      }
      getchar();
      getchar();
}
