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

/********************?????????********************
??
????n*n????3<=n<=100?????????????
??n-1???????????????????1*1????
????????
???????????????????????????
??????????????????????????
????????????????????????????????0?
????????????n*n????????????
????????a[][]??????a[1][1]????????
???????(n-1)*(n-1)????
??????????(n-1)*(n-1)?????????
?????n-1?????? n*n??????????1*1????
????????a[1][1]????
????
????????n?
???n?n*n????
?????n?????n????????????????
????
???n??????????????????????????a[1][1]????
????
3
1 2 3
2 3 4
3 4 5
1 2 3
5 4 2
9 4 5
1 2 3
5 4 2
9 5 4
????
0
2
1
??
9
5 56 52 53 47 11 2 1 68
56 44 31 27 42 2 51 53 21
52 72 54 14 39 39 9 52 75
38 28 69 73 65 49 42 35 19
74 39 81 59 67 30 45 8 73
22 59 47 39 33 66 21 12 65
15 11 63 22 71 9 13 10 11
63 39 36 75 44 78 50 68 3
58 67 11 76 71 18 69 9 74

38 19 81 80 77 19 54 7 58
4 19 64 34 11 25 23 69 50
32 78 35 10 66 64 2 23 71
62 26 4 28 62 50 34 35 67
72 37 28 59 20 10 77 45 48
57 38 3 63 20 70 19 10 23
17 2 6 12 32 14 30 34 45
47 69 61 44 58 17 37 78 19
12 41 67 40 18 36 38 33 23
61 47 18 48 6 23 78 81 29
??
283
**************************************************************
????
????
??????????
?????a[1][1]??
????2???????????????
**************************************************************
programmer Qiu Hezi
version 1.0
creat date 2012.10.31 9:15
finish date
***************************************************************/
int main()
{
    int n;
    cin>>n;
    for (int i=0 ; i<n ; i++)
    {
        int a[n][n];
        //????
        for (int j=0 ; j<n ; j++)
        {
            for (int k=0 ; k<n ; k++)
            {
                cin>>a[j][k];
            }
        }
        int a11=0;//??a[1][1]???
        //??p-1?????????2??2??
        for (int p=n ; p>=2 ; p--)
        {
            //?????
            for (int j=0 ; j<p ; j++)
            {
                int min=a[j][0];
                for (int k=1 ; k<p ; k++)
                {
                    if (a[j][k]<min)
                    {
                        min=a[j][k];
                    }
                }
                for (int k=0 ; k<p ; k++)
                    a[j][k]-=min;
            }
            //?????
            for (int j=0 ; j<p ; j++)
            {
                int min=a[0][j];
                for (int k=1 ; k<p ; k++)
                {
                    if (a[k][j]<min)
                    {
                        min=a[k][j];
                    }
                }
                for (int k=0 ; k<p ; k++)
                    a[k][j]-=min;
            }
            a11+=a[1][1];
            //?????2?
            for (int j=0 ; j<p ; j++)
            {
                for (int k=1 ; k<p-1 ; k++)
                {
                    a[j][k]=a[j][k+1];
                }
            }
            //?????2?
            for (int j=0 ; j<p ; j++)
            {
                for (int k=1 ; k<p-1 ; k++)
                {
                    a[k][j]=a[k+1][j];
                }
            }
            //??
        }
        cout<<a11<<endl;
    }
    return 0;
}
