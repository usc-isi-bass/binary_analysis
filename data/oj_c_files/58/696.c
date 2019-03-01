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
    int n,i,j,len[100];
    char s[100][81],num[10];
    gets(num);
    n=atoi(num);
    for(i=0;i<n;i++){
        gets(s[i]);
        len[i]=strlen(s[i]);
    } 
    for(i=0;i<n;i++){
        if((*s[i]==95)||(*s[i]>=65&&*s[i]<=90)||(*s[i]>=97&&*s[i]<=122)){
            if(len[i]==1)
                printf("1\n");
            else{
                for(j=1;j<len[i];j++){
                    if((s[i][j]<=47)||(s[i][j]>=58&&s[i][j]<=64)||(s[i][j]>=91&&s[i][j]<=94)||(s[i][j]==96)||(s[i][j]>=123)){
                        printf("0\n");
                        break;
                    }
                    if(j==len[i]-1)
                        printf("1\n");
                }
            }
        }
        else
            printf("0\n");
    }
    return 0;
}