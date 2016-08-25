#ifndef E_PLUGIN
#define E_PLUGIN

#include "e_export.h"
#include <core/plugin.h>

#include <QtCore>
#include <QtDebug>

class E_EXPORT E : public Plugin
{
    Q_INTERFACES(Plugin)
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.agitum.plugin" FILE "e.json")

public:
     E(void) {}
    ~E(void) {}
};

#endif // E_PLUGIN
