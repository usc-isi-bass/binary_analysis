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
{   int i,j,k;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            for (k=0; k<3; k++) {
                if ((i-j)*(j-k)*(k-i)==0) {
                    continue;
                }
                else {
                    int x[3];
                    char c[3];
                    c[0]='A';
                    c[1]='B';
                    c[2]='C';
                    x[0]=2-((j>i)+(k==i));
                    x[1]=2-((i>j)+(i>k));
                    x[2]=2-((k>j)+(j>i));
                    if (x[0]==i && x[1]==j && x[2]==k) {
                                                for (int q=0; q<3; q++) {
                            if (x[q]==0) {
                            cout<<c[q];
                            }
                        }
                        
                        for (int q=0; q<3; q++) {
                            if (x[q]==1) {
                                cout<<c[q];
                            }
                        }
                        
                        for (int q=0; q<3; q++) {
                            if (x[q]==2) {
                                cout<<c[q];
                            }
                        }
                        
                    }
                }
                
            }
        }
    }
    return 0;
}

