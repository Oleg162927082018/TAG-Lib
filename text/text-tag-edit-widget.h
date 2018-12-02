#ifndef TEXT_TAG_EDITWIDGET_H
#define TEXT_TAG_EDITWIDGET_H

#include "../../TTI/Common/itagadapter.h"

namespace Ui {
class TextTagEditWidget;
}

class TextTagEditWidget : public ITagWidget
{
    Q_OBJECT

public:
    explicit TextTagEditWidget(QWidget *parent = nullptr);
    ~TextTagEditWidget();

private:
    Ui::TextTagEditWidget *ui;

    // ITagEditWidget interface
public:
    virtual void SetData(QString config, QString params);
    virtual void GetData(QString &config, QString &params);
};

#endif // TEXT_TAG_EDITWIDGET_H
