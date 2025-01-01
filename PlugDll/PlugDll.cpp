
#include "pch.h"
#include "PlugDll.h"
#include <stdio.h>


DLL_API int PlugDll(unsigned char* in, unsigned int insize, unsigned char* out, unsigned  int* outsize)
{
	/* The maximum number of [out] bytes is 1024 */
	if (in == nullptr) return -1;
	if (out == nullptr) return -1;
	if (outsize == nullptr) return -1;

	for (int i = 0; i < insize; i++)
	{
		out[i] = in[i] + 1;
	}
	*outsize = insize;
	return 0;
}


