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
    int n,k;
    scanf("%d",&n);
    char ID[100][10];
    int nl[100];
    int i;
    char e[10];
    for(i=0;i<n;i++){
                     scanf("%s %d",ID[i],&nl[i]);
                     }
                     int m;
    for(k=1;k<=n;k++){
                      for(i=0;i<n-k;i++){
                                         if((nl[i]<60&&nl[i+1]>=60)||(nl[i]>=60&&nl[i+1]>=60&&nl[i+1]>nl[i]))
                                         {
                      m=nl[i+1];
                      nl[i+1]=nl[i];
                      nl[i]=m;
                             strcpy(e,ID[i+1]);
                             strcpy(ID[i+1],ID[i]);
                             strcpy(ID[i],e);
                             }
                             }
                    
                     }
    for(i=0;i<n;i++){           
                     printf("%s\n",ID[i]);
                     }
                     
                   
                     return 0;
                     }
                     
    
                                                                                          
