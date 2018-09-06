#include "text-tag-view-widget.h"
#include "ui_text-tag-view-widget.h"

TextTagViewWidget::TextTagViewWidget(QWidget *parent) :
    ITagWidget(parent),
    ui(new Ui::TextTagViewWidget)
{
    ui->setupUi(this);
}

TextTagViewWidget::~TextTagViewWidget()
{
    delete ui;
}

void TextTagViewWidget::SetData(QDomDocument *config, QDomDocument *params)
{
    //Description
    QDomElement descElement = params->firstChildElement("description");
    if(descElement.isNull())
    {
        ui->descBox->setHtml("");
    }
    else
    {
        ui->descBox->setHtml(descElement.firstChild().toCDATASection().data());
    }
}

void TextTagViewWidget::GetData(QDomDocument *config, QDomDocument *params)
{

}
