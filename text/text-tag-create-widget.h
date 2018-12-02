#ifndef TEXTTAGCREATEWIDGET_H
#define TEXTTAGCREATEWIDGET_H

#include "../../TTI/Common/itagadapter.h"

namespace Ui {
class TextTagCreateWidget;
}

class TextTagCreateWidget : public ITagWidget
{
    Q_OBJECT

public:
    explicit TextTagCreateWidget(QWidget *parent = nullptr);
    ~TextTagCreateWidget();

private:
    Ui::TextTagCreateWidget *ui;

    // ITagWidget interface
public:
    virtual void SetData(QString config, QString params);
    virtual void GetData(QString &config, QString &params);
};

#endif // TEXTTAGCREATEWIDGET_H
