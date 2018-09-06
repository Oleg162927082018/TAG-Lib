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
    explicit TextTagCreateWidget(QWidget *parent = 0);
    ~TextTagCreateWidget();

private:
    Ui::TextTagCreateWidget *ui;

    // ITagWidget interface
public:
    virtual void SetData(QDomDocument *config, QDomDocument *params);
    virtual void GetData(QDomDocument *config, QDomDocument *params);
};

#endif // TEXTTAGCREATEWIDGET_H
