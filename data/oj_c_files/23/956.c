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

char str[100];  
char word[100][100]; 
char a[1]; 
    
void main(){
    int i = 0;
    int j;
    char* p;
    gets(str);
    
    for(p = str;p-str < strlen(str);p ++){
        if(*p != ' '){
            a[0] = *p;
            strcat(word[i],a);
        }    
        else
            i++;
    }    
   
    for(j = i;j>0;j--)
        printf("%s ",word[j]);
        printf("%s",word[0]);
}    