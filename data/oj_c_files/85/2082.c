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
{    char a[29];
    int i,j,n,k=0;
    int len;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    { k=0;               
    scanf("%s",a);
    len=strlen(a);
     if((a[0]=='_')||(a[0]>='A')&&(a[0]<='Z')||
     (a[0]>='a')&&(a[0]<='z'))
     {for(j=1;j<len;j++)
      {if((a[j]=='_')||(a[j]>='A')&&(a[j]<='Z')||
     (a[j]>='a')&&(a[j]<='z')||(a[j]>='0')&&(a[j]<='9'))
     {k++;}
     }
     if(k==len-1)
     {printf("yes\n");}
     if(k!=len-1)
     {printf("no\n");}
     }
     else
     printf("no\n");
     
     }
     
     return 0;
     }
