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
    int n,i,j,k,flag=1;
    char str[81],num[15],*ptr;
    gets(num);n=atoi(num);
    for(i=0;i<n;i++){
                     flag=1; 
                     gets(str);ptr=str;
                     if(*ptr!='_' &&(*ptr>90 || *ptr<65)&&(*ptr>122 || *ptr<97)){
                                  printf("0\n");
                                  flag=0;
                     }else{
                           for(ptr=str+1;*ptr !='\0';ptr++){
                                                    if(*ptr!='_' && 
                                                    (*ptr>57 || *ptr<48)&&
                                                    (*ptr>90 || *ptr<65)&&
                                                    (*ptr>122 || *ptr<97)){
                                                    printf("0\n");
                                                    flag=0;
                                                    break;}
                                                    }
                           } 
                     if(flag) printf("1\n");
                     }
    return 0;
}
