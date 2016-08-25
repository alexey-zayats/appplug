#ifndef B_PLUGIN_H
#define B_PLUGIN_H

#include "b_export.h"
#include <core/plugin.h>

#include <QtCore>
#include <QtDebug>

class B_EXPORT B : public Plugin
{
    Q_INTERFACES(Plugin)
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ru.agitum.plugin" FILE "b.json")

public:
     B(void) {}
    ~B(void) {}
};

#endif // B_PLUGIN_H
