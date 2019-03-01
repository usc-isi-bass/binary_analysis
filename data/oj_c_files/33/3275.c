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

int main()
{
    int i,j,n;
    char str[1000][256],num[12];
    gets(num);n=atoi(num);
    for(i=0;i<n;i++){
                     gets(*(str+i));
                     }
    for(i=0;i<n;i++){
                    for(j=0;str[i][j]!='\0';j++){
                                                 if(str[i][j]=='A'||str[i][j]=='T'){
                                                    printf("%c",149-str[i][j]);
                                                 }else{
                                                    printf("%c",138-str[i][j]);
                                                    }
                                                 }
                    printf("\n");
                     }
    
    return 0;
}