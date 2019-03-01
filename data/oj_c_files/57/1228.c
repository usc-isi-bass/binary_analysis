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
    char first[50][33];
    for(int a=0;a<n;a++){
        scanf("%s",first[a]);
        len=strlen(first[a]);
        if(first[a][len-1]=='r'){first[a][len-2]='\0';}else
        if(first[a][len-1]=='g'){first[a][len-3]='\0';}else
        if(first[a][len-1]=='y'){first[a][len-2]='\0';}
        printf("%s\n",first[a]);
    }
    return 0;
}
