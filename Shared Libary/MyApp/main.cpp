

#include <QCoreApplication>
#include "../MyLib/MyLib_global.h"
#include "../MyLib/mylib.h"
#include <QTextStream>

QTextStream in(stdin);
QTextStream out(stdout);



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyLib lib;
    auto max = lib.max("s","a");
    auto min = lib.min(10,20);

    out <<"Max:" << max << Qt::endl;
    out <<"Min:" << min << Qt::endl;


    return a.exec();
}
