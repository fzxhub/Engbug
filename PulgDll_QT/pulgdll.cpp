#include "pulgdll.h"
#include <QInputDialog>

#define PLUGDLL_TYPE_ERROR      -1
#define PLUGDLL_TYPE_ARRAY      0
#define PLUGDLL_TYPE_UINT08     1
#define PLUGDLL_TYPE_UINT16     2
#define PLUGDLL_TYPE_UINT32     3
#define PLUGDLL_TYPE_INT08      4
#define PLUGDLL_TYPE_INT16      5
#define PLUGDLL_TYPE_INT32      6
#define PLUGDLL_TYPE_FLOAT      7


int PlugDll(unsigned char* in, unsigned int insize, unsigned char* out, unsigned  int* outsize)
{
    /* The maximum number of [out] bytes is 1024 */
    //if (in == nullptr) return PLUGDLL_TYPE_ERROR;
    if (out == nullptr) return PLUGDLL_TYPE_ERROR;
    if (outsize == nullptr) return PLUGDLL_TYPE_ERROR;
    //if (insize < 5) return PLUGDLL_TYPE_ERROR;

    bool ok;
    QInputDialog dialog;
    int value =dialog.getInt(&dialog, "Enter Block Size", "Enter Block Size", 512,
                                   0,2048,1, &ok);

    out[3] = value >> 24;
    out[2] = value >> 16;
    out[1] = value >> 8;
    out[0] = value >> 0;
    *outsize = 4;

    return PLUGDLL_TYPE_UINT32;
}
