#ifndef C_GLOBAL_H
#define C_GLOBAL_H

#include <qglobal.h>

#if defined(C_PLUGIN)
#  define C_EXPORT Q_DECL_EXPORT
#else
#  define C_EXPORT Q_DECL_IMPORT
#endif

#endif // C_GLOBAL_H
