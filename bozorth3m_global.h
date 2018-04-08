#ifndef BOZORTH3M_GLOBAL_H
#define BOZORTH3M_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BOZORTH3M_LIBRARY)
#  define BOZORTH3MSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BOZORTH3MSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BOZORTH3M_GLOBAL_H
