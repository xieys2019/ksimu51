/****************************************************************************
** InternalXRAMW meta object code from reading C++ file 'InternalXRAMW.h'
**
** Created: Sun Jul 8 11:34:17 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "InternalXRAMW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *InternalXRAMW::className() const
{
    return "InternalXRAMW";
}

QMetaObject *InternalXRAMW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_InternalXRAMW( "InternalXRAMW", &InternalXRAMW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString InternalXRAMW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InternalXRAMW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString InternalXRAMW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InternalXRAMW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* InternalXRAMW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = InternalRAMW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"InternalXRAMW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_InternalXRAMW.setMetaObject( metaObj );
    return metaObj;
}

void* InternalXRAMW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "InternalXRAMW" ) )
	return this;
    return InternalRAMW::qt_cast( clname );
}

bool InternalXRAMW::qt_invoke( int _id, QUObject* _o )
{
    return InternalRAMW::qt_invoke(_id,_o);
}

bool InternalXRAMW::qt_emit( int _id, QUObject* _o )
{
    return InternalRAMW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool InternalXRAMW::qt_property( int id, int f, QVariant* v)
{
    return InternalRAMW::qt_property( id, f, v);
}

bool InternalXRAMW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
