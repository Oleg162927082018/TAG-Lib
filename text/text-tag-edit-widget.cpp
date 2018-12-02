#include "text-tag-edit-widget.h"
#include "ui_text-tag-edit-widget.h"

#include <QFileDialog>
#include <QDirIterator>

TextTagEditWidget::TextTagEditWidget(QWidget *parent) :
    ITagWidget(parent),
    ui(new Ui::TextTagEditWidget)
{
    ui->setupUi(this);
}

TextTagEditWidget::~TextTagEditWidget()
{
    delete ui;
}

void TextTagEditWidget::SetData(QString config, QString params)
{
    if(params.isNull())
    {
        ui->descBox->setPlainText("");
    }
    else
    {
        ui->descBox->setPlainText(params);
    }
}

void TextTagEditWidget::GetData(QString &config, QString &params)
{
    params = ui->descBox->toPlainText();
}
