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
    char sr[302];
    char i[28]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int r=0,j,m;
    int sum[26]={0};
    scanf("%s",sr);
    for(m=0;sr[m]!='\0';m++)
     for(j=0;j<26;j++){
                      if(sr[m]==i[j]){
                                       sum[j]++;
                                       r=1;
                                       }
                          }
    if(r==0) printf("No");
    else  for(j=0;j<26;j++){
                           if(sum[j]!=0){
                                         printf("%c=%d\n",i[j],sum[j]);
                                         }
                           }
    return 0;
}