#ifndef TEXT_TAG_ADAPTER_H
#define TEXT_TAG_ADAPTER_H

#include "../../TTI/Common/itagadapter.h"

#include "text-tag-global.h"

class TAG_SHARED_EXPORT TextTagAdapter: public ITagAdapter
{
public:
    TextTagAdapter();
    virtual ~TextTagAdapter();

// ITagAdapter interface
public:
    virtual const QString ID();
    virtual const QString Name();
    virtual const QString Description();

    virtual ITagWidget *GetTagCreateWidget(QWidget *parent);
    virtual ITagWidget *GetTagEditWidget(QWidget *parent);
    virtual ITagWidget *GetTagViewWidget(QWidget *parent);
};

#endif // TEXT_TAG_ADAPTER_H
