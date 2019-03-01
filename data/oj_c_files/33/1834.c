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
 int n;
char m[10000][256];
scanf("%d",&n);
for (int j=0;j<n;j++){ 
        scanf("%s",m[j]); }
for(int j=0;j<n;j++){                       
        for(int i=0;i<strlen(m[j]);i++){
        if(m[j][i]=='A')m[j][i]='T';
        else if(m[j][i]=='T')m[j][i]='A';
        else if(m[j][i]=='G')m[j][i]='C';
        else if(m[j][i]=='C')m[j][i]='G';
        printf("%c",m[j][i]);}
        printf("\n");}
   

return 0;
}