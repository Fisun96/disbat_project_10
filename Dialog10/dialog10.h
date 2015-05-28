#ifndef DIALOG10_H
#define DIALOG10_H

#include <QWidget>

namespace Ui {
class Dialog10;
}

class Dialog10 : public QWidget
{
    Q_OBJECT

public:
    explicit Dialog10(QWidget *parent = 0);
    ~Dialog10();

private:
    Ui::Dialog10 *ui;

signals:
    void closeMe();
};

#endif // DIALOG10_H
