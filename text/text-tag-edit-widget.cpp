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

void TextTagEditWidget::SetData(QDomDocument *config, QDomDocument *params)
{
    //Description
    QDomElement descElement = params->firstChildElement("description");
    if(descElement.isNull())
    {
        ui->descBox->setPlainText("");
    }
    else
    {
        ui->descBox->setPlainText(descElement.firstChild().toCDATASection().data());
    }
}

void TextTagEditWidget::GetData(QDomDocument *config, QDomDocument *params)
{
    //Description
    QDomElement descElement = params->firstChildElement("description");
    if(descElement.isNull())
    {
        descElement = params->createElement("description");
        params->appendChild(descElement);

        QDomCDATASection descValue = params->createCDATASection(ui->descBox->toPlainText());
        descElement.appendChild(descValue);
    }
    else
    {
        QDomCDATASection descValue = params->createCDATASection(ui->descBox->toPlainText());
        descElement.appendChild(descValue);

        descElement.replaceChild(descElement.firstChild(), descValue);
    }
}
