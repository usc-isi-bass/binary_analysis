/****************************************************************************
*
*                            Open Watcom Project
*
*    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
*
*  ========================================================================
*
*    This file contains Original Code and/or Modifications of Original
*    Code as defined in and that are subject to the Sybase Open Watcom
*    Public License version 1.0 (the 'License'). You may not use this file
*    except in compliance with the License. BY USING THIS FILE YOU AGREE TO
*    ALL TERMS AND CONDITIONS OF THE LICENSE. A copy of the License is
*    provided with the Original Code and Modifications, and is also
*    available at www.sybase.com/developer/opensource.
*
*    The Original Code and all software distributed under the License are
*    distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
*    EXPRESS OR IMPLIED, AND SYBASE AND ALL CONTRIBUTORS HEREBY DISCLAIM
*    ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR
*    NON-INFRINGEMENT. Please see the License for the specific language
*    governing rights and limitations under the License.
*
*  ========================================================================
*
* Description:  WHEN YOU FIGURE OUT WHAT THIS FILE DOES, PLEASE
*               DESCRIBE IT HERE!
*
****************************************************************************/


/* This module defines functions for converting between floating point numbers
 * and ascii strings.  It uses multiply precions integers to get accurate
 * results.
 */
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#ifndef _MPNUM_H
#define _MPNUM_H

#ifdef __cplusplus
extern "C" {
#endif

#define FALSE 0
#define TRUE 1

#define FLOOR   1
#define CEILING 2

#define MP_NO_ERR               0
#define MP_ERR                  -1
#define MP_OUT_OF_MEMORY        -2
#define MP_DIVIDE_BY_ZERO       -3
#define MP_LOSS_OF_PRECISION    -4
#define MP_NEGATIVE_RESULT      -5
#define MP_TOO_LARGE            -6

#ifndef max
#define max( a, b )     (a > b) ? a : b
#endif
#ifndef min
#define min( a, b )     (a < b) ? a : b
#endif
#ifndef abs
#define abs( a )        a < 0 ? -(a) : a
#endif

typedef signed char             int8;
typedef signed short            int16;
typedef signed long             int32;
typedef signed int64_t          int64;
typedef unsigned char           uint8;
typedef unsigned short          uint16;
typedef unsigned long           uint32;
typedef unsigned uint64_t        uint64;

typedef struct mpnum {
    uint32 *num;
    uint32 len;
    uint32 allocated;
} mpnum;

int mp_init( mpnum *mp, uint64 value );
int mp_copy( mpnum *dst, mpnum *src );
int mp_free( mpnum *num );
int mp_zero( mpnum *num );

int mp_cmp( mpnum *num1, mpnum *num2 );
int mp_gt( mpnum *num1, mpnum *num2 );
int mp_gte( mpnum *num1, mpnum *num2 );
int mp_lt( mpnum *num1, mpnum *num2 );
int mp_lte( mpnum *num1, mpnum *num2 );
int mp_eq( mpnum *num1, mpnum *num2 );
int mp_ne( mpnum *num1, mpnum *num2 );

int mp_reduce( mpnum *num );

int mp_shiftleft( mpnum *dst, mpnum *src, uint32 bits );
int mp_shiftright( mpnum *dst, mpnum *src, uint32 bits );

int mp_addsc( mpnum *dst, mpnum *src, uint32 scalar );
int mp_add( mpnum *dst, mpnum *src1, mpnum *src2 );
int mp_sub( mpnum *dst, mpnum *src1, mpnum *src2 );
int mp_mulsc( mpnum *dst, mpnum *src, uint32 scalar );
int mp_mul( mpnum *dst, mpnum *src1, mpnum *src2 );
int mp_divsc( mpnum *dst, mpnum *src, uint32 scalar, int mode );
int mp_div( mpnum *qdst, mpnum *rdst, mpnum *src1, mpnum *src2 );
int mp_sqr( mpnum *dst, mpnum *src );
int mp_pow( mpnum *dst, mpnum *src, uint32 exp );

int mp_binround( mpnum *dst, mpnum *src, uint64 bit );

int mp_tofloat( uint8 *dst, mpnum *src );
int mp_todouble( uint8 *dst, mpnum *src );
int mp_toextended( uint8 *dst, mpnum *src );

int mp_touint64( uint64 *dst, mpnum *src );

int mp_bitsize( mpnum *num );

#ifdef __cplusplus
};
#endif

#endif

#ifndef _FP_H
#define _FP_H

#ifdef __cplusplus
extern "C" {
#endif

#define float_bias              127
#define double_bias             1023
#define extended_bias           16383

#define float_precision         24
#define double_precision        53
#define extended_precision      64

#define VALUE_TOO_SMALL         -10
#define VALUE_TOO_LARGE         -11

#define FLOAT_POS_ZERO          (0x00000000)
#define FLOAT_NEG_ZERO          (0x80000000)
#define FLOAT_POS_INF           (0x7f800000)
#define FLOAT_NEG_INF           (0xff800000)
#define FLOAT_NAN               (0xffc00000)

#define DOUBLE_POS_ZERO         (0x0000000000000000L)
#define DOUBLE_NEG_ZERO         (0x8000000000000000L)
#define DOUBLE_POS_INF          (0x7ff0000000000000L)
#define DOUBLE_NEG_INF          (0xfff0000000000000L)
#define DOUBLE_NAN              (0xfff8000000000000L)

/* boolean functions */
int f_isNan( void* );
int d_isNan( void* );
int e_isNan( void* );
int f_isInf( void* );
int d_isInf( void* );
int e_isInf( void* );
int f_isPosInf( void* );
int d_isPosInf( void* );
int e_isPosInf( void* );
int f_isNegInf( void* );
int e_isNegInf( void* );
int d_isNegInf( void* );
int f_isZero( void* );
int d_isZero( void* );
int e_isZero( void* );
int f_isPosZero( void* );
int d_isPosZero( void* );
int e_isPosZero( void* );
int f_isNegZero( void* );
int d_isNegZero( void* );
int e_isNegZero( void* );
int f_isNeg( void* );
int d_isNeg( void* );
int e_isNeg( void* );
int f_isSpecialValue( void* );
int d_isSpecialValue( void* );
int e_isSpecialValue( void* );

/* comparison functions */
int fcmp( void*, void* );
int dcmp( void*, void* );
int f_isEqual( void*, void* );
int d_isEqual( void*, void* );
int f_isNotEqual( void*, void* );
int d_isNotEqual( void*, void* );
int f_isGreater( void*, void* );
int d_isGreater( void*, void* );
int f_isGreaterEqual( void*, void* );
int d_isGreaterEqual( void*, void* );
int f_isLess( void*, void* );
int d_isLess( void*, void* );
int f_isLessEqual( void*, void* );
int d_isLessEqual( void*, void* );

/* arithmetic functions */
void fadd( void*, void*, void* );
void fsub( void*, void*, void* );
void fmul( void*, void*, void* );
void fdiv( void*, void*, void* );
void frem( void*, void*, void* );       /* arg1 = arg2 % arg3 */
void fneg( void*, void* );

void dadd( void*, void*, void* );
void dsub( void*, void*, void* );
void dmul( void*, void*, void* );
void ddiv( void*, void*, void* );
void drem( void*, void*, void* );
void dneg( void*, void* );

void eadd( void*, void*, void* );
void esub( void*, void*, void* );
void emul( void*, void*, void* );
void ediv( void*, void*, void* );
void erem( void*, void*, void* );
void eneg( void*, void* );


/* convert ascii string to floating-point type */
int a2f( float *flt, char *ascii );
int a2d( double *dbl, char *ascii );
int a2e( char *ext, char *ascii );

/* convert floating-point type to ascii string */
int f2a( char *ascii, float *flt, int maxlen );
int d2a( char *ascii, double *dbl, int maxlen );
int e2a( char *ascii, char *ext, int maxlen );

/* break up floating-point into mantissa and exponent */
void parseFloat( float flt, uint64 *f, int *e );
void parseDouble( double db, uint64 *f, int *e );
void parseExtended( char *ext, uint64 *f, int *e );

/* construct floating-point from mantissa and exponent */
void makeFloat( float *dst, uint64 f, int e );
void makeDouble( double *dst, uint64 f, int e );
void makeExtended( char *dst, uint64 f, int e );

/* change just the exponent part of a number */
void changeFloatExponent( float *dst, float *src, int diff );
void changeDoubleExponent( double *dst, double *src, int diff );
void changeExtendedExponent( char *dst, char *src, int diff );

/* create special extended numbers */
void makeExtNan( char *num );
void makeExtPosInf( char *num );
void makeExtNegInf( char *num );
void makeExtPosZero( char *num );
void makeExtNegZero( char *num );

#ifdef __cplusplus
};
#endif

#endif

#define FALSE 0
#define TRUE 1

#define SET_CW_ROUND_TO_NEAREST \
        "push 0000037FH" \
        "fldcw dword ptr [esp]" \
        "add esp,4"

#define SET_CW_ROUND_TO_ZERO \
        "push 00000F7FH" \
        "fldcw dword ptr [esp]" \
        "add esp,4"

void c_dadd( void *dst, void *src1, void *src2 );
void c_dsub( void *dst, void *src1, void *src2 );

#ifndef C_IMPL
void _dadd( void *, void *, void * );
#pragma aux     _dadd = \
        SET_CW_ROUND_TO_NEAREST \
        "fld qword ptr [edx]" \
        "fld qword ptr [ebx]" \
        "fadd" \
        "fstp qword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void dadd( void *dst, void *src1, void *src2 ) {
    uint64 f1, f2;
    int e1, e2;
    int diff;

    parseDouble( *(double*)src1, &f1, &e1 );
    parseDouble( *(double*)src2, &f2, &e2 );
    diff = abs( (e1 - e2) );
    if( diff > 11 && diff <= 53 ) {
        /* the FPU will round twice during this operation so use the c version
         * of this function instead */
        c_dadd( dst, src1, src2 );
    } else {
        _dadd( dst, src1, src2 );
    }
}

void _dsub( void *, void *, void * );
#pragma aux     _dsub = \
        SET_CW_ROUND_TO_NEAREST \
        "fld qword ptr [edx]" \
        "fsub qword ptr [ebx]" \
        "fstp qword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void dsub( void *dst, void *src1, void *src2 ) {
    uint64 f1, f2;
    int e1, e2;
    int diff;

    parseDouble( *(double*)src1, &f1, &e1 );
    parseDouble( *(double*)src2, &f2, &e2 );
    diff = abs( (e1 - e2) );
    if( diff > 11 && diff <= 53 ) {
        /* the FPU will round twice during this operation so use the c version
         * of this function instead */
        c_dsub( dst, src1, src2 );
    } else {
        _dsub( dst, src1, src2 );
    }
}

void _dmul( void *, void *, void * );
#pragma aux     _dmul = \
        SET_CW_ROUND_TO_NEAREST \
        "fld qword ptr [edx]" \
        "fmul qword ptr [ebx]" \
        "fstp qword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void dmul( void *dst, void *src1, void *src2 ) {
    _dmul( dst, src1, src2 );
}

void _ddiv( void *, void *, void * );
#pragma aux     _ddiv = \
        SET_CW_ROUND_TO_NEAREST \
        "fld qword ptr [edx]" \
        "fdiv qword ptr [ebx]" \
        "fstp qword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void ddiv( void *dst, void *src1, void *src2 ) {
    _ddiv( dst, src1, src2 );
}

void _drem( void *, void *, void * );
#pragma aux     _drem = \
        SET_CW_ROUND_TO_NEAREST \
        "fld qword ptr [ebx]" \
        "fld qword ptr [edx]" \
        "mov ecx,eax" \
        "remloop:" \
        "fprem" \
        "fstsw ax" \
        "test ax,0400H" \
        "jne remloop" \
        "mov eax,ecx" \
        "fstp qword ptr [eax]" \
        "fstp qword ptr [ebx]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [ecx];
void drem( void *dst, void *src1, void *src2 ) {
    _drem( dst, src1, src2 );
}

void _dneg( void *, void * );
#pragma aux     _dneg = \
        "fld qword ptr [edx]" \
        "fchs" \
        "fstp qword ptr [eax]" \
        parm caller [eax] [edx] \
        modify exact [];
void dneg( void *dst, void *src ) {
    _dneg( dst, src );
}

void _fadd( void *, void *, void * );
#pragma aux     _fadd = \
        SET_CW_ROUND_TO_NEAREST \
        "fld dword ptr [edx]" \
        "fadd dword ptr [ebx]" \
        "fstp dword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void fadd( void *dst, void *src1, void *src2 ) {
    _fadd( dst, src1, src2 );
}

void _fsub( void *, void *, void * );
#pragma aux     _fsub = \
        SET_CW_ROUND_TO_NEAREST \
        "fld dword ptr [edx]" \
        "fsub dword ptr [ebx]" \
        "fstp dword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void fsub( void *dst, void *src1, void *src2 ) {
    _fsub( dst, src1, src2 );
}

void _fmul( void *, void *, void * );
#pragma aux     _fmul = \
        SET_CW_ROUND_TO_NEAREST \
        "fld dword ptr [edx]" \
        "fld dword ptr [ebx]" \
        "fmul" \
        "fstp dword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void fmul( void *dst, void *src1, void *src2 ) {
    _fmul( dst, src1, src2 );
}

void _fdiv( void *, void *, void * );
#pragma aux     _fdiv = \
        SET_CW_ROUND_TO_NEAREST \
        "fld dword ptr [edx]" \
        "fld dword ptr [ebx]" \
        "fdiv" \
        "fstp dword ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void fdiv( void *dst, void *src1, void *src2 ) {
    _fdiv( dst, src1, src2 );
}

void _frem( void *, void *, void * );
#pragma aux     _frem = \
        SET_CW_ROUND_TO_NEAREST \
        "fld dword ptr [ebx]" \
        "fld dword ptr [edx]" \
        "mov ecx,eax" \
        "remloop:" \
        "fprem" \
        "fstsw ax" \
        "test ax,0400H" \
        "jne remloop" \
        "mov eax,ecx" \
        "fstp dword ptr [eax]" \
        "fstp dword ptr [ebx]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [ecx];
void frem( void *dst, void *src1, void *src2 ) {
    _frem( dst, src1, src2 );
}

void _fneg( void *, void * );
#pragma aux     _fneg = \
        "fld dword ptr [edx]" \
        "fchs" \
        "fstp dword ptr [eax]" \
        parm caller [eax] [edx] \
        modify exact [];
void fneg( void *dst, void *src ) {
    _fneg( dst, src );
}

void _eadd( void *, void *, void * );
#pragma aux     _eadd = \
        SET_CW_ROUND_TO_NEAREST \
        "fld tbyte ptr [edx]" \
        "fld tbyte ptr [ebx]" \
        "fadd" \
        "fstp tbyte ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void eadd( void *dst, void *src1, void *src2 ) {
    _eadd( dst, src1, src2 );
}

void _esub( void *, void *, void * );
#pragma aux     _esub = \
        SET_CW_ROUND_TO_NEAREST \
        "fld tbyte ptr [edx]" \
        "fld tbyte ptr [edx]" \
        "fsub" \
        "fstp tbyte ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void esub( void *dst, void *src1, void *src2 ) {
    _esub( dst, src1, src2 );
}

void _emul( void *, void *, void * );
#pragma aux     _emul = \
        SET_CW_ROUND_TO_NEAREST \
        "finit" \
        "fld tbyte ptr [edx]" \
        "fld tbyte ptr [ebx]" \
        "fmul" \
        "fstp tbyte ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void emul( void *dst, void *src1, void *src2 ) {
    _emul( dst, src1, src2 );
}

void _ediv( void *, void *, void * );
#pragma aux     _ediv = \
        SET_CW_ROUND_TO_NEAREST \
        "fld tbyte ptr [edx]" \
        "fld tbyte ptr [ebx]" \
        "fdiv" \
        "fstp tbyte ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
void ediv( void *dst, void *src1, void *src2 ) {
    _ediv( dst, src1, src2 );
}

void _erem( void *, void *, void * );
#pragma aux     _erem = \
        SET_CW_ROUND_TO_NEAREST \
        "fld tbyte ptr [ebx]" \
        "fld tbyte ptr [edx]" \
        "mov ecx,eax" \
        "remloop:" \
        "fprem" \
        "fstsw ax" \
        "test ax,0400H" \
        "jne remloop" \
        "mov eax,ecx" \
        "fstp tbyte ptr [eax]" \
        "fstp tbyte ptr [ebx]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [ecx];
void erem( void *dst, void *src1, void *src2 ) {
    _erem( dst, src1, src2 );
}

void _eneg( void *, void * );
#pragma aux     _eneg = \
        "fld tbyte ptr [edx]" \
        "fchs" \
        "fstp tbyte ptr [eax]" \
        parm caller [eax] [edx] \
        modify exact [];
void eneg( void *dst, void *src ) {
    _eneg( dst, src );
}

/******** comparison functions **********/

int cmp( unsigned short result )
{
    result = result & 0x4500;
    if( result == 0 ) {
        /* arg1 > arg2 */
        return -1;
    } else if( result == 0x0100 ) {
        /* arg1 < arg2 */
        return 1;
    } else if( result == 0x4000 ) {
        /* arg1 = arg2 */
        return 0;
    } else {  /* result == 0x4500 */
        /* unordered (NaN) */
        return -2;
    }
}

void _fcmp( void *, void *, void * );
#pragma aux _fcmp = \
        "fld dword ptr [edx]" \
        "fcomp dword ptr [ebx]" \
        "fstsw word ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
int fcmp( void *arg1, void *arg2 )
{
    unsigned short result;
    _fcmp( &result, arg1, arg2 );
    return cmp( result );
}

void _dcmp( void *, void *, void * );
#pragma aux _dcmp = \
        "fld qword ptr [edx]" \
        "fcomp qword ptr [ebx]" \
        "fstsw word ptr [eax]" \
        parm caller [eax] [edx] [ebx] \
        modify exact [];
int dcmp( void *arg1, void *arg2 )
{
    unsigned short result;
    _dcmp( &result, arg1, arg2 );
    return cmp( result );
}
#endif

/******* boolean functions ***********/

/* a special value is +inf, -inf, or nan */
int f_isSpecialValue( void *val )
{
    char *v = (char*)val;
    if( (v[3] == 127 || v[3] == 255) && v[2] >= 128 ) {
        return TRUE;
    }
    return FALSE;
}

int d_isSpecialValue( void *val )
{
    char *v = (char*)val;
    if( (v[7] == 127 || v[7] == 255) && v[6] >= (128+64+32+16) ) {
        return TRUE;
    }
    return FALSE;
}

int e_isSpecialValue( void *val )
{
    char *v = (char*)val;
    if( (v[9] == 127 || v[9] == 255) && v[8] == 255 ) {
        return TRUE;
    }
    return FALSE;
}

int f_isNan( void *val )
{
    char *v = (char*)val;
    if( f_isSpecialValue( val ) ) {
        // nan or inf
        if( v[0] > 0 || v[1] > 0 || v[2] > 128 ) {
            return TRUE;
        }
    }
    return FALSE;
}

int d_isNan( void *val )
{
    char *v = (char*)val;
    if( d_isSpecialValue( val ) ) {
        // nan or inf
        if( v[0] > 0 || v[1] > 0 || v[2] > 0 || v[3] > 0 ||
            v[4] > 0 || v[5] > 0 || v[6] > (128+64+32+16) ) {
            return TRUE;
        }
    }
    return FALSE;
}

int e_isNan( void *val )
{
    if( e_isSpecialValue( val ) ) {
        // nan or inf
        if( *(uint64*)val > 0 ) {
            return TRUE;
        }
    }
    return FALSE;
}

int f_isInf( void *val )
{
    return( f_isPosInf( val ) || f_isNegInf( val ) );
}

int d_isInf( void *val )
{
    return( d_isPosInf( val ) || d_isNegInf( val ) );
}

int e_isInf( void *val )
{
    return( e_isPosInf( val ) || e_isNegInf( val ) );
}

int f_isPosInf( void *val )
{
    uint32 *v = (uint32 *)val;
    if( *v == FLOAT_POS_INF ) {
        return TRUE;
    }
    return FALSE;
}

int d_isPosInf( void *val )
{
    uint64 *v = (uint64 *)val;
    if( *v == DOUBLE_POS_INF ) {
        return TRUE;
    }
    return FALSE;
}

int e_isPosInf( void *val )
{
    char *v = (char*)val;
    if( *(uint64*)val == 0 && v[8] == 255 && v[9] == 127 ) {
        return TRUE;
    }
    return FALSE;
}

int f_isNegInf( void *val )
{
    uint32 *v = (uint32 *)val;
    if( *v == FLOAT_NEG_INF ) {
        return TRUE;
    }
    return FALSE;
}

int d_isNegInf( void *val )
{
    uint64 *v = (uint64 *)val;
    if( *v == DOUBLE_NEG_INF ) {
        return TRUE;
    }
    return FALSE;
}

int e_isNegInf( void *val )
{
    char *v = (char*)val;
    if( *(uint64*)val == 0 && v[8] == 255 && v[9] == 255 ) {
        return TRUE;
    }
    return FALSE;
}

int f_isZero( void *val )
{
    return( f_isPosZero( val ) || f_isNegZero( val ) );
}

int d_isZero( void *val )
{
    return( d_isPosZero( val ) || d_isNegZero( val ) );
}

int e_isZero( void *val )
{
    return( e_isPosZero( val ) || e_isNegZero( val ) );
}

int f_isPosZero( void *val )
{
    uint32 *v = (uint32 *)val;
    if( *v == FLOAT_POS_ZERO ) {
        return TRUE;
    }
    return FALSE;
}

int d_isPosZero( void *val )
{
    uint64 *v = (uint64 *)val;
    if( *v == DOUBLE_POS_ZERO ) {
        return TRUE;
    }
    return FALSE;
}

int e_isPosZero( void *val )
{
    char *v = (char*)val;
    int i;
    for( i = 0; i < 10; i++ ) {
        if( v[i] != 0 ) return FALSE;
    }
    return TRUE;
}

int f_isNegZero( void *val )
{
    uint32 *v = (uint32 *)val;
    if( *v == FLOAT_NEG_ZERO ) {
        return TRUE;
    }
    return FALSE;
}

int d_isNegZero( void *val )
{
    uint64 *v = (uint64 *)val;
    if( *v == DOUBLE_NEG_ZERO ) {
        return TRUE;
    }
    return FALSE;
}

int e_isNegZero( void *val )
{
    char *v = (char*)val;
    int i;
    for( i = 0; i < 9; i++ ) {
        if( v[i] != 0 ) return FALSE;
    }
    if( v[9] != 128 ) return FALSE;
    return TRUE;
}

int f_isNeg( void *val )
{
    char *v = (char*)val;
    if( v[3] >= 128 ) {
        return TRUE;
    }
    return FALSE;
}

int d_isNeg( void *val )
{
    char *v = (char*)val;
    if( v[7] >= 128 ) {
        return TRUE;
    }
    return FALSE;
}

int e_isNeg( void *val )
{
    char *v = (char*)val;
    if( v[9] >= 128 ) {
        return TRUE;
    }
    return FALSE;
}

int f_isEqual( void *val1, void *val2 )
{
    int result = fcmp( val1, val2 );
    if( result == 0 ) return TRUE;
    return FALSE;
}

int f_isNotEqual( void *val1, void *val2 )
{
    int result = fcmp( val1, val2 );
    if( result != 0 ) return TRUE;
    return FALSE;
}

int f_isGreater( void *val1, void *val2 )
{
    int result = fcmp( val1, val2 );
    if( result == -1 ) return TRUE;
    return FALSE;
}

int f_isGreaterEqual( void *val1, void *val2 )
{
    int result = fcmp( val1, val2 );
    if( result == -1 || result == 0 ) return TRUE;
    return FALSE;
}

int f_isLess( void *val1, void *val2 )
{
    int result = fcmp( val1, val2 );
    if( result == 1 ) return TRUE;
    return FALSE;
}

int f_isLessEqual( void *val1, void *val2 )
{
    int result = fcmp( val1, val2 );
    if( result == 1 || result == 0 ) return TRUE;
    return FALSE;
}

int d_isEqual( void *val1, void *val2 )
{
    int result = dcmp( val1, val2 );
    if( result == 0 ) return TRUE;
    return FALSE;
}

int d_isNotEqual( void *val1, void *val2 )
{
    int result = dcmp( val1, val2 );
    if( result != 0 ) return TRUE;
    return FALSE;
}

int d_isGreater( void *val1, void *val2 )
{
    int result = dcmp( val1, val2 );
    if( result == -1 ) return TRUE;
    return FALSE;
}

int d_isGreaterEqual( void *val1, void *val2 )
{
    int result = dcmp( val1, val2 );
    if( result == -1 || result == 0 ) return TRUE;
    return FALSE;
}

int d_isLess( void *val1, void *val2 )
{
    int result = dcmp( val1, val2 );
    if( result == 1 ) return TRUE;
    return FALSE;
}

int d_isLessEqual( void *val1, void *val2 )
{
    int result = dcmp( val1, val2 );
    if( result == 1 || result == 0 ) return TRUE;
    return FALSE;
}

/* construct a float from a mantissa and an exponent */
void makeFloat( float *dst, uint64 f, int e )
{
    char *temp = (char*)dst;
    char *temp2;
    uint32 exp;
    e += float_bias;
    if( e < -23 ) {
        /* zero */
        e = 0;
        f = 0;
    } else if( e < 0 ) {
        /* denormalized */
        e = 0;
    } else if( e >= 255 ) {
        /* infinity */
        e = 255;
        f = 0;
    }
    *(uint32*)dst = (uint32)f;
    temp[2] = temp[2] & 127; /* remove implied bit */
    exp = e;
    temp2 = (char*)&exp;
    temp[3] = temp2[0] >> 1;
    temp[2] |= (temp2[0] << 7);
}

/* construct a double from a mantissa and an exponent */
void makeDouble( double *dst, uint64 f, int e )
{
    char *temp = (char*)dst;
    char *temp2;
    uint32 exp;
    e += double_bias;
    if( e < -52 ) {
        /* zero */
        e = 0;
        f = 0;
    } else if( e < 0 ) {
        /* denormalized */
        e = 0;
    } else if( e >= 2047 ) {
        /* infinity */
        e = 2047;
        f = 0;
    }
    *(uint64*)dst = f;
    temp[6] = temp[6] & 15; /* remove implied bit */
    exp = e;
    temp2 = (char*)&exp;
    temp[7] = temp2[1] << 4;
    temp[7] = temp[7] | ((temp2[0] & 240) >> 4);
    temp[6] = temp[6] | (temp2[0] & 15) << 4;
}

/* construct an extended floating point from a mantissa and an exponent */
void makeExtended( char *dst, uint64 f, int e )
{
    char *temp;
    uint32 exp;
    e += extended_bias;
    if( e < 0 ) e = 0;
    if( e < -63 ) {
        /* zero */
        e = 0;
        f = 0;
    } else if( e < 0 ) {
        /* denormalized */
        e = 0;
    } else if( e >= 32767 ) {
        /* infinity */
        e = 32767;
        f = 0;
    }
    *(uint64*)dst = f;
    exp = e;
    temp = (char*)&exp;
    dst[9] = temp[1] & 127;
    dst[8] = temp[0];
}

/* break up a binary float value into a mantissa and an exponent and
 * normalize so that the result is between 0x800000 and 0x1000000 */
void parseFloat( float flt, uint64 *f, int *e )
{
    char *temp = (char*)&flt;
    temp[3] = temp[3] & 127;    /* remove sign */
    *e = (*(uint32*)temp) >> 23;
    *e -= float_bias;
    temp[3] = 0;                /* remove   */
    temp[2] = temp[2] & 127;    /* exponent */
    if( *e > 0 - float_bias ) {
        temp[2] = temp[2] | 128;  /* add implied leading bit */
    }
    if( *e == 0 - float_bias ) *e = *e + 1;
    *f = (uint64)(*(uint32*)temp);
    if( *f > 0 ) {
        while( *f < 0x800000 ) {
            *f <<= 1;
            (*e)--;
        }
    }
}

/* break up a binary double value into a mantissa and an exponent and
 * normalize so that the result is between 0x10000000000000 and
 * 0x20000000000000 */
void parseDouble( double db, uint64 *f, int *e )
{
    char *temp = (char*)&db;
    temp[7] = temp[7] & 127;    /* remove sign */
    *e = (*(uint64*)temp) >> 52;
    *e -= double_bias;
    temp[7] = 0;                /* remove   */
    temp[6] = temp[6] & 15;    /* exponent */
    if( *e > 0 - double_bias ) {
        temp[6] = temp[6] | 16;  /* add implied leading bit */
    }
    if( *e == 0 - double_bias ) *e = *e + 1;
    *f = *(uint64*)temp;
    if( *f > 0 ) {
        while( *f < 0x10000000000000 ) {
            *f <<= 1;
            (*e)--;
        }
    }
}

/* break up a binary extended float value into a mantissa and an exponent and
 * normalize */
void parseExtended( char *ext, uint64 *f, int *e )
{
    ext[9] = ext[9] & 127;    /* remove sign */
    *e = ext[9] * 256 + ext[8];
    *e -= extended_bias;
    ext[9] = 0;         /* remove   */
    ext[8] = 0;         /* exponent */
    *f = *(uint64*)ext;
    if( *f > 0 ) {
        while( *f < 0x8000000000000000 ) {
            *f <<= 1;
            (*e)--;
        }
    }
}

/* add diff to the the exponent of src */
void changeFloatExponent( float *dst, float *src, int diff )
{
    uint64 f;
    int e;
    parseFloat( *src, &f, &e );
    e += diff;
    makeFloat( dst, f, e );
}

void changeDoubleExponent( double *dst, double *src, int diff )
{
    uint64 f;
    int e;
    parseDouble( *src, &f, &e );
    e += diff;
    makeDouble( dst, f, e );
}

void changeExtendedExponent( char *dst, char *src, int diff )
{
    uint64 f;
    int e;
    parseExtended( src, &f, &e );
    e += diff;
    makeExtended( dst, f, e );
}

/* create special extended numbers */
void makeExtNan( char *num )
{
    memset( num, 0, 10 );
    num[9] = 127;
    num[8] = 255;
    num[7] = 128;
}

void makeExtPosInf( char *num )
{
    memset( num, 0, 10 );
    num[9] = 127;
    num[8] = 255;
}

void makeExtNegInf( char *num )
{
    memset( num, 0, 10 );
    num[9] = 255;
    num[8] = 255;
}

void makeExtPosZero( char *num )
{
    memset( num, 0, 10 );
}

void makeExtNegZero( char *num )
{
    memset( num, 0, 10 );
    num[9] = 128;
}


/* real number types */
#define FLOAT                   1
#define DOUBLE                  2
#define EXTENDED                3

#define max_exp                 32768

#define ASCII_POS_ZERO          "0"
#define ASCII_NEG_ZERO          "0"
#define ASCII_POS_INF           "Infinity"
#define ASCII_NEG_INF           "-Infinity"
#define ASCII_NAN               "NaN"

/* Remove trailing zeroes at the end of the mantissa part of the number to
 * speed up the calculations. */
int RemoveTrailingZeros( char *ascii )
{
    int i;

    for( i = 0; ; i++ ) {
        if( ascii[i] == 'e' || ascii[i] == 'E' || ascii[i] == '\0' ) break;
    }
    for( i--; i > 0; i-- ) {
        if( ascii[i] == '0' ) {
            ascii[i] = '_';
        } else if( ascii[i] != '.' ) {
            break;
        }
    }
    return 0;
}

/* parse ascii string into the mantissa f and the exponent e */
/* note: this function assumes a positive value */
int ParseAscii( char *ascii, mpnum *f, long *e )
{
    int readingExponent = FALSE;
    int expIsNeg = FALSE;
    int behindDecimal = FALSE;
    uint32 digitsBehindDecimal = 0;
    int rc;
    int sigexp = 0;
    *e = 0;
    mp_zero( f );

    RemoveTrailingZeros( ascii );

    for( ; *ascii != '\0'; ascii++ ) {
        if( *ascii == '.' ) {
            /* decimal point */
            behindDecimal = TRUE;
        } else if( *ascii == 'e' || *ascii == 'E' ) {
            /* exponent */
            if( ascii[1] == '-' ) {
                expIsNeg = TRUE;
                ascii++;
            } else if( ascii[1] == '+' ) {
                ascii++;
            }
            readingExponent = TRUE;
        } else if( *ascii >= '0' && *ascii <= '9' ) {
            if( readingExponent ) {
                if( *e <= max_exp ) {
                    *e = *e * 10 + (long)(*ascii - '0');
                }
            } else {
                /* number */
                rc = mp_mulsc( f, f, 10 );
                if( rc != MP_NO_ERR ) return rc;
                rc = mp_addsc( f, f, (uint32)(*ascii - '0') );
                if( rc != MP_NO_ERR ) return rc;
                if( behindDecimal ) {
                    digitsBehindDecimal++;
                }
            }
        } else if( *ascii == '_' ) {
            *ascii = '0';
            if( !behindDecimal ) {
                sigexp++;
            }
        } else {
            /* unrecognized character */
        }
    }
    if( expIsNeg ) *e = -*e;
    *e -= digitsBehindDecimal;
    *e += sigexp;

    return 0;
}

/* convert ascii string to a real number of type type */
int a2r( void *dst, char *ascii, int type )
{
    int isNeg = FALSE;
    char exp_real[10];
    mpnum f;
    mpnum exp;
    long e = 0;
    int rc;
    mpnum zero;
    int isZero;

    if( type != FLOAT && type != DOUBLE && type != EXTENDED ) return -1;

    /* check for sign */
    if( *ascii == '-' ) {
        isNeg = TRUE;
        ascii++;
    } else if( *ascii == '+' ) {
        ascii++;
    }

    rc = mp_init( &f, 0 );
    if( rc != MP_NO_ERR ) return rc;
    rc = mp_init( &exp, 10 );
    if( rc != MP_NO_ERR ) return rc;
    rc = mp_init( &zero, 0 );
    if( rc != MP_NO_ERR ) return rc;

    /* parse ascii into significand and exponent */
    ParseAscii( ascii, &f, &e );
    isZero = mp_eq( &f, &zero );
    mp_free( &zero );

    /* calculate 10^abs(e) */
    if( e > 0 ) {
        rc = mp_pow( &exp, &exp, (uint32)e );
    } else if( e < 0 ) {
        rc = mp_pow( &exp, &exp, (uint32)(-e) );
    }
    if( rc != MP_NO_ERR ) return rc;

    /* combine significand and exponent as reals */
    if( type == FLOAT ) {
        if( e > 0 ) {
            mp_mul( &f, &f, &exp );
            mp_tofloat( dst, &f );
        } else if( e < 0 ) {
            char temp[10];
            mp_toextended( temp, &f );
            mp_toextended( exp_real, &exp );
            ediv( temp, temp, exp_real );
            e2f( dst, temp );
        } else {
            mp_tofloat( dst, &f );
        }
    } else if( type == DOUBLE ) {
        if( e > 0 ) {
            mp_mul( &f, &f, &exp );
            mp_todouble( dst, &f );
        } else if( e < 0 ) {
            char temp[10];
            mp_toextended( temp, &f );
            mp_toextended( exp_real, &exp );
            ediv( temp, temp, exp_real );
            e2d( dst, temp );
        } else {
            mp_todouble( dst, &f );
        }
    } else {
        mp_toextended( dst, &f );
        mp_toextended( exp_real, &exp );
        if( e > 0 ) {
            emul( dst, dst, exp_real );
        } else if( e < 0 ) {
            ediv( dst, dst, exp_real );
        }
    }

    /* add sign */
    if( isNeg ) {
        if( type == FLOAT ) fneg( dst, dst );
        else if( type == DOUBLE ) dneg( dst, dst );
        else eneg( dst, dst );
    }
    mp_free( &f );
    mp_free( &exp );

    /* check if numbers are too large or too small */
    if( type == FLOAT ) {
        if( !isZero && ( f_isPosZero(dst) || f_isNegZero(dst) ) ) {
            return VALUE_TOO_SMALL;
        }
        if( f_isPosInf(dst) || f_isNegInf(dst) ) {
            return VALUE_TOO_LARGE;
        }
    } else if( type == DOUBLE ) {
        if( !isZero && ( d_isPosZero(dst) || d_isNegZero(dst) ) ) {
            return VALUE_TOO_SMALL;
        }
        if( d_isPosInf(dst) || d_isNegInf(dst) ) {
            return VALUE_TOO_LARGE;
        }
    }

    return 0;
}

int a2e( char *ext, char *ascii )
{
    return( a2r( ext, ascii, EXTENDED ) );
}

int a2d( double *dbl, char *ascii )
{
    return( a2r( dbl, ascii, DOUBLE ) );
}

int a2f( float *flt, char *ascii )
{
    return( a2r( flt, ascii, FLOAT ) );
}

/* Generate String
 *
 * This function uses an algorithm found in an essay entitled "How to Print
 * Floating Point Numbers Accurately" by Guy L. Steele Jr and Jon L White.
 * It takes as input a binary floating point number and generates a string
 * of decimal digits which represent the most significant bits of a decimal
 * representation of the number.  H represents the power of ten of the most
 * significant digit, and N represents the power of ten of the least signi-
 * ficant digit.  For example, for string "123456", H = 1, N = -4, the
 * decimal number is 12.3456.
 *
 * The resulting decimal number is not the closest possible representation
 * of the binary number.  Instead, it is the number of minimal length such
 * that converting the number to a binary floating point yields the original
 * binary value.  One advantage of this is that the algorithm will return
 * "1.3" for 1.3 instead of something like "1.299999952316284". (1.3 cannot
 * be stored exactly in binary form.)
 *
 * Note: D is assumed to be large enough to hold the whole string.  In the
 * worst case for a double, it will require 18 bytes.
 */
int GenerateString( char *D, void *src, int type, int *N, int *H )
{
    uint64 temp;
    int e;
    mpnum f, R, S, Mp, Mn, U, mptemp, mptemp2;
    int k = 0, p;
    int low, high;
    int index = 0;

    if( type != FLOAT && type != DOUBLE && type != EXTENDED ) return -1;

    if( type == FLOAT ) {
        parseFloat( *(float*)src, &temp, &e );
        p = float_precision;
    } else if( type == DOUBLE ) {
        parseDouble( *(double*)src, &temp, &e );
        p = double_precision;
    } else {
        parseExtended( src, &temp, &e );
        p = extended_precision;
    }
    e++;
    mp_init( &f, temp );
    mp_init( &R, 0 );
    mp_init( &S, 1 );
    mp_init( &Mp, 0 );
    mp_init( &Mn, 1 );
    mp_init( &U, 0 );
    mp_init( &mptemp, 1 );
    mp_init( &mptemp2, 0 );
    /* f * 2^(e-p) = src */

    mp_shiftleft( &R, &f, max( e-p, 0 ) );
    mp_shiftleft( &S, &S, max( 0, -(e-p) ) );
    /* assert R/S = f * 2^(e-p) = src */
    mp_shiftleft( &Mn, &Mn, max( e-p, 0 ) );
    mp_copy( &Mp, &Mn );

    mp_shiftleft( &mptemp, &mptemp, p - 1 );
    if( mp_eq( &f, &mptemp ) ) {
        /* border case: src is a power of 2 */
        mp_shiftleft( &Mp, &Mp, 1 );
        mp_shiftleft( &R, &R, 1 );
        mp_shiftleft( &S, &S, 1 );
    }
    for(;;) {
        mp_divsc( &mptemp, &S, 10, CEILING );
        if( mp_gte( &R, &mptemp ) ) break;
        k--;
        mp_mulsc( &R, &R, 10 );
        mp_mulsc( &Mn, &Mn, 10 );
        mp_mulsc( &Mp, &Mp, 10 );
    }
    /* assert  k = min( 0, 1 + floor( logv ) ) */
    mp_mulsc( &mptemp, &R, 2 );
    mp_add( &mptemp, &mptemp, &Mp );
    for(;;) {
        mp_mulsc( &mptemp2, &S, 2 );
        if( mp_lt( &mptemp, &mptemp2 ) ) break;
        mp_mulsc( &S, &S, 10 );
        k++;
    }
    *H = k - 1;
    for(;;) {
        k--;
        mp_mulsc( &R, &R, 10 );
        mp_div( &U, &R, &R, &S );
        mp_mulsc( &Mn, &Mn, 10 );
        mp_mulsc( &Mp, &Mp, 10 );
        mp_mulsc( &mptemp, &R, 2 );
        mp_mulsc( &mptemp2, &S, 2 );
        mp_sub( &mptemp2, &mptemp2, &Mp );
        low = mp_lt( &mptemp, &Mn );
        high = mp_gt( &mptemp, &mptemp2 );
        if( high || low ) break;
        D[index++] = U.num[0] + '0';
    }
    if( low && high ) {
        mp_mulsc( &mptemp, &R, 2 );
        if( mp_lte( &mptemp, &S ) ) {
            D[index++] = U.num[0] + '0';
        } else {
            D[index++] = U.num[0] + '1';
        }
    } else if( low ) {
        D[index++] = U.num[0] + '0';
    } else if( high ) {
        D[index++] = U.num[0] + '1';
    }
    D[index] = '\0';
    *N = k;
    mp_free( &f );
    mp_free( &R );
    mp_free( &S );
    mp_free( &Mn );
    mp_free( &Mp );
    mp_free( &U );
    mp_free( &mptemp );
    mp_free( &mptemp2 );
    return 0;
}

/* This function will round the decimal string at the given location and then
 * set the character after the location to NULL.
 * Return 1 when a number like "99999" rounds to "1". (Most significant bit
 * is in a new location.)
 */
int RoundString( char *str, int loc )
{
    int cur = loc + 1;
    int round = 0;

    if( str[cur] > '5' ) {
        round = 1;  /* round up */
    } else if( str[cur] < '5' ) {
        round = -1; /* round down */
    } else {
        cur++;
        while( str[cur] != '\0' ) {
            if( str[cur] > '0' ) {
                round = 1; /* round up */
                break;
            }
            cur++;
        }
        if( round == 0 ) {
            if( (str[loc] - '0') % 2 == 0 ) {
                round = -1; /* round down */
            } else {
                round = 1; /* round up */
            }
        }
    }
    cur = loc;
    if( round == 1 ) {
        while( cur >= 0 && str[cur] == '9' ) {
            str[cur] = '0';
            cur--;
        }
        if( cur == -1 ) {
            str[0] = '1';
            str[1] = '\0';
            return 1;
        }
        str[cur] = str[cur] + 1;
    }
    str[cur+1] = '\0';

    return 0;
}

/* This function formats a string generated by the GenerateString function.
 * The formated string will use E notation of the number is between 1e+10
 * and 1e-4 and will just output the decimal number in normal notation
 * otherwise.  If there isn't enough room to fit the full mantissa and the
 * exponent, it rounds the mantissa.
 * Returns -1 if maxlen is too small to display a rounded mantissa and
 * exponent in E notation.
 */
int FormatString( char *dst, char *src, int least, int most, int maxlen )
{
    int i, j, src_index = 0, dst_index = 0, exp_size;

    if( most > 9 || most < -3 || most - least >= maxlen ) {
        /* use E notation */
        char buf[10];

        /* determine size of exponent part */
        if( most > 99 || most < -99 ) {
            exp_size = 5;
        } else if( most > 9 || most < -9 ) {
            exp_size = 4;
        } else {
            exp_size = 3;
        }
        if( maxlen < exp_size + 3 ) return -1; /* not enough room */

        if( most - least + exp_size >= maxlen ) {
            /* need to round */
            if( RoundString( src, maxlen - exp_size - 3 ) == 1 ) {
                most++;
            }
        }

        dst[dst_index++] = src[src_index++];
        if( most - least > 0 ) dst[dst_index++] = '.';
        for( i = most - 1; i >= least; i-- ) {
            if( src[src_index] == '\0' ) break;
            dst[dst_index++] = src[src_index++];
        }
        dst[dst_index++] = 'E';
        if( most > 0 ) dst[dst_index++] = '+';
        itoa( most, buf, 10 );
        i = 0;
        while( buf[i] != '\0' ) {
            dst[dst_index++] = buf[i++];
        }
    } else {
        i = most;
        j = least;
        if( i < 0 ) i = 0;
        if( j > 0 ) j = 0;
        for( ; i >= j; i-- ) {
            if( i > most ) {
                if( i == -1 ) dst[dst_index++] = '.';
                dst[dst_index++] = '0';
            } else if( i < least ) {
                dst[dst_index++] = '0';
            } else {
                if( i == -1 ) dst[dst_index++] = '.';
                dst[dst_index++] = src[src_index++];
            }
        }
    }
    dst[dst_index] = '\0';
    return 0;
}

/* Convert a binary floating-point number to a string */
int r2a( char *dst, void *src, int type, int maxlen )
{
    int rc;
    int N, H;
    char str[20];

    rc = GenerateString( str, src, type, &N, &H );
    rc = FormatString( dst, str, N, H, maxlen );

    return rc;
}

int e2a( char *ascii, char *ext, int maxlen )
{
    /* NYI */
    return( r2a( ascii, ext, EXTENDED, maxlen ) );
}

int d2a( char *ascii, double *dbl, int maxlen )
{
    /* first check special cases */
    if( *(uint64*)dbl == DOUBLE_POS_ZERO ) {
        strcpy( ascii, ASCII_POS_ZERO );
    } else if( *(uint64*)dbl == DOUBLE_NEG_ZERO ) {
        strcpy( ascii, ASCII_NEG_ZERO );
    } else if( *(uint64*)dbl == DOUBLE_POS_INF ) {
        strcpy( ascii, ASCII_POS_INF );
    } else if( *(uint64*)dbl == DOUBLE_NEG_INF ) {
        strcpy( ascii, ASCII_NEG_INF );
    } else if( d_isNan( dbl ) ) {
        strcpy( ascii, ASCII_NAN );
    } else {
        /* handle negative sign */
        if( d_isNeg( dbl ) ) {
            *ascii = '-';
            ascii++;
            dneg( dbl, dbl );
            maxlen--;
        }
        return( r2a( ascii, dbl, DOUBLE, maxlen ) );
    }
    return 0;
}

int f2a( char *ascii, float *flt, int maxlen )
{
    /* first check special cases */
    if( *(uint32*)flt == FLOAT_POS_ZERO ) {
        strcpy( ascii, ASCII_POS_ZERO );
    } else if( *(uint32*)flt == FLOAT_NEG_ZERO ) {
        strcpy( ascii, ASCII_NEG_ZERO );
    } else if( *(uint32*)flt == FLOAT_POS_INF ) {
        strcpy( ascii, ASCII_POS_INF );
    } else if( *(uint32*)flt == FLOAT_NEG_INF ) {
        strcpy( ascii, ASCII_NEG_INF );
    } else if( f_isNan( flt ) ) {
        strcpy( ascii, ASCII_NAN );
    } else {
        /* handle negative sign */
        if( f_isNeg( flt ) ) {
            *ascii = '-';
            ascii++;
            fneg( flt, flt );
            maxlen--;
        }
        return( r2a( ascii, flt, FLOAT, maxlen ) );
    }
    return 0;
}
