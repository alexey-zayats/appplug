#include <QtCore>
#include <QtDebug>

#include <core/plugin.h>
#include <core/pluginmanager.h>

int main(int argc, char **argv)
{
    QCoreApplication application(argc, argv);

    PluginManager::instance()->initialize();

    QStringList loadedPlugins =  PluginManager::instance()->plugins();
    qDebug() << "\nSuccessfully loaded: ";
    foreach (QString name, loadedPlugins) {
        qDebug() << name;
    }

    PluginManager::instance()->uninitialize();

    return 0;
}
