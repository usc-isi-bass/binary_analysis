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

/*
 * ????????? 
 * ?????2011-11-6
 * ?????
 * ?????????????
 */
int main()
{
    int a,b,c,d,e,A,B,C,D,E;                          //????
    for(a=1;a<=5;a++)                                 //??a-e???
    for(b=1;b<=5;b++){if(a==b) continue;
    for(c=1;c<=5;c++){if(a==c||b==c) continue;
    for(d=1;d<=5;d++){if(a==d||b==d||c==d) continue;
    for(e=1;e<=5;e++)
    {if(a==e||b==e||c==e||d==e||e==2||e==3)
    	continue;
    A=(e==1);                                         
    B=(b==2);
    C=(a==5);
    D=(c!=1);
    E=(d==1);
    if(A+B+C+D+E==2)                                //???????
    {if((A==1&&a==1&&B==1&&b==2)||(B==1&&b==1&&A==1&&a==2)||(A==1&&a==1&&C==1&&c==2)||(C==1&&c==1&&A==1&&a==2)||(A==1&&a==1&&D==1&&d==2)||(D==1&&d==1&&A==1&&a==2)||(E==1&&e==1&&A==1&&a==2)||(B==1&&b==1&&C==1&&c==2)||(C==1&&c==1&&B==1&&b==2)||(B==1&&b==1&&D==1&&d==2)||(D==1&&d==1&&B==1&&b==2)||(E==1&&e==1&&B==1&&b==2)||(C==1&&c==1&&D==1&&d==2)||(D==1&&d==1&&C==1&&c==2)||(E==1&&e==1&&C==1&&c==2)||(E==1&&e==1&&D==1&&d==2))//???????????
     cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;      //???????
    }
    }
    }
    }
    }

	return 0;
}

