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
    char s1[500],s2[500],*p;
    int num1[52]={0},num2[52]={0},ASC[52],i,j,len1,len2;
    scanf("%s %s",s1,s2);
    len1=strlen(s1);
    len2=strlen(s2);
    for(i=0;i<26;i++)
        ASC[i]=65+i;
    for(i=0;i<26;i++)
        ASC[i+26]=97+i;
    for(p=s1;p<s1+len1;p++){
        for(j=0;j<52;j++){
            if(*p==ASC[j]){
                num1[j]++;
                break;
            }
        }
    }
    for(p=s2;p<s2+len2;p++){
        for(j=0;j<52;j++){
            if(*p==ASC[j]){
                num2[j]++;
                break;
            }
        }
    }
    for(i=0;i<52;i++){
        if(num1[i]!=num2[i]){
            printf("NO");
            break;
        }
        else if(i==51)
            printf("YES");
    }
    return 0;
}