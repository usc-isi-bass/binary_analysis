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
    int p,q,i,flag=1;double m,c=0,d=0;char a[10086],b[10086];
    scanf("%lf",&m);
    scanf("%s",a);scanf("%s",b);
    p=strlen(a);q=strlen(b);if(p!=q){flag=0;}
    for(i=0;a[i]!='\0';i++)
    {
                           if((a[i]=='A')||(a[i]=='G')||(a[i]=='C')||(a[i]=='T')){}else{flag=0;}
                           }
     for(i=0;b[i]!='\0';i++)
    {
                           if((b[i]=='A')||(b[i]=='G')||(b[i]=='C')||(b[i]=='T')){}else{flag=0;}
                           }
    for(i=0;a[i]!='\0';i++)
    {
                           if(a[i]==b[i]){c++;}d++;
                           }
    if(flag==0){printf("error");}
    if(flag==1){
    if(c/d>=m){
    printf("yes");}else{printf("no");}}
    
    return 0;
}