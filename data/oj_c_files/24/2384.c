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

//*****************************************************************
//*??????????? *****************************************
//*??????? 1200012979 **************************************
//*???2012.12.25 ***********************************************
//*****************************************************************
int main()
{
    int i, k = 1, len, min = 30, max = 0, v;
	char a[3200], *p[200], *te=NULL, *yu=NULL,*te1, *yu1;
	p[0] = a;
	for(i = 0; i < 3200; i++)
	{
		cin.get(a[i]);
		if(a[i] == '\n')
		{
			p[k] = a + i;
			break;
		}
		if(a[i]==' '&&a[i-1]!=',')
			p[k++] = a + i;
		if(a[i] == ',')
			p[k++] = a + i;
	}
	for(i = 1; i <= k; i++)
	{
		v = 0;
		if(*p[i-1]==',')
			v = 1;
		if(i != 1)
		{
		  if(p[i] - p[i-1] - 1 - v > max)
		  {
			  max = p[i] - p[i-1] - 1;
			  te = p[i-1]+1+v;
			  te1 = p[i];
		  }
		  if(p[i] - p[i-1] - 1 - v < min)
		  {
			  min = p[i] - p[i-1] - 1 - v;
			  yu = p[i-1]+1+v;
			  yu1 = p[i];
		  }
		}
		else
		{
			if(p[i] - p[i-1] > max)
		    {
			  max = p[i] - p[i-1];
			  te = p[i-1];
			  te1 = p[i];
		    }
		    if(p[i] - p[i-1] < min)
		    {
			  min = p[i] - p[i-1];
			  yu = p[i-1];
			  yu1 = p[i];
		    }
		}
	}
	while(te!=te1)
	{
		cout << *te;
		te++;
	}
	cout << endl;
	while(yu!= yu1)
	{
		cout << *yu;
		yu++;
	}
	cin.get();
	return 0;
}