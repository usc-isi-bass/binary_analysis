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
{
    int i,l;
    int a[maxl+1]={0},ans[maxl+1]={0};
    char s[maxl+1];
    scanf("%s",s);
    for (i=0;s[i]!='\0';i++)
        a[i]=s[i]-'0';
    l=i;
    for (i=0;i<=l-1;i++)
    {
        a[i+1]=(a[i]%b)*10+a[i+1];
        ans[i]=a[i]/b;
    }
    i=0;
    while ((ans[i]==0)&&(i<=l-1))
    i++;
    if (i==l) printf("0");
    else
    for (;i<=l-1;i++)
      printf("%d",ans[i]);
    printf("\n");
    printf("%d\n",a[l]/10);
}
