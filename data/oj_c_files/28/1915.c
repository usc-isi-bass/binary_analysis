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
    int i,j=0,k=0;
    char sentence[2100],word[301][17];
    gets(sentence);
    for(i=0;i<strlen(sentence);i++){
        if(sentence[i]!=' '){
            word[k][j]=sentence[i];
            j++;
        }else if(sentence[i]==' '&&sentence[i-1]!=' '){
            k++;
            j=0;
        }
    }
    
    for(i=0;i<=k;i++){
        if(i==0)
            printf("%d",strlen(word[i]));
        else
            printf(",%d",strlen(word[i]));
        }
    return 0;
}
