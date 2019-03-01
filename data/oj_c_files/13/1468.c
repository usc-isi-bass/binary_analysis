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
     int n,m,k,i,j,l;
     int s[12000];
     scanf("%d",&n);
     m=n;l=0;
     for (i=1;i<=n;i++)
     { 
         l++;
     scanf("%d",&s[l]);
                 for (j=1;j<=l-1;j++) 
                 if (s[j]==s[l])
                 {
                 l--;m--;
                 }
                 }
        for (i=1;i<=m-1;i++)
        printf("%d ",s[i]);
        printf("%d",s[m]); 

}
