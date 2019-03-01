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
    char s[50][32],w[50][32]={"\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0","\0"};
    int n,i,l;
    scanf("%d\n",&n);
    for(i=0;i<=n-1;i++)
    {
      gets(s[i]);
    }
    for(i=0;i<=n-1;i++)
    {
      l=strlen(s[i]);
      if(s[i][l-1]=='g'&&s[i][l-2]=='n'&&s[i][l-3]=='i') strncpy(w[i],s[i],l-3);
      else strncpy(w[i],s[i],l-2);
    }
     for(i=0;i<=n-1;i++)
    {
      puts(w[i]);
      
    }
    
}
