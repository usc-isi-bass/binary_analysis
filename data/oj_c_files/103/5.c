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
        char a[1001];
        scanf("%s",a);
        int l=strlen(a);
        int i;
        for(i=0;i<l;i++)
        {
          if(a[i]>='a'&&a[i]<='z')
          a[i]=a[i]-'a'+'A';
        }
       int ncount =1;
           for(i=0;i<l;i++)
           {
             if(a[i+1]==a[i])
             ncount++;
             else
             {
                printf("(%c,%d)",a[i],ncount);
                ncount=1;
             }
           }
       getchar();
       getchar();
       getchar();
       

}
