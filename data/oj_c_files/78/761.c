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


int main(void)
{
	int zhao, qian, sun, li;
	for(zhao = 1; zhao <= 5; zhao++)
		for(qian = 0; qian <= 5; qian++)
			for(sun = 1; sun <= 5; sun++)
			{
				li = zhao + qian - sun;
				if(li <= 5 && li > 0) 
				if((zhao + li > sun + qian) && (zhao + sun < qian))
				if(zhao != qian && zhao != sun && zhao != li)
				if(qian != sun && qian != li)
				if(sun != li)
				for(int i = 5; i >= 1; i--)
				{
					if(zhao == i) cout << "z " << zhao * 10 << endl;
					if(qian == i) cout << "q " << qian * 10<< endl;
					if(sun == i) cout << "s " << sun * 10<< endl;
					if(li == i) cout << "l " << li * 10<< endl;
				}
			}
	return 0;
}