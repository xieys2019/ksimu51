/****************************************************************************
** Intel8032W meta object code from reading C++ file 'Intel8032W.h'
**
** Created: Sun Jul 8 11:29:33 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Intel8032W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Intel8032W::className() const
{
    return "Intel8032W";
}

QMetaObject *Intel8032W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Intel8032W( "Intel8032W", &Intel8032W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Intel8032W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Intel8032W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Intel8032W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Intel8032W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Intel8032W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Intel8032W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Intel8032W.setMetaObject( metaObj );
    return metaObj;
}

void* Intel8032W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Intel8032W" ) )
	return this;
    if ( !qstrcmp( clname, "I51BaseInternalIRAMW" ) )
	return (I51BaseInternalIRAMW*)this;
    if ( !qstrcmp( clname, "I51BaseTimer2W" ) )
	return (I51BaseTimer2W*)this;
    return I51BaseW::qt_cast( clname );
}

bool Intel8032W::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool Intel8032W::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Intel8032W::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool Intel8032W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
