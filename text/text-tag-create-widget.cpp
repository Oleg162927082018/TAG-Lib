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

void TextTagCreateWidget::SetData(QDomDocument *config, QDomDocument *params)
{
    //Description
    QDomElement descElement = params->firstChildElement("description");
    if(descElement.isNull())
    {
        ui->descBox->setPlainText("<html><head></head><body><p></p></body></html>");
    }
    else
    {
        ui->descBox->setPlainText(descElement.firstChild().toCDATASection().data());
    }
}

void TextTagCreateWidget::GetData(QDomDocument *config, QDomDocument *params)
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
