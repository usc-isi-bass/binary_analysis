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
    int t,i,j,k,n,num=0,m,mmin,times=0;
    char s[100000];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++){
                     gets(s);
                     n=strlen(s);
                     mmin=n;
                     times=0;
                     for(j='a';j<='z';j++){
                                           for(k=0;k<n;k++){
                                                            if(s[k]==j){
                                                                        num++;
                                                                        }
                                                            }
                                           if(num==1){
                                                      times++;
                                                      for(k=0;k<n;k++){
                                                                       if(s[k]==j){
                                                                                  m=k;
                                                                                  break;
                                                                                  }
                                                                       }
                                                      if(m<mmin){
                                                                 mmin=m;
                                                                 }
                                                      }
                                           num=0;                                           
                                           }                     
                     if(times==0){
                                  printf("no\n");
                                  }
                     else{
                          printf("%c\n",s[mmin]);
                          }
                     
                     }    
  
    return 0;
    }