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
{
      int n,i,j,count=0,l;
      scanf("%d",&n);
      char s[n][80];
      char string[80];
      gets(string);
      for(i=0;i<n;i++)
      {
            gets(s[i]);
            l=strlen(s[i]);
            for(j=0;j<l;j++)
            {
                if(j==0)
                {
                    if((s[i][j]=='_')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z'))
                     count++;
                }
                else
                {
                    if((s[i][j]=='_')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='0'&&s[i][j]<='9'))
                      count++;
                }                               
            }
            if(count==l)
                 printf("1\n");
            else
                 printf("0\n");
                count=0;
      }
      getchar();
      getchar();
}     
