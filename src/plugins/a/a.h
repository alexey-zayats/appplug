#ifndef A_PLUGIN
#define A_PLUGIN

#include "a_export.h"
#include <core/plugin.h>

#include <QtCore>
#include <QtDebug>

class A_EXPORT A : public Plugin
{
    Q_INTERFACES(Plugin)
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.agitum.plugin" FILE "a.json")

public:
     A(void) {}
    ~A(void) {}
};

#endif // A_PLUGIN
