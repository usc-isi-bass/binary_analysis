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

char  sen[200];
char m[200];
char c[200];
char check[200]; 
int main()
{
    gets(sen);
    gets(m);
    gets(c);
    int mark=0;
    for(int i=0;i<strlen(sen);i++)
           if(sen[i]!=' ')
              {
               check[mark]=sen[i];
               mark++;
              }else{
                      if(!strcmp(check,m))
                        printf("%s ",c);
                        else
                        printf("%s ",check);
                        memset(check,0,sizeof(check));
                        mark=0;
                    }     
    if(!strcmp(check,m))
                        printf("%s\n",c);
                        else
                        printf("%s\n",check);
                       
    return 0;
}
