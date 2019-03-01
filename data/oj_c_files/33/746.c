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
char s[256];
int n,i,j;
scanf("%d",&n);getchar();
 for(j=0;j<n;j++){ 
	gets(s);
    for(i=0;i<strlen(s);i++){
         if(s[i]=='T'){printf("A");}
         if(s[i]=='A'){printf("T");}
         if(s[i]=='G'){printf("C");}
         if(s[i]=='C'){printf("G");}
	}
 printf("\n");
 }
return 0;
}