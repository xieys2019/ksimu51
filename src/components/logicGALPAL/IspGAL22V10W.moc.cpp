/****************************************************************************
** IspGAL22V10W meta object code from reading C++ file 'IspGAL22V10W.h'
**
** Created: Sun Jul 8 11:25:19 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "IspGAL22V10W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IspGAL22V10W::className() const
{
    return "IspGAL22V10W";
}

QMetaObject *IspGAL22V10W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IspGAL22V10W( "IspGAL22V10W", &IspGAL22V10W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IspGAL22V10W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IspGAL22V10W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IspGAL22V10W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IspGAL22V10W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IspGAL22V10W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Gal22V10W::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"IspGAL22V10W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IspGAL22V10W.setMetaObject( metaObj );
    return metaObj;
}

void* IspGAL22V10W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IspGAL22V10W" ) )
	return this;
    return Gal22V10W::qt_cast( clname );
}

bool IspGAL22V10W::qt_invoke( int _id, QUObject* _o )
{
    return Gal22V10W::qt_invoke(_id,_o);
}

bool IspGAL22V10W::qt_emit( int _id, QUObject* _o )
{
    return Gal22V10W::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool IspGAL22V10W::qt_property( int id, int f, QVariant* v)
{
    return Gal22V10W::qt_property( id, f, v);
}

bool IspGAL22V10W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
