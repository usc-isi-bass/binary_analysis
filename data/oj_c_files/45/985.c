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
    char word[3][51];
    int i,j,a=0;
    int b=0;
    for (i=0;i<2;i++){
        scanf("%s",word[i]);
        }
    for(i=0;i<50;i++){
                      if(word[0][i]!='\0'){
                                        a++;
                                        }
                                        else{
                                             break;
                                             }
                                        }
    for(i=0;i<50;i++){
                      if(word[0][0]==word[1][i]){
                      for(j=0;j<a;j++){
                                       if(word[0][j]==word[1][i+j]){
                                                                    b++;
                                                                    }
                                                                    }
                                                                    if(b==a){
                                                                            printf("%d",i);  
                                                                            }
                                                                            else{
                                                                                 b=0;
                                                                                 } 
                                                                    }
                                                                    }
                                                                                          
                                                                                                                                      return 0;
                                                                                                                                            
                                                   }
                                        
    
