#ifndef LOG_H
#define LOG_H

#include <QDebug>
#include <QDateTime>
#include <QThread>

#define LOGD qDebug() << "[D][" << QThread::currentThreadId() << "][" << QDateTime::currentDateTime().toString("hh:mm:ss.zzz").toStdString().c_str() << "][" << __FUNCTION__ << "][" << __LINE__ << "]"
#define LOGE qDebug() << "[E][" << QThread::currentThreadId() << "][" << QDateTime::currentDateTime().toString("hh:mm:ss.zzz").toStdString().c_str() << "][" << __FUNCTION__ << "][" << __LINE__ << "]"


#endif

