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

main()
{   int i,j,k,m,n;
    char a[50];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {scanf("%s",a);
    m=strlen(a);
    if(a[m-1]=='g'&&a[m-2]=='n'&&a[m-3]=='i')
    {for(j=0;j<m-3;j++)
    {printf("%c",a[j]);
    if(j==m-4)
    printf("\n");}}
    else
    {for(j=0;j<m-2;j++)
    {printf("%c",a[j]);
    if(j==m-3)
    printf("\n");}}}
      }