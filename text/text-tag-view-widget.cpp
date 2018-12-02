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

void TextTagViewWidget::SetData(QString config, QString params)
{
    if(params.isNull())
    {
        ui->descBox->setHtml("");
    }
    else
    {
        ui->descBox->setHtml(params);
    }
}

void TextTagViewWidget::GetData(QString &config, QString &params)
{

}
