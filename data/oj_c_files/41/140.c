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
    int i,a[5],flag=0,h[5];
    for(i = 0;i < 5*5*5*5*5; i++)
    {flag = 0;
            a[0] = (i%5)+1;
            a[1] = (i/5)%5+1;
            a[2] = (i/25)%5+1;
            a[3] = (i/125)%5+1;
            a[4] = (i/625)%5+1;
            for(int j = 0;j < 5;j++)
            for(int k = 0;k < j;k++)
            if(a[j] ==a[k]){flag++;}
            if(flag == 0&&a[4] != 2&&a[4] !=3)
            {//cout<<"a"<<i;
                    h[0] = (a[0]<3&&a[4]==1);
                    h[1] = (a[1]<3&&a[1]==2);
                    h[2] = (a[2]<3&&a[0]==5);
                    h[3] = (a[3]<3&&a[2]>1);
                    h[4] = (a[4]<3&&a[3]==1);
                    flag = h[0]+h[1]+h[2]+h[3]+h[4];
                    h[0] = (a[0]<3||a[4]==1);
                    h[1] = (a[1]<3||a[1]==2);
                    h[2] = (a[2]<3||a[0]==5);
                    h[3] = (a[3]<3||a[2]>1);
                    h[4] = (a[4]<3||a[3]==1);
                    if(flag==2&&h[0]+h[1]+h[2]+h[3]+h[4]==2)
                    cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<' '<<a[3]<<' '<<a[4];
            }
    }                
}