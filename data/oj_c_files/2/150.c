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

struct book
{
    int id;
    char zz[26];
} b[999];
int main()
{
    int m,n,i,num[26]={0},maxz,j;
    char string[26];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d %s",&b[i].id,&b[i].zz);
        for(j=0;b[i].zz[j]!='\0';j++)
        num[b[i].zz[j]-'A']++;
    }
    int max=0;
    for(i=0;i<26;i++)
     if(max<num[i]) { max=num[i]; maxz=i;}
    printf("%c\n%d",maxz+65,max);
    for(i=0;i<m;i++)
     for(j=0;b[i].zz[j]!='\0';j++)
      {if(b[i].zz[j]==maxz+65) printf("\n%d", b[i].id);
        else continue;}
}
