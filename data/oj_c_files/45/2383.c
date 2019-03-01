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

int main()
{
    
    int i,j,loci,same=0,sum=0;
    char small[51],big[51];
    scanf("%s%s",small,big);
    for(i=0;big[i]!='\0';i++){
                              if(big[i]==small[0]){
                              loci=i;
                                 for(j=0;small[j]!='\0';j++){
                                      if(big[i+j]==small[j]){
                                                             same+=1;
                                                             }
                                 sum+=1;
                                 }
                                 if(sum==same){
                                               printf("%d\n",loci);
                                               break;
                                 }else{
                                       sum=0;same=0;
                                       }
                              
                              }                  
                              } 
    
    return 0;                                        
}