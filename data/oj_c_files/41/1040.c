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
	int a[5], b[5], i ,j, k;
	for(a[0] = 1; a[0] <= 5; a[0]++)
		for(a[1] = 1; a[1] <= 5; a[1]++)
			for(a[2] = 1; a[2] <= 5; a[2]++)
				for(a[3] = 1; a[3] <= 5; a[3]++)
					for(a[4]= 1; a[4] <= 5; a[4]++)
					{
						k = 0;
						int flag = 1;
						for(i = 0; i < 4; i++)
							for(j = i + 1; j < 5; j++)
								if(a[i] == a[j])
									flag = 0;
					    if(flag == 1 && a[4] != 2 && a[4] != 3)
						{
							b[0] = (a[4] == 1);
							b[1] = (a[1] == 2);
							b[2] = (a[0] == 5);
							b[3] = (a[2] != 1);
							b[4] = (a[3] == 1);
							if(b[0] + b[1] + b[2] + b[3] + b[4] == 2)
							{
								for(i = 0; i < 5; i++)
									if((a[i] == 1 || a[i] == 2) && b[i] == 1)
										k++;
								if(k == 2)
									cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4]<< endl;
							}
						}
					}


	return 0;
}