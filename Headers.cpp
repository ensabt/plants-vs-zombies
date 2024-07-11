#include "Headers.h"

bool CheckPasswordStrong (QString pass){
    // Regex pattern to check password strength
    //First Way:
    QRegularExpression qr;
    //////////////"^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[@#$%^&+=])(?=\\S+$).{8}$"
    qr.setPattern("(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[@#$%^&+=])(?=\\S+$).{8}");
    QRegularExpressionMatch match = qr.match(pass);

    // Check if password matches the pattern
    if (match.hasMatch())
        return true;
    else
        return false;

    //second way:
    // QRegularExpression qr("(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[@#$%^&+=])(?=\\S+$).{8,}");
    // QRegularExpressionMatch match = qr.match(pass);
    // if (match.hasMatch()){
    // }
}
QString HashedPass (QString pass){
    QByteArray passwordData = pass.toUtf8();
    QByteArray HASHed = QCryptographicHash::hash(passwordData, QCryptographicHash::Sha256);
    HASHed = HASHed.toHex();
    return HASHed;
}
