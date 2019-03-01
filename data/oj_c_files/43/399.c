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
    int m,i,ii,tf,k;
    cin>>m;
    i=2;
	while (i<m/2+1)
    {
		ii=1;
		while (ii<(i/2+1))
		{
			ii=ii+1;
		    if (i%ii==0)
            {    
				tf=0;
			    break;
			}
			else
			    tf=1;
		}
        ii=1;
        while (ii<((m-i)/2+1))
        {
			ii=ii+1;
            if ((m-i)%ii==0)
                tf=0;
            else
			    tf=tf*1;
		}
        if ((tf==1)&&(i!=1)&&(m-i!=1))
		    cout<<i<<" "<<(m-i)<<endl;
        i++;
    }
	cin>>k;
    return 0;
}
            
    
    