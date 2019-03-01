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
{   int  i,j,k,n,m,l,o;
     char s[501];
     gets(s);
     l=strlen(s);
     for(n=2;n<=l;n++)
    { for(i=0;i<=l-n;i++)
     
     for(m=i,o=i+n-1;s[m]==s[o];m++,o--)
      
 
    if(m>=o)
     
     {for(j=i;j<=i+n-1;j++)
      printf("%c",s[j]);
     
     printf("\n");break;
     }
}
}