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
    char bz[100][500];
    int n,i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%s",bz[i]);
                     }
    for(i=0;i<n;i++){
                     l=strlen(bz[i]);
                     for(j=0;j<l;j++){
                                      if(bz[i][l-2]=='e'){bz[i][l-2]='\0';}
                                      else if(bz[i][l-2]=='l'){bz[i][l-2]='\0';}
                                      else if(bz[i][l-2]=='n'){bz[i][l-3]='\0';}
                                      }
                     if(i!=n-1){printf("%s\n",bz[i]);}
                     else{printf("%s",bz[i]);}
                     }
    return 0;
    }
