#include "text-tag-create-widget.h"
#include "ui_text-tag-create-widget.h"

TextTagCreateWidget::TextTagCreateWidget(QWidget *parent) :
    ITagWidget(parent),
    ui(new Ui::TextTagCreateWidget)
{
    ui->setupUi(this);
    ui->descBox->setPlainText("<html><head></head><body><p></p></body></html>");
}

TextTagCreateWidget::~TextTagCreateWidget()
{
    delete ui;
}

void TextTagCreateWidget::SetData(QString config, QString params)
{
    if(params.isNull())
    {
        ui->descBox->setPlainText("<html><head></head><body><p></p></body></html>");
    }
    else
    {
        ui->descBox->setPlainText(params);
    }
}

void TextTagCreateWidget::GetData(QString &config, QString &params)
{
    params = ui->descBox->toPlainText();
}
