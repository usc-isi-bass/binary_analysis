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
	int a[6] = {0}, c[6] = {0};
	for (a[1] = 1; a[1] <= 5; a[1]++)
	{
			for (a[2] = 1; a[2] <= 5; a[2]++)
			{
						if (a[2] != a[1])
		{

					for (a[3] = 1; a[3] <= 5; a[3]++)
					{
										if (a[3] != a[1] && a[3] != a[2])
				{

							for (a[4] = 1; a[4] <= 5; a[4]++)
							{
														if (a[4] != a[1] && a[4] != a[2] && a[4] != a[3])
						{
								a[5] = 15 - a[1] - a[2] - a[3] - a[4];
								if (a[5] != 2 && a[5] != 3)
								{

									c[a[1]] = (a[5] == 1);
									c[a[2]] = (a[2] == 2);
									c[a[3]] = (a[1] == 5);
									c[a[4]] = (a[3] != 1);
									c[a[5]] = (a[4] == 1);
									if (c[1] == 1 && c[2] == 1 && c[3] == 0 && c[4] == 0 && c[5] == 0)
									{
										for (int i = 1; i <= 4; i++)
										{
											cout << a[i] << ' ';
										}
										cout << a[5];
									}
								}
							}
						}
					}
				}
			}
	    }
	}
	return 0;
}
