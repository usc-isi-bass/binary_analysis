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

int minute(int x,int y,int z,int xx,int yy,int zz )
{
    int result=0;
    result+=(60-y-1)*60+60-z;
    result+=(xx-x-1+12)*3600;
    result+=yy*60+zz;
    return result;
}
int main()
{
    int t=0,result=0;;
    int a,b,c,d,e,f;
    while(1)
    {
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
        if(a==0&&b==0&&c==0&d==0&&e==0&f==0)
            break;
        t++;
        if(t!=1)
            printf("\n");
        printf("%d",minute(a,b,c,d,e,f));
    }
	return 0;
}
