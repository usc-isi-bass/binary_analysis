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

const int maxn = 110;

int main()
{
    char str[maxn],str2[maxn];
    while(scanf("%s",str)!=EOF){
        int len = strlen(str);
        for(int i = 0 ;i < len; i++)str2[i]=str[i];
        for(int  i = 0; i < len; i ++){
            if(str[i]==')'){
                for(int  j  = i-1; j >=0; j--){
                    if(str[j]=='(') {
                        str[j]=str[i]=' ';
                        break;
                    }
                }
            }
        }
        for(int i =0 ; i <len; i++) printf("%c",str2[i]);
        printf("\n");
        for(int i = 0; i < len; i++){
            if(str[i]=='(') printf("$");
            else if(str[i]==')') printf("?");
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
