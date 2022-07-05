#ifndef UNTITLEDPLUGIN_H
#define UNTITLEDPLUGIN_H

#include "untitled_global.h"

#include <extensionsystem/iplugin.h>

namespace Untitled {
namespace Internal {

class UntitledPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "Untitled.json")

public:
    UntitledPlugin();
    ~UntitledPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace Untitled

#endif // UNTITLEDPLUGIN_H
