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
    int n,i; 
    
    cin >> n;
    for (i=0;i<=n-1;i++)
    {
        int row,col;
        cin >> row >> col;
        int number[100][100];
        
        int k,m;
        for (k=0;k<=row-1;k++)
        {
            for (m=0;m<=col-1;m++)
            {
                cin >> number[k][m]; 
            }
        }
        int sum=0;
        for (k=0;k<=row-1;k++)
        {
            for (m=0;m<=col-1;m++)
            {
                if (k==0||m==0||k==row-1||m==col-1)
                {
                    sum+=number[k][m];
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
 