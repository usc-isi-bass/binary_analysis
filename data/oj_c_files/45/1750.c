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
  char s[50],w[50];
  int i,j,z,k=0,len1,len2;
  scanf("%s",s);
  scanf("%s",w);
  len1=strlen(s);
  len2=strlen(w);
  for(i=0;i<len2;i++){
       if (w[i]==s[0]){
           for(z=0,j=i;j<i+len1;j++,z++){
                if(s[z]==w[j]) k++;
           }
           if (k==len1) printf("%d",i);
       }
   }

   return 0;
}
      
  
    