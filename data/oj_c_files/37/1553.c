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
      int i,j,k,m,n,t;
      int a[26]={0};
      char s[1000];
      scanf("%d\n",&n);
      for(i=1;i<=n;i++)
      {
                       for(t=0;t<26;t++)
                       a[t]=0;
                       k=0;
                       gets(s);
                       m=strlen(s);
                       for(j=0;j<m;j++)
                       a[s[j]-'a']++;
                       for(j=0;j<m;j++)
                       {
                                       if(a[s[j]-'a']==1)
                        {printf("%c\n",s[j]);k=1;break;}
                                                       }
                       if(k==0)
                       printf("no\n");  
                       }}
