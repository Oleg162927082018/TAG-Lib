#ifndef TEXTTAGVIEWWIDGET_H
#define TEXTTAGVIEWWIDGET_H

#include "../../TTI/Common/itagadapter.h"

namespace Ui {
class TextTagViewWidget;
}

class TextTagViewWidget : public ITagWidget
{
    Q_OBJECT

public:
    explicit TextTagViewWidget(QWidget *parent = nullptr);
    ~TextTagViewWidget();

private:
    Ui::TextTagViewWidget *ui;

    // ITagWidget interface
public:
    virtual void SetData(QString config, QString params);
    virtual void GetData(QString &config, QString &params);
};

#endif // TEXTTAGVIEWWIDGET_H
