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
    int a,b,c,d,e;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=5;b++)
        {
            for(c=1;c<=5;c++)
            {
                for(d=1;d<=5;d++)
                {
                    for(e=1;e<=5;e++)
                    {
                        if(a!=1)
                        {
                            if(b==2)
                            {
                                if(a==5)
                                {
                                    if(d!=4&&d!=1)
                                    {
                                        if(e!=1)
                                        {
                                            if(c==1)
                                            {
                                             if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
                                            {
                                                printf("%d %d %d %d %d\n",a,b,c,d,e);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

}
