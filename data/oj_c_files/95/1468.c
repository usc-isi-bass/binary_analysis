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

char change(char c){
    if('A'<=c&&c<='Z')return c-'A'+'a';
    return c;
}
char f(char a[],int la,char b[],int lb){
    for(int i=0;i<la&&i<lb;i++){
         a[i]=change(a[i]);b[i]=change(b[i]);
         if(a[i]!=b[i]){
      if(a[i]<b[i])return '<';
      if(a[i]>b[i])return '>';
               }
        }
    return '=';
}
int main(){
    char a[100],b[100];
    gets(a);gets(b);
    int la,lb;
    la=strlen(a);lb=strlen(b);
    printf("%c",f(a,la,b,lb));
     return 0;
}