#ifndef LOCATIONLOADER_H
#define LOCATIONLOADER_H

#include <QCoreApplication>
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QResource>
#include <QIODevice>

class locationLoader
{
public:
    locationLoader();
    int extractOTime(QString input);
    int extractCTime(QString input);
    QString locationLoad(QString filename, int option);
};

#endif // LOCATIONLOADER_H
