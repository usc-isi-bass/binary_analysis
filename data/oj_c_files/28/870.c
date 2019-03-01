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
    char a[6000]={0};
    int b[300]={0};
    b[0]=-1;
    int i=0;
    int k=0;
    gets(a);
    int len=strlen(a);
    for(i=0;i<len;i++){
                         if(a[i]!=' '){
                                    k=k+1;}
                         else if(a[i]==' '&&k!=0){
                              printf("%d,",k);
                         k=0;}
   }
   printf("%d",k);
   return 0;
} 