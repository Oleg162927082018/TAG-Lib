#ifndef TEXT_TAG_GLOBAL_H
#define TEXT_TAG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TAG_LIBRARY)
#  define TAG_SHARED_EXPORT Q_DECL_EXPORT
#else
#  define TAG_SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TEXT_TAG_GLOBAL_H
