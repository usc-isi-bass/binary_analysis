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
    int n,i,j,k,e,age[100],six[100];
j=0;    
char id[100][10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&id[i]);
        scanf("%d",&age[i]);
        if(age[i]>=60){
           six[j]=i;
           j++;
           }
        }
    for(i=j;i>=0;i--){
        for(k=0;k<i-1;k++){
            if(age[six[k]]<age[six[k+1]]){
               e=six[k+1];
               six[k+1]=six[k];
               six[k]=e;
               }
            }
        }
    for(i=0;i<j;i++)
        printf("%s\n",id[six[i]]);
    for(i=0;i<n;i++){
        if(age[i]<60)
           printf("%s\n",id[i]);
        }
    return 0;
}

