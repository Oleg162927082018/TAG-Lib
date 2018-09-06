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
    explicit TextTagViewWidget(QWidget *parent = 0);
    ~TextTagViewWidget();

private:
    Ui::TextTagViewWidget *ui;

    // ITagWidget interface
public:
    virtual void SetData(QDomDocument *config, QDomDocument *params);
    virtual void GetData(QDomDocument *config, QDomDocument *params);
};

#endif // TEXTTAGVIEWWIDGET_H
