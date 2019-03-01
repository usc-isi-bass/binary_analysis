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
char s[100];
int i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++){
 scanf("%s",s);
 if( !(s[0]>='a'&&s[0]<='z' || s[0]>='A'&&s[0]<='Z' || s[0]=='_' || s[0]=='$') )
   printf("no\n");
 else{
  for(j=0;j<strlen(s);j++){
   if( !(s[j]>='a'&&s[j]<='z' || s[j]>='A'&&s[j]<='Z' || s[0]=='_' || s[0]=='$' || s[j]>='0'&&s[j]<='9') ){
    printf("no\n");
    break;
   }
  }
  if(j==strlen(s))
    printf("yes\n");
 }
}
return 0;
}