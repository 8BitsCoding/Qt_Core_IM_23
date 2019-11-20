#pragma once

#include <QObject>
#include <qdebug.h>
#include <qfile.h>
#include <qdir.h>
#include <qdatetime.h>
#include <iostream>
#include <qtextstream.h>

class logger : public QObject
{
	Q_OBJECT

public:
	explicit logger(QObject *parent = nullptr);
	~logger();

	static bool logging;
	static QString filename;
	static void attach();
	static void handler(QtMsgType type, const QMessageLogContext& context, const QString& msg);

signals:

public slots:

};
