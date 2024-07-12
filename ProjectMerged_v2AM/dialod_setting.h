#ifndef DIALOD_SETTING_H
#define DIALOD_SETTING_H

#include <QWidget>

namespace Ui {
class Dialod_setting;
}

class Dialod_setting : public QWidget
{
    Q_OBJECT

public:
    explicit Dialod_setting(QWidget *parent = nullptr);
    ~Dialod_setting();

private:
    Ui::Dialod_setting *ui;
};

#endif // DIALOD_SETTING_H
