/*
** 2019 Mar 15
**
** The author disclaims copyright to this source code.
**
**
*/
#ifndef _MEMINT_H
#define _MEMINT_H

#ifndef SQLITE_CORE
#include "sqlite3ext.h"
SQLITE_EXTENSION_INIT1
#else
#include "sqlite3.h"
#endif

#include <memory.h>
inline void* __cdecl sqlite3_memcpy(void* _Dst, const void* _Src, sqlite3_uint64 _Size) {
   #if __x86_64__ || _WIN64
   return memcpy(_Dst, _Src, _Size);
   #else
   for (sqlite3_uint64 i = 0; i < _Size; i++)
      ((char*)_Dst)[i] = ((char*)_Src)[i];

   return _Dst;
   #endif
}

inline void* __cdecl sqlite3_memset(void* _Dst, int _Val, sqlite3_uint64 _Size) {

   #if __x86_64__ || _WIN64
   return memset(_Dst, _Val, _Size);
   #else
   for (sqlite3_uint64 i = 0; i < _Size; i++)
      ((char*)_Dst)[i] = _Val;

   return _Dst;
   #endif
}

#endif _MEMINT_H