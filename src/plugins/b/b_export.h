#ifndef B_GLOBAL_H
#define B_GLOBAL_H

#include <qglobal.h>

#if defined(B_PLUGIN)
#  define B_EXPORT Q_DECL_EXPORT
#else
#  define B_EXPORT Q_DECL_IMPORT
#endif

#endif // B_GLOBAL_H