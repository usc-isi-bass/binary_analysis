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
    char DNA[N1][N2];
    int n,i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){  
       scanf("%s",DNA[i]);
       for(k=0;DNA[i][k]!=0;k++)
       {
       if(DNA[i][k]=='A'){
          DNA[i][k]='T';}
          else if(DNA[i][k]=='T')
          {DNA[i][k]='A';}
            else if(DNA[i][k]=='G')
            {DNA[i][k]='C';}
              else
              {DNA[i][k]='G';}
              }
    }
    for(i=0;i<n;i++){
    printf("%s\n",DNA[i]);}
    return 0;
    }