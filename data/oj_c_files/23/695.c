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
    char str[105];
    gets(str);
    int i=0,j=0,words=0;
    char word[50][20];
    while(str[i]!='\0'){
        if(str[i]!=' '){
            word[words][j]=str[i];
            i++;
            j++;
        }
        else{
            word[words][j]='\0';
            words++;
            i++;
            j=0;
        }
    }
    word[words][j]='\0';
    for(i=words;i>0;i--){
        cout<<word[i]<<" ";
    }
    cout<<word[0]<<endl;
    return 0;
}