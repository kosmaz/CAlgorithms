#include "calgorithms.h"
#include <math.h>
#include <strings.h>
#include <ctype.h>

void _aton_(const void* _array,int _size,enum variable _type,void* _numeral)
{
	return;
}

void _ntoa_(void* _array,enum variable _type,const void* _numeral)
{
	return;
}

int _lsearch_(const void* _database,size_t _size,enum variable _type,const void* _record)
{
	int index=-1;
	switch(_type)
	{
		case _CHAR:
		{
			char* database=(char*)_database;
			char record=*((char*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _UCHAR:
		{
			unsigned char* database=(unsigned char*)_database;
			unsigned char record=*((unsigned char*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _INT:
		{
			int* database=(int*)_database;
			int record=*((int*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _UINT:
		{
			unsigned int* database=(unsigned int*)_database;
			unsigned int record=*((unsigned int*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _LONG:
		{
			long* database=(long*)_database;
			long record=*((long*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _ULONG:
		{
			unsigned long* database=(unsigned long*)_database;
			unsigned long record=*((unsigned long*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _LONGLONG:
		{
			long long* database=(long long*)_database;
			long long record=*((long long*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _ULONGLONG:
		{
			unsigned long long* database=(unsigned long long*)_database;
			unsigned long long record=*((unsigned long long*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _FLOAT:
		{
			float* database=(float*)_database;
			float record=*((float*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _DOUBLE:
		{
			double* database=(double*)_database;
			double record=*((double*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
			if(database[i]==record){ index=i; break; }
			}break;
		}
		case __LONGDOUBLE:
		{
			long double* database=(long double*)_database;
			long double record=*((long double*)_record);
			size_t i;
			for(i=0; i<_size; ++i)
			{
				if(database[i]==record){ index=i; break; }
			}break;
		}
		case _OTHER:break;
	}
	return index;
}

int _lsearch_str(const void* _database,size_t _size,size_t _typename,const char* str)
{
	int index=-1;
	typedef char style[_typename];
	style* database=(style*)_database;
	size_t i;
	for(i=0; i<_size; ++i)
	{
		if(strcmp(str,database[i])==0){ index=i; break;}
	}
	return index;
}
