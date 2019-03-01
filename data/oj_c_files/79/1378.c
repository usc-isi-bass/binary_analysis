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
    int n,m,i,j,pos,f[400];
    while (scanf("%d %d",&n,&m),n|m)
    {
        memset(f,0,sizeof(f));
        pos=0;
        for (i=1;i<=n;i++)
        {
            j=0;
            while (j<m)
            {
				pos++;
				if (pos>n)pos=1;
                if (f[pos]==0)
                    j++;
                
            }
            //printf("!%d\n",pos);
            f[pos]=1;
        }
        printf("%d\n",pos);
    }
    return 0;
}
