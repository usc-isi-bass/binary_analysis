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
    char s[251];
    int a[251]={0},b[251]={0};
    cin>>s;
    int m=strlen(s);
    for (int i=strlen(s);i>=1;i--)
    a[strlen(s)-i+1]=s[i-1]-'0';
    cin>>s;
    if (strlen(s)>m)
    m=strlen(s);
    for (int i=strlen(s);i>=1;i--)
    b[strlen(s)-i+1]=s[i-1]-'0';
    int i;
    for (i=1;i<=m+1;i++)
    {
        a[i+1]+=(a[i]+b[i])/10;
        a[i]=(a[i]+b[i])%10;
    }
    for (;a[i]==0&&i>1;i--);
    for (;i>=1;i--)
    cout<<a[i];
    cout<<endl;
    return 0;
}
