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


int num[16];


int Compare(const void* elem1,const void* elem2)
{
    return *((int*)elem1) - *((int*)elem2);
}

int main()
{
    int n;
    while (cin>>n&&n!=-1)
    {
        memset(num,0,sizeof num);
        num[0] = n;
        int count = 0;
        int i = 1;
        for (;cin>>n&&n!=0;i++)
            num[i] = n;
        qsort(num,i,sizeof(int),Compare);

        for (int j =0;j<i-1;j++)
        {
            int temp = num[j];
            for (int k=j+1;k<i;k++)
            {
                if (num[k]==temp*2)
                {
                    count++;
                    break;
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
