#include "text-tag.h"
#include "text-tag-create-widget.h"
#include "text-tag-edit-widget.h"
#include "text-tag-view-widget.h"

#include <QDir>
#include <QDirIterator>
#include <QTextStream>

TextTagAdapter::TextTagAdapter()
{
}

TextTagAdapter::~TextTagAdapter()
{
}

const QString TextTagAdapter::ID()
{
    return "TEXT";
}

const QString TextTagAdapter::Name()
{
    return "Simple text tag";
}

const QString TextTagAdapter::Description()
{
    return "Simple text tag";
}

ITagWidget *TextTagAdapter::GetTagCreateWidget(QWidget *parent)
{
    return new TextTagCreateWidget(parent);
}

ITagWidget *TextTagAdapter::GetTagEditWidget(QWidget *parent)
{
    return new TextTagEditWidget(parent);
}

ITagWidget *TextTagAdapter::GetTagViewWidget(QWidget *parent)
{
    return new TextTagViewWidget(parent);
}
