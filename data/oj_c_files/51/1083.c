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
    int n,l,t=0,c[500]={0},max=0,z=0;
    char a[1000],b[500][6];
    scanf("%d",&n);
    scanf("%s",a);
    l=strlen(a);
    for(int i=0;i<l;i++)
    {
    for(int j=i;j-i<n;j++)
    {
            b[i][j-i]=a[j];
    }
    }
    for(int i=0;i<l;i++)
    {
    for(int j=0;j+i<l;j++)
    {
            for(int k=0;k<n;k++)
            {
            if(b[i][k]==b[i+j][k]) t++;
            if(t==n) c[i]++;
            }
			t=0;
    } 
    }
    for(int i=0;i<l;i++) if(c[i]>max) max=c[i];
    if(max==0||max==1) 
	{
		printf("NO");
		goto end;
	}
	else printf("%d\n",max);
        for(int i=0;i<l;i++)
    {
            if(max==c[i])
            for(int j=0;j<n;j++)
            {
            printf("%c",b[i][j]);
            }
            printf("\n");
    }
end:    return 0;
}
    