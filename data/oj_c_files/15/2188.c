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
    int n,i,j,flag=1;
    int a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==0)break;
    }
    int length,width,x=0,y=0;
    for(length=j;a[i][length]==0;length++)
    {x++;}
    for(width=i;a[width][j]==0;width++)
    {y++;}
     int p;
    p=(x-2)*(y-2);
    printf("%d",p);
}
