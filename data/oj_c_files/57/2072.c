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
 { int n,j=1,i,len;
  char a[200],b[200]={""};
 scanf("%d\n",&n); 
while(j<=n)
 { gets(a); len=strlen(a);
 if(a[len-1]=='r'||a[len-1]=='y') 
  for (i=0;i<=len-3;i++)printf("%c",a[i]); 
   else if(a[len-1]=='g') 
     for (i=0;i<=len-4;i++)printf("%c",a[i]); printf("\n"); j++; } } 