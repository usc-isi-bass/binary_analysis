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

void main()
{
    int i,l1,l2;
    int a[60]={0},b[60]={0};
    char m[100],n[100];
    scanf("%s%s",m,n);
    l1=strlen(m);
    l2=strlen(n);
    if(l1!=l2) printf("NO");
    else
    {
   for(i=0;i<l1;i++)
    {
    	if(m[i]>='A'&&m[i]<='Z') a[m[i]-'A'+26]++;
    	else a[m[i]-'a']++;
    	if(n[i]>='A'&&n[i]<='Z') b[n[i]-'A'+26]++;
    	else b[n[i]-'a']++;	
    	
    	
    	
    }
    for(i=0;i<52;i++)
    {
    	if(b[i]!=a[i]) break;
    }
    if(i==52) printf("YES");
    else printf("NO");
    }
}