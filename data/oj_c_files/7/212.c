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
    char a[257]={0};
    char b[257]={0};
    char c[257]={0};
    int i=0;
    int j=0;
    int k=0;
    gets(a);
    gets(b);
    gets(c);
int isbreak=0;
    int len=strlen(b);
    for(i=0;i<257;i++){
                           if(a[i+len-1]=='\0')
                                                break;
                           for(j=i;j<i+len;j++){
                                                if(a[j]==b[j-i]){
                                                k++;}
                                                else{
                                                     k=0;
                                                }
                                                }
                           if(k==len){
                                        isbreak=1;
                                      for(j=i;j<i+len;j++){
                                                           a[j]=c[j-i];
                                                           }
                                                           }
if(isbreak!=0)break;
                                                           }
    puts(a);
    return 0;
}