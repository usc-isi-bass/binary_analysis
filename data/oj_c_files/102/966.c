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
    char a[100];
    int k,n,i,j,nimei=0,meizi=0;
    double tem,m[100],f[100],b;
 scanf("%d",&n);
 
 for(j=0;j<n;j++){
                   scanf("%s%lf",a,&b);
                   
                   if(a[0]=='m'){
                                 m[nimei]=b;
                                 nimei++;
                                 }
                    else{f[meizi]=b;
                        meizi++;
                        }
                        }
            for(i=0;i<nimei;i++){
                                 for(k=0;k<nimei-1;k++){
                                                        if(m[k]>m[k+1]){
                                                                        tem=m[k];
                                                                        m[k]=m[k+1];
                                                                        m[k+1]=tem;
                                                                        }
                                                         }
                                 }
  for(i=0;i<meizi;i++){  
                              for(k=0;k<meizi-1;k++){
                                                        if(f[k]<f[k+1]){
                                                                        tem=f[k];
                                                                        f[k]=f[k+1];
                                                                        f[k+1]=tem;
                                                                        }
                                                      }
                              }
 for(j=0;j<nimei;j++){  printf("%.2lf ",m[j]);}
 for(j=0;j<meizi-1;j++){printf("%.2lf ",f[j]);}
 printf("%.2lf",f[meizi-1]);
                                     
                                     
                                                                                                      

return 0;}