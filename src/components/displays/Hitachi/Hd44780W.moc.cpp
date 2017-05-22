/****************************************************************************
** Hd44780W meta object code from reading C++ file 'Hd44780W.h'
**
** Created: Sun Jul 8 11:22:18 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Hd44780W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Hd44780W::className() const
{
    return "Hd44780W";
}

QMetaObject *Hd44780W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Hd44780W( "Hd44780W", &Hd44780W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Hd44780W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Hd44780W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Hd44780W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Hd44780W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Hd44780W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    static const QUMethod slot_0 = {"numColumnsQSliderReleased", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"numColumnsQSliderMoved", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "numColumnsQSliderReleased()", &slot_0, QMetaData::Private },
	{ "numColumnsQSliderMoved(int)", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Hd44780W", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Hd44780W.setMetaObject( metaObj );
    return metaObj;
}

void* Hd44780W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Hd44780W" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool Hd44780W::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: numColumnsQSliderReleased(); break;
    case 1: numColumnsQSliderMoved((int)static_QUType_int.get(_o+1)); break;
    default:
	return ExternalComponentW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Hd44780W::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Hd44780W::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool Hd44780W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
