
#include "pch.h"
#include "PlugDll.h"
#include <stdio.h>

#define PLUGDLL_TYPE_ERROR      -1
#define PLUGDLL_TYPE_ARRAY      0
#define PLUGDLL_TYPE_UINT08     1
#define PLUGDLL_TYPE_UINT16     2
#define PLUGDLL_TYPE_UINT32     3
#define PLUGDLL_TYPE_INT08      4
#define PLUGDLL_TYPE_INT16      5
#define PLUGDLL_TYPE_INT32      6
#define PLUGDLL_TYPE_FLOAT      7


DLL_API int PlugDll(unsigned char* in, unsigned int insize, unsigned char* out, unsigned  int* outsize)
{
	/* The maximum number of [out] bytes is 1024 */
	if (in == nullptr) return PLUGDLL_TYPE_ERROR;
	if (out == nullptr) return PLUGDLL_TYPE_ERROR;
	if (outsize == nullptr) return PLUGDLL_TYPE_ERROR;

	for (int i = 0; i < insize; i++)
	{
		out[i] = in[i] + 1;
	}
	*outsize = insize;
	return PLUGDLL_TYPE_ARRAY;
}


