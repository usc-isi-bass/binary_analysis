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
    int n,i,j,a;
    char s[50][15],b[2],c[3];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)gets(s[i]);
    for(i=0;i<n;i++)
    {
                    a=strlen(s[i]);
                    for(j=0;j<3;j++)c[j]=s[i][a-3+j];
                    if(s[i][a-2]=='l'&&s[i][a-1]=='y')s[i][a-2]='\0';
                    else if(s[i][a-2]=='e'&&s[i][a-1]=='r')s[i][a-2]='\0';
                    else if(strcmp(c,"ing")==0)s[i][a-3]='\0';
                    printf("%s\n",s[i]);
    }
}
