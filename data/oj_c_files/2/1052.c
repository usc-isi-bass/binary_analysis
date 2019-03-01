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

struct author{
int sumbook;
int id[999];
}a[26];

int main(){
    int n,i,j,bookid=0,pos=0,maxbook=0,maxid=0;
    char booka[26];
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d%s",&bookid,booka);
        for(j=0;j<strlen(booka);++j){
            pos=booka[j]-'A';
            a[pos].id[a[pos].sumbook]=bookid;
            a[pos].sumbook++;
            if(maxbook<a[pos].sumbook){
               maxid=pos;
               maxbook=a[pos].sumbook;
            }
        }
    }
    printf("%c\n%d\n",maxid+'A',maxbook);
    for(i=0;i<a[maxid].sumbook;i++)
     printf("%d\n",a[maxid].id[i]);
}
