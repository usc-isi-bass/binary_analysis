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

//******************************************
//*???????                              **
//*??????    1100062706            **
//*???2011.11.14                         **
//******************************************
void panDuan(int);//
int main()//
{//
	int w = 1;//
	panDuan(w);//
	char a[500];//
	char e[500][500];//
	cin.getline(a,500);//
	int i = 0, k, j, n, m, g = 0, l, t, h = 0, y = 0, b = 0, q = 0, r = 0, x, z;//
	int p[500] = {0};//
	do
	{
		if(a[i] != '\0')
			i++;//
		else
			break;
	}while(1);
	for (k = 2;k < i + 1;k++)
	{
		for(j = 0;j < i - k + 1;j++)
		{
			g = 0;
			for(m = j, n = j + k - 1; ;m++, n--)
			{
				if(m >= n||n >= i)
					break;
				if(a[m] == a[n])//
				{g++;}		
			}
			t = j, x = t;
			if(g == k/2)//
			{
                for(l=0;l<k;l++)
					cout<<a[t++];
				cout<<'\n';
						
				
								
			}
		}
	h=0;
	}	
	return 0;
}//
void panDuan(int a)//
{
	if(a != 1)
		cout << "false" << endl;//
}
                
