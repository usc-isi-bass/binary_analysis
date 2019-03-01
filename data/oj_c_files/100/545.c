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

int main ()
{
    char a[300],*p;
    int c,i,j=0,k,b[26];
    for(i=0;i<26;i++)
        b[i]=0;
    p = a;
    scanf("%s",p);
    c = strlen(a);
    for(i=0;i<c+1;i++){
        for(k=0;k<26;k++){
             if(a[i] == k+'a'){
             b[k]++; }
        }
    }
    for(i =0;i<26;i++){
        if(b[i]!=0){
            printf("%c=%d\n",i+'a',b[i]);
            j++;
         }
     }
     if(j==0)
         printf("No");
     return 0;
}