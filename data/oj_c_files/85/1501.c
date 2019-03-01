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

int main (){
  int n,i,flag,j;
  scanf ("%d",&n);
  char a[21];

  for(i=0;i<n;i++){
   scanf ("%s",a);
   flag=0;
   if((a[0]=='_')||((a[0]<='z')&&(a[0]>='a'))||((a[0]>='A')&&(a[0]<='Z'))){
      for(j=1;a[j]!='\0';j++){
          if(!((a[j]=='_')||((a[j]<='z')&&(a[j]>='a'))||((a[j]>='A')&&(a[j]<='Z'))||((a[j]>='0')&&(a[j]<='9')))){
           flag=0;
          goto m;
          }
          else {
           flag=1;
           continue ;
          }
        }

   }


 m:if (flag){
 printf ("yes\n");
}else {
 printf ("no\n");
}
  }
return 0;

}
