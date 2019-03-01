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
    int i,n;
    char str[100010],*p, ans ;
    int c[26]={0};
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d", &n);
    while (n--)
    {
          memset(c,0,sizeof(c));
          scanf("%s", str);
          ans = '@';
          for (p = str; *p; p++)
              c[*p - 'a']++;
          for (p = str; *p; p++)
              if (c[*p - 'a'] == 1) 
              {
               ans = *p;
               break;
               }
          if (ans == '@') printf("no\n");
          else printf("%c\n", ans);
    }
    return 0;
}
