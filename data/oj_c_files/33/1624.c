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
    int n,len;
    scanf("%d",&n);
    char zfc[1000][256];
    for (int a=0;a<n;a++){
        scanf("%s",zfc[a]);
    }
    for(int b=0;b<n;b++){
        len=strlen(zfc[b]);
        for(int c=0;c<len;c++){
            if(zfc[b][c]=='A'){zfc[b][c]='T';}else
            if(zfc[b][c]=='T'){zfc[b][c]='A';}else
            if(zfc[b][c]=='C'){zfc[b][c]='G';}else
            if(zfc[b][c]=='G'){zfc[b][c]='C';}
        }
    }
   for (int a=0;a<n-1;a++){
        printf("%s\n",zfc[a]);
    }
     printf("%s",zfc[n-1]);
    return 0;
}


