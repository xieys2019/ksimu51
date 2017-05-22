/****************************************************************************
** RegisterBankAreaW meta object code from reading C++ file 'RegisterBankAreaW.h'
**
** Created: Sun Jul 8 11:34:47 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "RegisterBankAreaW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *RegisterBankAreaW::className() const
{
    return "RegisterBankAreaW";
}

QMetaObject *RegisterBankAreaW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_RegisterBankAreaW( "RegisterBankAreaW", &RegisterBankAreaW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString RegisterBankAreaW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RegisterBankAreaW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString RegisterBankAreaW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RegisterBankAreaW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* RegisterBankAreaW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = InternalRAMW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"RegisterBankAreaW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_RegisterBankAreaW.setMetaObject( metaObj );
    return metaObj;
}

void* RegisterBankAreaW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "RegisterBankAreaW" ) )
	return this;
    return InternalRAMW::qt_cast( clname );
}

bool RegisterBankAreaW::qt_invoke( int _id, QUObject* _o )
{
    return InternalRAMW::qt_invoke(_id,_o);
}

bool RegisterBankAreaW::qt_emit( int _id, QUObject* _o )
{
    return InternalRAMW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool RegisterBankAreaW::qt_property( int id, int f, QVariant* v)
{
    return InternalRAMW::qt_property( id, f, v);
}

bool RegisterBankAreaW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
