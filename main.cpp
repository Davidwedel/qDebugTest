#include <QCoreApplication>
#include <QLoggingCategory>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qputenv("QT_ASSUME_STDERR_HAS_CONSOLE", "1");
    QLoggingCategory::setFilterRules(QStringLiteral("*.debug=true"));
    
    qWarning() << "This is a Warning";
    
    qDebug() << "This is a debug message!";
    
	qInfo() << "This is an Info Message";
    return a.exec();
}

