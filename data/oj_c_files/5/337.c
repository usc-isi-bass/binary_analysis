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
    char da[501],db[501];
    double s,ss,l;
    int l1,l2,i,m=0;
    scanf("%lf",&s);
    scanf("%s%s",da,db);
    
    l1=strlen(da);
    l2=strlen(db);
    if(l1!=l2){
               printf("error");
               return 0;
               }
    for(i=0;i<l1;i++){
        if((da[i]!='A'&&da[i]!='C'&&da[i]!='T'&&da[i]!='G')||(db[i]!='A'&&db[i]!='C'&&db[i]!='T'&&db[i]!='G')){
               printf("error");
               return 0;
               }                                                                                                   
        if(da[i]==db[i])m++;
        }   
    l=l1;
    ss=m/l;
    if(ss>s)printf("yes");
    else printf("no");
    
    return 0;
}