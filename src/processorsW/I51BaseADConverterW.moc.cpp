/****************************************************************************
** AnalogInputExternalW meta object code from reading C++ file 'I51BaseADConverterW.h'
**
** Created: Sun Jul 8 11:33:06 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "I51BaseADConverterW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AnalogInputExternalW::className() const
{
    return "AnalogInputExternalW";
}

QMetaObject *AnalogInputExternalW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AnalogInputExternalW( "AnalogInputExternalW", &AnalogInputExternalW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AnalogInputExternalW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AnalogInputExternalW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AnalogInputExternalW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AnalogInputExternalW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AnalogInputExternalW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ "name", &static_QUType_QString, 0, QUParameter::InOut },
	{ "dV", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"analogInputPinListValueChanged", 3, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "analogInputPinListValueChanged(int,QString&,double)", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"AnalogInputExternalW", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AnalogInputExternalW.setMetaObject( metaObj );
    return metaObj;
}

void* AnalogInputExternalW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AnalogInputExternalW" ) )
	return this;
    return ExternalW::qt_cast( clname );
}

bool AnalogInputExternalW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: analogInputPinListValueChanged((int)static_QUType_int.get(_o+1),(QString&)static_QUType_QString.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    default:
	return ExternalW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AnalogInputExternalW::qt_emit( int _id, QUObject* _o )
{
    return ExternalW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AnalogInputExternalW::qt_property( int id, int f, QVariant* v)
{
    return ExternalW::qt_property( id, f, v);
}

bool AnalogInputExternalW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *I51BaseADConverterW::className() const
{
    return "I51BaseADConverterW";
}

QMetaObject *I51BaseADConverterW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_I51BaseADConverterW( "I51BaseADConverterW", &I51BaseADConverterW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString I51BaseADConverterW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseADConverterW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString I51BaseADConverterW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseADConverterW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* I51BaseADConverterW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"I51BaseADConverterW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_I51BaseADConverterW.setMetaObject( metaObj );
    return metaObj;
}

void* I51BaseADConverterW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "I51BaseADConverterW" ) )
	return this;
    return I51BaseW::qt_cast( clname );
}

bool I51BaseADConverterW::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool I51BaseADConverterW::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool I51BaseADConverterW::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool I51BaseADConverterW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
