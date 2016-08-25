#ifndef A_GLOBAL_H
#define A_GLOBAL_H

#include <qglobal.h>

#if defined(A_PLUGIN)
#  define A_EXPORT Q_DECL_EXPORT
#else
#  define A_EXPORT Q_DECL_IMPORT
#endif

#endif // A_GLOBAL_H