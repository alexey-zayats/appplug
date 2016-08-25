#ifndef D_PLUGIN
#define D_PLUGIN

#include "d_export.h"
#include <core/plugin.h>

#include <QtCore>
#include <QtDebug>

class D_EXPORT D : public Plugin
{
    Q_INTERFACES(Plugin)
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.agitum.plugin" FILE "d.json")

public:
     D(void) {}
    ~D(void) {}
};

#endif // D_PLUGIN
