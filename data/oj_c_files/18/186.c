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

void Delete(int a[][101], int, int);                //??Delete????????????
int check_min(int a[], int);                        //??check_min?????????????

int sum[101], a[101][101]; //??????sum[101]???????????????, a[101][101]??????????????????

int main()
{
    int n, p;
    int i, j, l, m, k;
    memset(a, 0, sizeof(a));
    memset(sum, 0, sizeof(sum));                   //?a?sum???0
    cin >> n;
    for (k = 0; k < n; k++)
	{
       for (i = 0; i < n; i++)
	   {
           for (j = 0; j < n; j++)
		   {
              cin >> a[i][j];
		   }
	   }
       Delete(a, n, k);                          //??Delete??????
	}

    for (l = 0; l < n; l++)  //???????????
	{
       cout << sum[l] << endl;
	}
    return 0;
}

void Delete(int a[][101], int n, int p)          //n??????????????n * n, p??????????p???
{
    if (n == 1) return;                          //?????????????????
    int i, j, k, l, m, q, r, s, min, Min[101];   //min??????????, Min[101]???????????
    for (i = 0; i < n; i++)
	{
       min = check_min(a[i], n);//?min?????????
       for (j = 0; j < n; j++)
	   {
           a[i][j] = a[i][j] - min;             //???????????
	   }
	}
    for (i = 0; i < n; i++)//????????????Min[i]
	{
       for (j = 0; j < n; j++)
	   {
          if (j == 0) Min[i] = a[j][i];
          if (a[j][i] < Min[i]) Min[i] = a[j][i];
	   } 
	}
    for (i = 0; i < n; i++)
	{
       for (j = 0; j < n; j++)
	   {
           a[j][i] = a[j][i] - Min[i];          //???????????
	   }
	}
    sum[p] = sum[p] + a[1][1];                   //?????sum[p]?????????????a[1][1]
    for (k = 2; k < n; k++)
	{
        for (l = 2; l < n; l++)
		{
           a[k - 1][l - 1] = a[k][l];
		}
	}
    for (m = 2; m < n; m++)
	{
       a[0][m - 1] = a[0][m];
       a[m - 1][0] = a[m][0];
	}
    Delete(a, n - 1, p);                         //?????????
}

int check_min(int a[], int n)
{
   int min;
   int i;
   for (i = 0; i < n; i++)
   { 
     if (i == 0) min = a[i];                  //?min??a[0]
     if (a[i] < min) min = a[i];              //??min??????????
   }
   return min;
} 