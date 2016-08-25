#ifndef C_PLUGIN
#define C_PLUGIN

#include "c_export.h"
#include <core/plugin.h>

#include <QtCore>
#include <QtDebug>

class C_EXPORT C : public Plugin
{
    Q_INTERFACES(Plugin)
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.agitum.plugin" FILE "c.json")

public:
     C(void) {}
    ~C(void) {}
};

#endif // C_PLUGIN
