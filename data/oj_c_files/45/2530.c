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
    char a[500]={0},b[500]={0};
    int l1,l2,i,j,k=0,count=0,mark;
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l2;i++){
        count=0;
        if(b[i]==a[0]){
            mark=i;
            for(j=i;j<i+l1;j++){                
                    if(b[j]==a[k++])
                    count++;                                   
                }
            }
            if(count==l1){
            printf("%d",mark);
            break;           
            }
              
        }
     
    //printf("\n%d",count);
    scanf("%d",&i);
    return 0;
    }
