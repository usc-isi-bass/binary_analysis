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
    int i1,i2,i3,i4,i5;
    int t[6];
    t[0]=0;
    t[1]=0;
    t[2]=0;
    t[3]=0;
    t[4]=0;
    t[5]=0;
    for(i1=1;i1<=5;i1++)
    {
        for(i2=1;i2<=5;i2++)
        {
            if(i2!=i1)
            {
                for(i3=1;i3<=5;i3++)
                {
                    if(i3!=i2&&i3!=i1)
                    {
                        for(i4=1;i4<=5;i4++)
                        {
                            if(i4!=i1&&i4!=i2&&i4!=i3)
                            {
                                for(i5=1;i5<=5;i5++)
                                {
                                    if(i5!=i1&&i5!=i2&&i5!=i3&&i5!=i4)
                                    {
                                        if((i1==1||i1==2)&&i5==1)
                                        {
                                            t[0]=1;
                                        }
                                        else if((i1!=1&&i1!=2)&&i5!=1)
                                        {
                                            t[0]=1;
                                        }
                                        else
                                        t[0]=0;
                                        if((i2==1||i2==2)&&i2==2)
                                        {
                                            t[1]=1;
                                        }
                                        else if((i2!=1&&i2!=2)&&i2!=2)
                                        {
                                            t[1]=1;
                                        }
                                        else
                                        t[1]=0;
                                        if((i3==1||i3==2)&&i1==5)
                                        {
                                            t[2]=1;
                                        }
                                        else if((i3!=1&&i3!=2)&&i1!=5)
                                        {
                                            t[2]=1;
                                        }
                                        else
                                        t[2]=0;
                                        if((i4==1||i4==2)&&i3!=1)
                                        {
                                            t[3]=1;
                                        }
                                        else if((i4!=1&&i4!=2)&&i3==1)
                                        {
                                            t[3]=1;
                                        }
                                        else
                                        t[3]=0;
                                        if((i5==1||i5==2)&&i4==1)
                                        {
                                            t[4]=1;
                                        }
                                        else if((i5!=1&&i5!=2)&&i4!=1)
                                        {
                                            t[4]=1;
                                        }
                                        else
                                        t[4]=0;
                                        if(i5!=2&&i5!=3)
                                        {
                                            t[5]=1;
                                        }
                                        else
                                        {
                                            t[5]=0;
                                        }
                                        if(t[0]==1&&t[1]==1&&t[2]==1&&t[3]==1&&t[4]==1&&t[5]==1)
                                        {
                                            printf("%d %d %d %d %d\n",i1,i2,i3,i4,i5);
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