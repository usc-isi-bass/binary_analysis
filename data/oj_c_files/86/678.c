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
    int i,j,n,m,a,total=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d",&m);
					if(m==0)
					{printf("60\n");
					}
					else
					{
                    for(j=1;j<=m;j++)
                    {scanf("%d",&a);
					if(total<60)
                    {total=a+3*j;
                    b=j;
					}
                    }
                    if(total<=62&&total>=60)
                    {total-=3*b;
                   
                    }
                    else if(total<60)
                    {total=60-3*m;
                    
                    }
                    else
                    {total=60-3*(b-1);
                    
                    }
                    printf("%d\n",total);
					}
    }

	return 0;
}
