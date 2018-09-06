#include "text-tag.h"

QList<ITagAdapter *> GetTagAdapters(void)
{
    QList<ITagAdapter *> adapterList;

    adapterList.append(new TextTagAdapter());
 
    return adapterList;
}
