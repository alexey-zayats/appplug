#ifndef D_GLOBAL_H
#define D_GLOBAL_H

#include <qglobal.h>

#if defined(D_PLUGIN)
#  define D_EXPORT Q_DECL_EXPORT
#else
#  define D_EXPORT Q_DECL_IMPORT
#endif

#endif // D_GLOBAL_H
