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
   char zfc[LEN],x[LEN],y[LEN],w[LEN];
   int len1,len2,len3,i,j,flag=0,m,tag,k=0;
   gets(zfc);
   gets(x);
   gets(y);
   len1=strlen(zfc);
   len2=strlen(x);
   len3=strlen(y);
   for(i=0;i<len1;i++){
          if(zfc[i]==x[0]){
           m=i;
           tag=0;
             for(j=0;j<len2;j++){
                 if(zfc[i+j]!=x[j]){
                   tag=1;
                   break;
                   }
                   }
             if(tag==0){
                        strcpy(w,zfc);
                        for(j=0;j<len3;j++){
                            zfc[m+j]=y[j];
                            }
                         if(m+len3>len1||m+len3==len1){
                                                       zfc[m+len3]='\0';
                                                       }
                         else if(m+len3<len1){
                                         for(i=m+len3;i<len1+len3-len2;i++){
                                             zfc[i]=w[m+len2+k];
                                             k++;
                                             }
                                         zfc[len1+len3-len2]='\0';
                                         }
                        flag=1;
                            }
                          
                   }
                   }
           
      printf("%s\n",zfc);
                     return 0;
}

