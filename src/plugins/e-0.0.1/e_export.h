#ifndef E_GLOBAL_H
#define E_GLOBAL_H

#include <qglobal.h>

#if defined(E_PLUGIN)
#  define E_EXPORT Q_DECL_EXPORT
#else
#  define E_EXPORT Q_DECL_IMPORT
#endif

#endif // E_GLOBAL_H
