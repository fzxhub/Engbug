#ifndef PULGDLL_H
#define PULGDLL_H

#include "PulgDll_global.h"

// class PULGDLL_EXPORT PulgDll
// {
// public:
//     int PlugDll(unsigned char* in, unsigned int insize, unsigned char* out, unsigned  int* outsize);
// };

#ifdef __cplusplus
extern "C" {
#endif


PULGDLL_EXPORT int PlugDll(unsigned char* in, unsigned int insize, unsigned char* out, unsigned  int* outsize);


#ifdef __cplusplus
}
#endif

#endif // PULGDLL_H
