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
int n,i,j,k;
scanf("%d",&n);
char z[n][20];
for(i=0;i<n;i++){
    scanf("%s",z[i]);
}
for(i=0;i<n;i++){
  k=0;
  for(j=0;z[i][j]!='\0';j++){
    if(j==0){
      if(z[i][j]<='z'&&z[i][j]>='a'|| z[i][j]<='Z'&& z[i][j]>='A'||z[i][j]=='_'){k=0;}
      else {k++;}
                 }
    else {if(z[i][j]<='z'&&z[i][j]>='a'|| z[i][j]<='Z'&& z[i][j]>='A'||z[i][j]>='0'&&z[i][j]<='9'||z[i][j]=='_'){k=k;}
             else {k++;}
            }
                               }
    if(k==0){printf("yes\n");}
    else printf("no\n");
                         }
return 0;
}
