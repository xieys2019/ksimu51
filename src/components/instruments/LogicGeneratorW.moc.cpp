/****************************************************************************
** LogicGeneratorW meta object code from reading C++ file 'LogicGeneratorW.h'
**
** Created: Sun Jul 8 11:23:17 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "LogicGeneratorW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *LogicGeneratorW::className() const
{
    return "LogicGeneratorW";
}

QMetaObject *LogicGeneratorW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LogicGeneratorW( "LogicGeneratorW", &LogicGeneratorW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LogicGeneratorW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LogicGeneratorW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LogicGeneratorW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LogicGeneratorW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LogicGeneratorW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    static const QUMethod slot_0 = {"startLevelKPushButtonClicked", 0, 0 };
    static const QUMethod slot_1 = {"onOffKPushButtonClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "startLevelKPushButtonClicked()", &slot_0, QMetaData::Private },
	{ "onOffKPushButtonClicked()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"LogicGeneratorW", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LogicGeneratorW.setMetaObject( metaObj );
    return metaObj;
}

void* LogicGeneratorW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LogicGeneratorW" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool LogicGeneratorW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: startLevelKPushButtonClicked(); break;
    case 1: onOffKPushButtonClicked(); break;
    default:
	return ExternalComponentW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool LogicGeneratorW::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool LogicGeneratorW::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool LogicGeneratorW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
