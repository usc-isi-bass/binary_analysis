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
   int i,t,n;
   scanf("%d",&n);
   for(t=1;t<=n;t++){
                                       char zifu[400][400];
                                       scanf("%s",&zifu[t]);
                                       char das[400][400];
                                       int j=strlen(zifu[t]);
   if((zifu[t][j-2]=='e'&&zifu[t][j-1]=='r')||(zifu[t][j-2]=='l'&&zifu[t][j-1]=='y')){                                  
                                       for(i=0;i<j-2;i++){
                                                          das[t][i]=zifu[t][i];
                                                           }
                                       puts(das[t]);
                                       }
                                       else if(zifu[t][j-3]=='i'&&zifu[t][j-2]=='n'&&zifu[t][j-1]=='g'){
                                                                                                for(i=0;i<j-3;i++){
                                                                                                                   das[t][i]=zifu[t][i];
                                                                                                                     }
                                                                                                puts(das[t]);
                                                                                                }
                                       else{printf("%s\n",zifu[t]);}
                                      
                                       }
   
   return 0;}