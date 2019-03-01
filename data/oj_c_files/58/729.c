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
    int t,i,j,p=0;
    char str[100];
    scanf("%d\n",&t);
    for(i=1;i<=t;i++)
    {
                    p=0;
                     gets(str);
                   {  for(j=0;str[j]!='\0';j++)
                     if(str[j]!='_'&&(str[j]<48||(str[j]>57&&str[j]<65)||(str[j]>90&&str[j]<97)||str[j]>122)) p=1;}
                     if(p==0&&((str[0]>64&&str[0]<91)||(str[0]>96&&str[0]<123)||str[0]=='_')) printf("1\n");
                     else printf("0\n");
                     }    
                  
                     return 0;
                     } 
