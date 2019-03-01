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
    char str[256],a[100],b[100];
    int i,j,h;
    int n,m,result=0;
    int count;
    gets(str);
    scanf("%s%s",a,b);
    n=strlen(str);
    m=strlen(a);
    for(i=0;i<n;i++){
                     count=0;
                     if(str[i]==a[0]){
                                      h=i;
                                      for(j=0;j<m;j++){
                                                       if(str[h+j]==a[j]){
                                                                          count++;
                                                                          }
                                                       }
                                                       if(count==m){
                                                                    printf("%s",b);
                                                                    result=1;
                                                                    break;
                                                       }
                                                       if(count!=m){
                                                                    printf("%c",str[i]);
                                                       }
                                      }
                     else printf("%c",str[i]);
                     if(result==1)
                     break;
                     }
    for(i=h+m;i<n;i++){
                         printf("%c",str[i]);
                         }

  
    return 0;
}
                                    
