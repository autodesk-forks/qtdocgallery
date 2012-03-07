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

#ifndef QABSTRACTGALLERY_H
#define QABSTRACTGALLERY_H

#include <qgalleryabstractrequest.h>

QT_ADDON_GALLERY_BEGIN_NAMESPACE

class QAbstractGalleryPrivate;

class Q_GALLERY_EXPORT QAbstractGallery : public QObject
{
    Q_OBJECT
public:
    QAbstractGallery(QObject *parent = 0);
    ~QAbstractGallery();

    virtual bool isRequestSupported(QGalleryAbstractRequest::RequestType type) const = 0;

protected:
    virtual QGalleryAbstractResponse *createResponse(QGalleryAbstractRequest *request) = 0;

    QAbstractGallery(QAbstractGalleryPrivate &dd, QObject *parent);

    QScopedPointer<QAbstractGalleryPrivate> d_ptr;

    friend class QGalleryAbstractRequest;
};

QT_ADDON_GALLERY_END_NAMESPACE

#endif