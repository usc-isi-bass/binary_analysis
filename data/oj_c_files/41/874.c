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

int main ()
{
	int A, B, C, D, E, a, b, c, d, e;
	for(A = 1; A <= 5; A++)
		for(B = 1; B <= 5; B++)
			for(C = 1; C <= 5; C++)
				for(D = 1; D <= 5; D++)
					for(E = 1; E <= 5; E++)
					{
						a = (E == 1);
						b = (B == 2);
						c = (A == 5); 
						d = (C != 1);
						e = (D == 1);
					    if (a+b+c+d+e == 2)
						{
							if(((A == 1 && B == 2)||(A == 2 && B == 1)) && a==1 && b==1 && c==0 && d==0 && e==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((A == 1 && C == 2)||(A == 2 && C == 1)) && a==1 && c==1 && b==0 && d==0 && e==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((A == 1 && D == 2)||(A == 2 && D == 1)) && a==1 && d==1 && b==0 && c==0 && e==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((A == 1 && E == 2)||(A == 2 && E == 1)) && a==1 && e==1 && b==0 && c==0 && d==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((B == 1 && C == 2)||(B == 2 && C == 1)) && b==1 && c==1 && a==0 && d==0 && e==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((B == 1 && D == 2)||(B == 2 && D == 1)) && b==1 && d==1 && a==0 && c==0 && e==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((B == 1 && E == 2)||(B == 2 && E == 1)) && b==1 && e==1 && a==0 && c==0 && d==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((C == 1 && D == 2)||(C == 2 && D == 1)) && c==1 && d==1 && a==0 && b==0 && e==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((C == 1 && E == 2)||(C == 2 && E == 1)) && c==1 && e==1 && a==0 && b==0 && d==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
							if(((D == 1 && E == 2)||(D == 2 && E == 1)) && d==1 && e==1 && a==0 && b==0 && c==0 && (A-B)*(A-C)*(A-D)*(A-E)*(B-C)*(B-D)*(B-E)*(C-D)*(C-E)*(D-E)!=0 && (E!=2) && (E!=3))
								cout << A << " " << B << " " << C << " " << D << " " << E << endl;
						}
					}
	return 0;
}