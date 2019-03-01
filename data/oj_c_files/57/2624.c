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
    int n,i,j;
    scanf("%d",&n);
    char word[100][1000];
    for(i=0;i<n;i++)
    {scanf("%s",word[i]);}
    for(i=0;i<n;i++)
    {int c;
    c=strlen(word[i]);
    if((word[i][c-1]=='y'&&word[i][c-2]=='l')||(word[i][c-1]=='r'&&word[i][c-2]=='e'))
    {for(j=0;j<=c-3;j++)
    {printf("%c",word[i][j]);}
    printf("\n");}
    if(word[i][c-1]=='g'&&word[i][c-2]=='n'&&word[i][c-3]=='i')
    {for(j=0;j<=c-4;j++)
    {printf("%c",word[i][j]);}
    printf("\n");}
}
getchar();
getchar();
}
    
