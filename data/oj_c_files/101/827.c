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
    int A , B , C ; 
    A = 2 , B = 1 , C = 0 ;
    if ( B < A && A != C)
    if ( ( A > B && A < C ) || ( A < B && A > C ) )
    if ( C > B && B > A )
    cout << "CBA" ;
    
    A = 2 , B = 0 , C = 1 ;
    if ( B < A && A != C)
    if ( A > B && A > C )
    if ( ( C > B && B < A ) || ( C < B && B > A ) )
    cout << "BCA" ;
    
    A = 1, B = 0 , C = 2 ;
    if ( ( B < A && A == C ) || ( B > A && A != C ) )
    if ( A > B && A > C )
    if ( C < B && B < A )
    cout << "BAC" ;
    
    A = 1 , B = 2 , C = 0 ;
    if ( ( B < A && A == C ) || ( B > A && A != C ) )
    if ( A < B && A < C )
    if ( C > B && B > A )
    cout << "CAB" ;
    
    A = 0 , B = 2 , C = 1 ;
    if ( B > A && A == C )
    if ( A < B && A < C )
    if ( ( C > B && B < A ) || ( C < B && B > A ) )
    cout << "ACB" ;
    
    A = 0 , B = 1 , C = 2 ;
    if ( B > A && A == C )
    if ( ( A > B && A < C ) || ( A < B && A > C ) )
    if ( C < B && B < A )
    cout << "ABC" ;
    
    return 0 ;
}
// ( > w < ) finished~ 