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
char chuan[101];
while(scanf("%s",chuan)!=EOF){
    printf("%s\n",chuan);
    int i,j,k,p;
    int sig=0;
    p=strlen(chuan)-1;
    for(i=p;i>=0;i--){
        if(chuan[i]==')') sig++;
        if((chuan[i]!='(')&&(chuan[i]!=')')) chuan[i]=' ';
        if((sig!=0)&&(chuan[i]=='(')){
            chuan[i]=' ';sig=sig-1;
            for(j=i+1;j<=p;j++)
                if(chuan[j]==')'){
                    chuan[j]=' ';break;}}}
    for(i=0;i<=p;i++){
        if(chuan[i]=='(') printf("$");
        else if(chuan[i]==')') printf("?");
        else printf(" ");}
    printf("\n");
}
return 0;
}