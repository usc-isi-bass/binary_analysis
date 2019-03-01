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

int main(){
  int i,l,n,j;
  char zfc[300];
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%s",zfc);
   l=strlen(zfc);
  for(j=0;j<l;j++){
   if(zfc[j]=='A') zfc[j]='T';
   else if(zfc[j]=='T') zfc[j]='A';
   else if(zfc[j]=='C') zfc[j]='G';
   else if(zfc[j]=='G') zfc[j]='C';
 }
   printf("%s\n",zfc);
}

return 0;
}