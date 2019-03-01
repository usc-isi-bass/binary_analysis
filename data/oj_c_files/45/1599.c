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
{char a[50],b[50];
int i,j,k,m,n;
scanf("%s %s",a,b);
m=strlen(a);
n=strlen(b);
j=0;
i=0;
do{if(a[i]!=b[j])
   {j++;i=0;}
if(a[i]==b[j])
    {j++;i++;}
  }
while(i< m&&j<n);

k=j-m;
printf("%d",k);
}
