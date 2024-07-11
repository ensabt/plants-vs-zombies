#ifndef HEADERS_H
#define HEADERS_H
#include <QRegularExpression>
#include <QCryptographicHash>

bool CheckPasswordStrong (QString pass);
QString HashedPass (QString pass);

#endif // HEADERS_H
