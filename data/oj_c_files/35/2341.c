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
    int hang,lie,shuzu[8][8];
    int i,k,number,shu=0;
    scanf("%d,%d",&hang,&lie);
    for(i=0;i<hang;i++){
                       for(k=0;k<lie;k++){
                                           scanf("%d",&shuzu[i][k]);
                                           }
                       }
    for(i=0;i<hang;i++){
                        number=0;
                        for(k=0;k<lie;k++){
                                           if(shuzu[i][k]>shuzu[i][number]){
                                                                            number=k;
                                                                            }
                                           }//????????????
                        for(int j=0;j<hang;j++){
                                if(shuzu[i][number]>shuzu[j][number]){
                                                                      break;//????????????????????
                                }else{
                                      if(j==hang-1){//???????????????????break?
                                                    printf("%d+%d\n",i,number);
                                                    shu++;
                                                    break;
                                                    }
                                      continue;
                                      }
                        }
    }
    if(shu==0){
               printf("No");
               }
    return 0;
}