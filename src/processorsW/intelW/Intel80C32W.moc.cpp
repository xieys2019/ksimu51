/****************************************************************************
** Intel80C32W meta object code from reading C++ file 'Intel80C32W.h'
**
** Created: Sun Jul 8 11:29:46 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Intel80C32W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Intel80C32W::className() const
{
    return "Intel80C32W";
}

QMetaObject *Intel80C32W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Intel80C32W( "Intel80C32W", &Intel80C32W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Intel80C32W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Intel80C32W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Intel80C32W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Intel80C32W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Intel80C32W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Intel80C32W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Intel80C32W.setMetaObject( metaObj );
    return metaObj;
}

void* Intel80C32W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Intel80C32W" ) )
	return this;
    if ( !qstrcmp( clname, "Intel8032W" ) )
	return (Intel8032W*)this;
    return I51BaseW::qt_cast( clname );
}

bool Intel80C32W::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool Intel80C32W::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Intel80C32W::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool Intel80C32W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
