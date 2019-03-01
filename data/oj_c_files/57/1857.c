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
     char danci[2000][2000];
    int n,i,len[2000],j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%s",danci[i]);
    len[i]=strlen(danci[i]);}
     for(i=0;i<n;i++){
    if(danci[i][len[i]-1]!='g'){
        danci[i][len[i]-2]='\0';}
       else{
       danci[i][len[i]-3]='\0';}}
for(i=0;i<n;i++){
     printf("%s\n",danci[i]);}
    return 0;
}
     