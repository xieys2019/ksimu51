/****************************************************************************
** Icm7211mW meta object code from reading C++ file 'Icm7211mW.h'
**
** Created: Sun Jul 8 11:22:33 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Icm7211mW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Icm7211mW::className() const
{
    return "Icm7211mW";
}

QMetaObject *Icm7211mW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Icm7211mW( "Icm7211mW", &Icm7211mW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Icm7211mW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Icm7211mW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Icm7211mW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Icm7211mW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Icm7211mW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "sA", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"externalDataSpaceStartAddressUpperActivated", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "sA", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"externalDataSpaceStartAddressLowerActivated", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"addressTableVerticalHeaderClicked", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"codeBQCheckBoxStateChanged", 1, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "externalDataSpaceStartAddressUpperActivated(int)", &slot_0, QMetaData::Private },
	{ "externalDataSpaceStartAddressLowerActivated(int)", &slot_1, QMetaData::Private },
	{ "addressTableVerticalHeaderClicked(int)", &slot_2, QMetaData::Private },
	{ "codeBQCheckBoxStateChanged(int)", &slot_3, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Icm7211mW", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Icm7211mW.setMetaObject( metaObj );
    return metaObj;
}

void* Icm7211mW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Icm7211mW" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool Icm7211mW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: externalDataSpaceStartAddressUpperActivated((int)static_QUType_int.get(_o+1)); break;
    case 1: externalDataSpaceStartAddressLowerActivated((int)static_QUType_int.get(_o+1)); break;
    case 2: addressTableVerticalHeaderClicked((int)static_QUType_int.get(_o+1)); break;
    case 3: codeBQCheckBoxStateChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return ExternalComponentW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Icm7211mW::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Icm7211mW::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool Icm7211mW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
