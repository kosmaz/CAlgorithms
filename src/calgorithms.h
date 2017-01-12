#ifndef CALGORITHMS_H
#define CALGORITHMS_H
#pragma once

#ifdef __cplusplus
extern "C"
#endif

#include <stdlib.h>

enum variable
{
	_CHAR,_UCHAR,_INT,_UINT,
	_LONG,_ULONG,_LONGLONG,
	_ULONGLONG,_FLOAT,_DOUBLE,
	__LONGDOUBLE,_OTHER
};

void _iaton_(const int*,int,enum variable,void*);
void _ntoia_(int*,enum variable,const void*);
int _lsearch_(const void*,size_t,enum variable,const void*);
int _lsearch_str_(const void*,size_t,size_t,const char*);

#endif //CALGORITHMS_H
