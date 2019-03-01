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
    
    int q;
    scanf("%d",&q);
    for(int s=0;s<q;s++)
    {       char a[100000];
            int n,i,j,m,k=0;
            scanf("%s",a);
            n=strlen(a);
                for(i=0;i<n;i++)
                    {   m=0;
                        for(j=0;j<n;j++)
                        {
                           if(a[i]==a[j])
                           m++;
                        }
                        if(m==1)
                        {printf("%c\n",a[i]);
                         k=1;
                        break;}
                    }
  if(k==0)
  printf("no\n");
    }
}
