#ifndef F_GLOBAL_H
#define F_GLOBAL_H

#include <qglobal.h>

#if defined(F_PLUGIN)
#  define F_EXPORT Q_DECL_EXPORT
#else
#  define F_EXPORT Q_DECL_IMPORT
#endif

#endif // F_GLOBAL_H
