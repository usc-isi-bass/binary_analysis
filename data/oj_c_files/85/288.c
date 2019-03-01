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
  int m=0,n,i,j,k;
  char s[21];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            scanf("%s",&s);
            
        if (s[0]<'0'||s[0]>'9')
           {
           for(j=0;s[j]!='\0';j++)
            { if(('a'<=s[j]&&s[j]<='z')||('A'<=s[j]&&s[j]<='Z')||('0'<=s[j]&&s[j]<='9')||(s[j]=='_'));else break; }

            if(s[j]=='\0') printf("yes\n");
            if(s[j]!='\0') printf("no\n");
           }
         if (s[0]<='9'&&s[0]>='0')  printf("no\n");

    }

  }