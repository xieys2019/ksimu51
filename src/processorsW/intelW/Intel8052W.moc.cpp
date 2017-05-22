/****************************************************************************
** Intel8052W meta object code from reading C++ file 'Intel8052W.h'
**
** Created: Sun Jul 8 11:29:15 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Intel8052W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Intel8052W::className() const
{
    return "Intel8052W";
}

QMetaObject *Intel8052W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Intel8052W( "Intel8052W", &Intel8052W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Intel8052W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Intel8052W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Intel8052W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Intel8052W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Intel8052W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Intel8052W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Intel8052W.setMetaObject( metaObj );
    return metaObj;
}

void* Intel8052W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Intel8052W" ) )
	return this;
    if ( !qstrcmp( clname, "I51BaseInternalROMW" ) )
	return (I51BaseInternalROMW*)this;
    if ( !qstrcmp( clname, "Intel8032W" ) )
	return (Intel8032W*)this;
    return I51BaseW::qt_cast( clname );
}

bool Intel8052W::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool Intel8052W::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Intel8052W::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool Intel8052W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
