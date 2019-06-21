#ifndef QTSUPPORT_H
#define QTSUPPORT_H

#include <QMessageBox>
#include "basic.h"

class QtSupport
{
public:
    static void error(const QString&, const QString& title="Error", ushort width=400, ushort height=200);

    static void info(const QString&, const QString& title="Info", ushort width=400, ushort height=200);

    static void warning(const QString&, const QString& title="Warning", ushort width=400, ushort height=200);
};

#endif // QTSUPPORT_H
