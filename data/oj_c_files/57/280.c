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
      int n,i,l;
      char str[1000]; 
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
               scanf("%s",str);
               l=strlen(str);
               if((str[l-1]=='y'&&str[l-2]=='l')||(str[l-1]=='r'||str[l-2]=='e'))
               str[l-2]='\0';
               else if((str[l-1]=='g'&&str[l-2]=='n'&&str[l-3]=='i'))
               str[l-3]='\0';
               printf("%s\n",str);
      }
      getchar();
      getchar();
} 