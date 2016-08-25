
#pragma once

#include "core_export.h"

#include <QtCore/QObject>

class CORE_EXPORT Plugin : public QObject
{
    Q_OBJECT

public:
             Plugin(void) {}
    virtual ~Plugin(void) {}
};

Q_DECLARE_INTERFACE(Plugin, "ru.agitum.plugin")
