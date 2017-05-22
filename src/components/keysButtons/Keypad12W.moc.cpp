/****************************************************************************
** Keypad12W meta object code from reading C++ file 'Keypad12W.h'
**
** Created: Sun Jul 8 11:23:41 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Keypad12W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Keypad12W::className() const
{
    return "Keypad12W";
}

QMetaObject *Keypad12W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Keypad12W( "Keypad12W", &Keypad12W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Keypad12W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Keypad12W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Keypad12W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Keypad12W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Keypad12W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"keyFuncQCheckBoxStateChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"outputLevelQCheckBoxStateChanged", 1, param_slot_1 };
    static const QUMethod slot_2 = {"button1Pressed", 0, 0 };
    static const QUMethod slot_3 = {"button1Released", 0, 0 };
    static const QUMethod slot_4 = {"button2Pressed", 0, 0 };
    static const QUMethod slot_5 = {"button2Released", 0, 0 };
    static const QUMethod slot_6 = {"button3Pressed", 0, 0 };
    static const QUMethod slot_7 = {"button3Released", 0, 0 };
    static const QUMethod slot_8 = {"button4Pressed", 0, 0 };
    static const QUMethod slot_9 = {"button4Released", 0, 0 };
    static const QUMethod slot_10 = {"button5Pressed", 0, 0 };
    static const QUMethod slot_11 = {"button5Released", 0, 0 };
    static const QUMethod slot_12 = {"button6Pressed", 0, 0 };
    static const QUMethod slot_13 = {"button6Released", 0, 0 };
    static const QUMethod slot_14 = {"button7Pressed", 0, 0 };
    static const QUMethod slot_15 = {"button7Released", 0, 0 };
    static const QUMethod slot_16 = {"button8Pressed", 0, 0 };
    static const QUMethod slot_17 = {"button8Released", 0, 0 };
    static const QUMethod slot_18 = {"button9Pressed", 0, 0 };
    static const QUMethod slot_19 = {"button9Released", 0, 0 };
    static const QUMethod slot_20 = {"button0Pressed", 0, 0 };
    static const QUMethod slot_21 = {"button0Released", 0, 0 };
    static const QUMethod slot_22 = {"risuaitaPressed", 0, 0 };
    static const QUMethod slot_23 = {"risuaitaReleased", 0, 0 };
    static const QUMethod slot_24 = {"asteriskiPressed", 0, 0 };
    static const QUMethod slot_25 = {"asteriskiReleased", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "keyFuncQCheckBoxStateChanged(int)", &slot_0, QMetaData::Private },
	{ "outputLevelQCheckBoxStateChanged(int)", &slot_1, QMetaData::Private },
	{ "button1Pressed()", &slot_2, QMetaData::Private },
	{ "button1Released()", &slot_3, QMetaData::Private },
	{ "button2Pressed()", &slot_4, QMetaData::Private },
	{ "button2Released()", &slot_5, QMetaData::Private },
	{ "button3Pressed()", &slot_6, QMetaData::Private },
	{ "button3Released()", &slot_7, QMetaData::Private },
	{ "button4Pressed()", &slot_8, QMetaData::Private },
	{ "button4Released()", &slot_9, QMetaData::Private },
	{ "button5Pressed()", &slot_10, QMetaData::Private },
	{ "button5Released()", &slot_11, QMetaData::Private },
	{ "button6Pressed()", &slot_12, QMetaData::Private },
	{ "button6Released()", &slot_13, QMetaData::Private },
	{ "button7Pressed()", &slot_14, QMetaData::Private },
	{ "button7Released()", &slot_15, QMetaData::Private },
	{ "button8Pressed()", &slot_16, QMetaData::Private },
	{ "button8Released()", &slot_17, QMetaData::Private },
	{ "button9Pressed()", &slot_18, QMetaData::Private },
	{ "button9Released()", &slot_19, QMetaData::Private },
	{ "button0Pressed()", &slot_20, QMetaData::Private },
	{ "button0Released()", &slot_21, QMetaData::Private },
	{ "risuaitaPressed()", &slot_22, QMetaData::Private },
	{ "risuaitaReleased()", &slot_23, QMetaData::Private },
	{ "asteriskiPressed()", &slot_24, QMetaData::Private },
	{ "asteriskiReleased()", &slot_25, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Keypad12W", parentObject,
	slot_tbl, 26,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Keypad12W.setMetaObject( metaObj );
    return metaObj;
}

void* Keypad12W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Keypad12W" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool Keypad12W::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: keyFuncQCheckBoxStateChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: outputLevelQCheckBoxStateChanged((int)static_QUType_int.get(_o+1)); break;
    case 2: button1Pressed(); break;
    case 3: button1Released(); break;
    case 4: button2Pressed(); break;
    case 5: button2Released(); break;
    case 6: button3Pressed(); break;
    case 7: button3Released(); break;
    case 8: button4Pressed(); break;
    case 9: button4Released(); break;
    case 10: button5Pressed(); break;
    case 11: button5Released(); break;
    case 12: button6Pressed(); break;
    case 13: button6Released(); break;
    case 14: button7Pressed(); break;
    case 15: button7Released(); break;
    case 16: button8Pressed(); break;
    case 17: button8Released(); break;
    case 18: button9Pressed(); break;
    case 19: button9Released(); break;
    case 20: button0Pressed(); break;
    case 21: button0Released(); break;
    case 22: risuaitaPressed(); break;
    case 23: risuaitaReleased(); break;
    case 24: asteriskiPressed(); break;
    case 25: asteriskiReleased(); break;
    default:
	return ExternalComponentW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Keypad12W::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Keypad12W::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool Keypad12W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
