/****************************************************************************
** Gate2ANDW meta object code from reading C++ file 'Gate2ANDW.h'
**
** Created: Fri Dec 30 16:33:46 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../../src/components/logic74/Gate2ANDW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Gate2ANDW::className() const
{
    return "Gate2ANDW";
}

QMetaObject *Gate2ANDW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Gate2ANDW( "Gate2ANDW", &Gate2ANDW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Gate2ANDW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Gate2ANDW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Gate2ANDW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Gate2ANDW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Gate2ANDW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Gate2NANDW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Gate2ANDW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Gate2ANDW.setMetaObject( metaObj );
    return metaObj;
}

void* Gate2ANDW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Gate2ANDW" ) )
	return this;
    return Gate2NANDW::qt_cast( clname );
}

bool Gate2ANDW::qt_invoke( int _id, QUObject* _o )
{
    return Gate2NANDW::qt_invoke(_id,_o);
}

bool Gate2ANDW::qt_emit( int _id, QUObject* _o )
{
    return Gate2NANDW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Gate2ANDW::qt_property( int id, int f, QVariant* v)
{
    return Gate2NANDW::qt_property( id, f, v);
}

bool Gate2ANDW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
