/****************************************************************************
** BusTransceiver8W meta object code from reading C++ file 'BusTransceiver8W.h'
**
** Created: Sun Jul 8 11:24:47 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "BusTransceiver8W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *BusTransceiver8W::className() const
{
    return "BusTransceiver8W";
}

QMetaObject *BusTransceiver8W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_BusTransceiver8W( "BusTransceiver8W", &BusTransceiver8W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString BusTransceiver8W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "BusTransceiver8W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString BusTransceiver8W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "BusTransceiver8W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* BusTransceiver8W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Logic74BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"BusTransceiver8W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_BusTransceiver8W.setMetaObject( metaObj );
    return metaObj;
}

void* BusTransceiver8W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "BusTransceiver8W" ) )
	return this;
    return Logic74BaseW::qt_cast( clname );
}

bool BusTransceiver8W::qt_invoke( int _id, QUObject* _o )
{
    return Logic74BaseW::qt_invoke(_id,_o);
}

bool BusTransceiver8W::qt_emit( int _id, QUObject* _o )
{
    return Logic74BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool BusTransceiver8W::qt_property( int id, int f, QVariant* v)
{
    return Logic74BaseW::qt_property( id, f, v);
}

bool BusTransceiver8W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
