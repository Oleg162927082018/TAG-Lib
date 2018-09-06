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
    explicit TextTagEditWidget(QWidget *parent = 0);
    ~TextTagEditWidget();

private:
    Ui::TextTagEditWidget *ui;

    // ITagEditWidget interface
public:
    virtual void SetData(QDomDocument *config, QDomDocument *params);
    virtual void GetData(QDomDocument *config, QDomDocument *params);
};

#endif // TEXT_TAG_EDITWIDGET_H
