/****************************************************************************
** Icm7211W meta object code from reading C++ file 'Icm7211W.h'
**
** Created: Fri Dec 30 16:31:28 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../../../src/components/displays/Maxim/Icm7211W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Icm7211W::className() const
{
    return "Icm7211W";
}

QMetaObject *Icm7211W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Icm7211W( "Icm7211W", &Icm7211W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Icm7211W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Icm7211W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Icm7211W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Icm7211W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Icm7211W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"codeBQCheckBoxStateChanged", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "codeBQCheckBoxStateChanged(int)", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Icm7211W", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Icm7211W.setMetaObject( metaObj );
    return metaObj;
}

void* Icm7211W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Icm7211W" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool Icm7211W::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: codeBQCheckBoxStateChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return ExternalComponentW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Icm7211W::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Icm7211W::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool Icm7211W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
