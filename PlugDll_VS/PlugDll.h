#ifndef SEEDKEY_H
#define SEEDKEY_H



#ifdef _USRDLL
#define DLL_API  __declspec(dllexport)
#else
#define DLL_API  __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif


DLL_API int PlugDll(unsigned char* in, unsigned int insize, unsigned char* out, unsigned  int* outsize);


#ifdef __cplusplus
}
#endif

#endif


