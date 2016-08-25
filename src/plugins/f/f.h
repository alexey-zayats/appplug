#ifndef F_PLUGIN
#define F_PLUGIN

#include "f_export.h"
#include <core/plugin.h>

#include <QtCore>
#include <QtDebug>

class F_EXPORT F : public Plugin
{
    Q_INTERFACES(Plugin)
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.agitum.plugin" FILE "f.json")

public:
     F(void) {}
    ~F(void) {}
};

#endif // F_PLUGIN
