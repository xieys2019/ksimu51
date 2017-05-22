/****************************************************************************
** ExternalRAMW meta object code from reading C++ file 'ExternalRAMW.h'
**
** Created: Fri Dec 30 16:34:21 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../../src/components/memory/ExternalRAMW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ExternalRAMW::className() const
{
    return "ExternalRAMW";
}

QMetaObject *ExternalRAMW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ExternalRAMW( "ExternalRAMW", &ExternalRAMW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ExternalRAMW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ExternalRAMW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ExternalRAMW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ExternalRAMW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ExternalRAMW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"externalRAMTableVerticalHeaderClicked", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "sA", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"externalDataSpaceStartAddressActivated", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"externalRAMTableValueChanged", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"externalRAMTableCurrentChanged", 2, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "externalRAMTableVerticalHeaderClicked(int)", &slot_0, QMetaData::Private },
	{ "externalDataSpaceStartAddressActivated(int)", &slot_1, QMetaData::Private },
	{ "externalRAMTableValueChanged(int,int)", &slot_2, QMetaData::Private },
	{ "externalRAMTableCurrentChanged(int,int)", &slot_3, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ExternalRAMW", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ExternalRAMW.setMetaObject( metaObj );
    return metaObj;
}

void* ExternalRAMW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ExternalRAMW" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool ExternalRAMW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: externalRAMTableVerticalHeaderClicked((int)static_QUType_int.get(_o+1)); break;
    case 1: externalDataSpaceStartAddressActivated((int)static_QUType_int.get(_o+1)); break;
    case 2: externalRAMTableValueChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 3: externalRAMTableCurrentChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return ExternalComponentW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ExternalRAMW::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ExternalRAMW::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool ExternalRAMW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
