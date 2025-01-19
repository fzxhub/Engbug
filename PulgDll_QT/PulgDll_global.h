#ifndef PULGDLL_GLOBAL_H
#define PULGDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PULGDLL_LIBRARY)
#define PULGDLL_EXPORT Q_DECL_EXPORT
#else
#define PULGDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // PULGDLL_GLOBAL_H
