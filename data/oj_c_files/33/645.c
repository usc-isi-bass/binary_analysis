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
    int i,n,j,l;
    char yuan[256],bu[256];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",yuan);
        l=strlen(yuan);
        for(j=0;j<=l;j++){
            if(yuan[j]=='A')
               bu[j]='T';
            else if(yuan[j]=='T')
               bu[j]='A';
            else if(yuan[j]=='C')
               bu[j]='G'; 
            else if(yuan[j]=='G')
               bu[j]='C';
            else bu[j]=yuan[j];  
            }
        puts(bu);   
        }        
    return 0;
}