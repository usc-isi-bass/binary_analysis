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

int main ()
{
 char s[1000][256],zfc[1000][256];
 int  i,j,l,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {
    scanf("%s",&s[i]);
 }
  for(i=0;i<n;i++){
    l=strlen(s[i]);
    for(j=0;j<l;j++){
    if(s[i][j]=='A'){
    zfc[i][j]='T';
     }else if(s[i][j]=='T'){
    zfc[i][j]='A';
    }else if(s[i][j]=='C'){
    zfc[i][j]='G';
    }else {
    zfc[i][j]='C';
    }
}
zfc[i][j]='\0';
printf("%s\n",zfc[i]);
}
return 0;
}