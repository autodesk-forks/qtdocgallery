/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the QtDocGallery module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#ifndef QGALLERY_P_H
#define QGALLERY_P_H

#include <QtCore/qglobal.h>

#if defined(Q_OS_WIN)
#  if defined(QT_NODLL)
#    undef QT_MAKEDLL
#    undef QT_DLL
#  elif defined(QT_MAKEDLL)
#    if defined(QT_DLL)
#      undef QT_DLL
#    endif
#    if defined(QT_BUILD_ADDON_GALLERY_LIB)
#      define Q_GALLERY_EXPORT Q_DECL_EXPORT
#    else
#      define Q_GALLERY_EXPORT Q_DECL_IMPORT
#    endif
#  elif defined(QT_DLL)
#    define Q_GALLERY_EXPORT Q_DECL_IMPORT
#  endif
#endif

#if !defined(Q_GALLERY_EXPORT)
#  if defined(QT_SHARED)
#    define Q_GALLERY_EXPORT Q_DECL_EXPORT
#  else
#    define Q_GALLERY_EXPORT
#  endif
#endif

#define QT_ADDON_GALLERY_BEGIN_NAMESPACE namespace QtAddOn { namespace Gallery {
#define QT_ADDON_GALLERY_END_NAMESPACE } }
#define QT_ADDON_USE_GALLERY_NAMESPACE using namespace QtAddOn::Gallery;
#define QT_ADDON_GELLERY_PREPEND_NAMESPACE(name) ::QtAddOn::Gallery::name

#endif // QGALLERY_P_H