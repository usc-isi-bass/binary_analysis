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

//***************************************************************************
//??????
//????????????????
//??????
//***************************************************************************
int main()
{ 
	                                           //??A,B,C?????????????m
	int a, b, c, appetiteA, appetiteB, appetiteC,l[3], m;
	char people[3] = {'A', 'B','C'}, p;
	for(appetiteA = 0; appetiteA <= 2; appetiteA++)
		for(appetiteB = 0; appetiteB <= 2; appetiteB++)
			for(appetiteC = 0; appetiteC <= 2; appetiteC++)
			{
				a = (appetiteB > appetiteA) + (appetiteC == appetiteA);
				b = (appetiteA > appetiteB) + (appetiteA > appetiteC);
				c = (appetiteC > appetiteB) + (appetiteB > appetiteA);
				if(a != b && a != c && b != c)
				{
					l[0] = a;
					l[1] = b;
					l[2] = c;
				}
             }
    for(int i = 0;i < 2; i++)
	{
		if(l[i] <l[i+1])
		{
			m = l[i];
			p = people[i];
			l[i] = l[i+1];
			people[i] = people[i+1];
			l[i+1] = m;
			people[i+1] = p;
		}
	}
	cout<<people[0]<<people[1]<<people[2]<<endl;
	return 0;
}
					
