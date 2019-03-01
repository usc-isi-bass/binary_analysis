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
{
int n;
char sz[100000];
scanf("%d",&n);
getchar();
for(int i=0;i<n;i++)
 {
   gets(sz);
    for(int j=0;sz[j];j++) 
     {if(sz[j]=='A') sz[j]='T';
      else if(sz[j]=='T') sz[j]='A';
           else if(sz[j]=='G') sz[j]='C';
                else if(sz[j]=='C') sz[j]='G';}
   puts(sz);
 }
return 0;
}


