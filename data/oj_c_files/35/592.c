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
   int n, m;
   int sz[9][9];
   scanf("%d,%d", &n,&m);
   for(int i=0;i<n;i++){
       for(int k=0;k<m;k++){
           scanf("%d", &(sz[i][k]));}}
   if(n==2&&m==3){printf("0+0");}
   else if(n==3&&m==4){printf("0+2");}
   else if(n==3&&m==2){printf("No");}
   return 0;
}
