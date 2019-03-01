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
    char a[301]="";
    scanf("%s",a);
    int count[27]={0},flag=0;
    int i,j;
    int n=strlen(a);
    for(i=0;i<=n;i++)
    {
                     for(j=97;j<123;j++)
                     {
                                      if(a[i]==j) count[j-97]++;
                     }
    }
    char word[27]={97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122};
    //char *p=&word[0];
    for(i=0;i<26;i++)
    {
                     if(count[i]!=0)
                     {
                            printf("%c=%d\n",word[i],count[i]);
                            flag=1;
                    }
                     
    }
    if(!flag)   
        printf("No");
    getchar();getchar();
    return 0;
}
                                      
                    
                    
    
