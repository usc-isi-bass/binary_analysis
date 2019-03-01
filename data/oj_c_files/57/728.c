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
    int n,i,k,h[50];
    char s[50][255],sz[50][255];
    scanf("%d",&n);
    for(i=0; i<n; i++){    
         scanf("%s", s[i]);
         h[i]=strlen(s[i]);
                     }
    for(i=0;i<n;i++){
    if(s[i][h[i]-1]=='r'){for(k=0;k<h[i]-2;k++){sz[i][k]=s[i][k];}}
    if(s[i][h[i]-1]=='y'){for(k=0;k<h[i]-2;k++){sz[i][k]=s[i][k];}}
    if(s[i][h[i]-1]=='g'){for(k=0;k<h[i]-3;k++){sz[i][k]=s[i][k];}}
}
     for(i=0;i<n;i++){
                      puts(sz[i]);}
                      return 0;
                      }
