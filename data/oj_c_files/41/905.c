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
	int a, b, c, d, e, A, B, C, D, E;
	for (e = 1; e <= 5; e++)
	{
		if (e != 2 && e != 3)
		{
			for (a = 1; a <= 5; a++)
			{
				if (a != e)
				{
					for (b = 1; b <= 5; b++)
					{
						if (b != a && b != e)
						{
							for (c = 1; c <= 5; c++)
							{
								if (c != a && c != b && c != e)
								{
									for (d = 1; d <= 5; d++)
									{
										if (d != a && d != b && d != c && d != e)
										{
											A = (e == 1);
											B = (b == 2);
											C = (a == 5);
											D = (c != 1);
											E = (d == 1);
											if ((a <= 2 && b <= 2 && A && B && !C && !D & !E)
												|| (a <= 2 && c <= 2 && A && C && !B && !D & !E)
												|| (a <= 2 && d <= 2 && A && D && !C && !B & !E)
												|| (a <= 2 && e <= 2 && A && E && !C && !D & !B)
												|| (c <= 2 && b <= 2 && C && B && !A && !D & !E)
												|| (d <= 2 && b <= 2 && D && B && !C && !A & !E)
												|| (e <= 2 && b <= 2 && E && B && !C && !D & !A)
												|| (c <= 2 && d <= 2 && C && D && !A && !B & !E)
												|| (c <= 2 && e <= 2 && C && E && !A && !D & !B)
												|| (d <= 2 && e <= 2 && D && E && !C && !A & !B))
											{
												cout << a << " " << b << " " << c << " " << d << " " << e;
											}
										}
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
												


