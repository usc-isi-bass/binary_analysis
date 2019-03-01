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

main()
{     int n,i,j,flag,t;
      char s[10000],cc;
      scanf("%d",&n);
      scanf("%c",&cc);
      for (t=0;t<n;t++)
      {
          gets(s);
          for (i=0;s[i]!='\0';i++)
           { flag=0;
             for (j=0;s[j]!='\0';j++)
                if ((s[i]==s[j])&&(i!=j)) {flag=1; break;}
             if (flag==0) {printf("%c\n",s[i]); break;}
           }
           if (s[i]=='\0') printf("no\n");
      }
}
