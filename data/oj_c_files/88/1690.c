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
    char input[50];
    int output=0,i,k=0,l;
    gets(input);
    l=strlen(input);
    for(i=0;i<=l-1;i++){
                        if(input[i]>=48&&input[i]<=57){
                                                    output=10*output+(input[i]-48);
                                                    k++;
                                                     }
                        else{
                             if(k>0&&input[i-1]>=48&&input[i-1]<=57)
                             {printf("%d\n",output);
                             output=0;}
                             }
                        }
    if(output!=0){printf("%d", output);}
    return 0;
}
