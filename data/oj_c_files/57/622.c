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
    char word[33];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
         scanf("%s",word);
         if(word[strlen(word)-2]=='e'&&
            word[strlen(word)-1]=='r'){
                  word[strlen(word)-2]='\0';
                  printf("%s\n",word);
         }
         if(word[strlen(word)-2]=='l'&&
            word[strlen(word)-1]=='y'){
                  word[strlen(word)-2]='\0';
                  printf("%s\n",word);
         }
         if(word[strlen(word)-3]=='i'&&
            word[strlen(word)-2]=='n'&&
            word[strlen(word)-1]=='g'){
                  word[strlen(word)-3]='\0';
                  printf("%s\n",word);
         }
    }
return 0;
}