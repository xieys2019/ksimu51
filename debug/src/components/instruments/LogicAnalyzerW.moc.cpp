/****************************************************************************
** LeftRightClickableKPushButton meta object code from reading C++ file 'LogicAnalyzerW.h'
**
** Created: Fri Dec 30 16:32:02 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../../src/components/instruments/LogicAnalyzerW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *LeftRightClickableKPushButton::className() const
{
    return "LeftRightClickableKPushButton";
}

QMetaObject *LeftRightClickableKPushButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LeftRightClickableKPushButton( "LeftRightClickableKPushButton", &LeftRightClickableKPushButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LeftRightClickableKPushButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LeftRightClickableKPushButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LeftRightClickableKPushButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LeftRightClickableKPushButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LeftRightClickableKPushButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KPushButton::staticMetaObject();
    static const QUMethod signal_0 = {"rightButtonClicked", 0, 0 };
    static const QUMethod signal_1 = {"leftButtonClicked", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "rightButtonClicked()", &signal_0, QMetaData::Protected },
	{ "leftButtonClicked()", &signal_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"LeftRightClickableKPushButton", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LeftRightClickableKPushButton.setMetaObject( metaObj );
    return metaObj;
}

void* LeftRightClickableKPushButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LeftRightClickableKPushButton" ) )
	return this;
    return KPushButton::qt_cast( clname );
}

// SIGNAL rightButtonClicked
void LeftRightClickableKPushButton::rightButtonClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL leftButtonClicked
void LeftRightClickableKPushButton::leftButtonClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool LeftRightClickableKPushButton::qt_invoke( int _id, QUObject* _o )
{
    return KPushButton::qt_invoke(_id,_o);
}

bool LeftRightClickableKPushButton::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: rightButtonClicked(); break;
    case 1: leftButtonClicked(); break;
    default:
	return KPushButton::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool LeftRightClickableKPushButton::qt_property( int id, int f, QVariant* v)
{
    return KPushButton::qt_property( id, f, v);
}

bool LeftRightClickableKPushButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *LogicAnalyzerW::className() const
{
    return "LogicAnalyzerW";
}

QMetaObject *LogicAnalyzerW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LogicAnalyzerW( "LogicAnalyzerW", &LogicAnalyzerW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LogicAnalyzerW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LogicAnalyzerW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LogicAnalyzerW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LogicAnalyzerW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LogicAnalyzerW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    static const QUMethod slot_0 = {"inputPinKListBoxSelectionChanged", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_1 = {"inputPinKListBoxClicked", 1, param_slot_1 };
    static const QUMethod slot_2 = {"analyzerViewQListBoxSelectionChanged", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pnt", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_3 = {"analyzerViewQListBoxClicked", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pnt", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_4 = {"analyzerViewQListBoxRightButtonClicked", 2, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"progarmCounterValuesKListBoxPressed", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "point", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_6 = {"progarmCounterValuesKListBoxRightButtonPressed", 2, param_slot_6 };
    static const QUMethod slot_7 = {"clearAndSetKPushButtonClicked", 0, 0 };
    static const QUMethod slot_8 = {"setRasterOnOffKPushButtonClicked", 0, 0 };
    static const QUMethod slot_9 = {"onOffKPushButtonClicked", 0, 0 };
    static const QUMethod slot_10 = {"multiplierDecadeLeftRightClickableKPushButtonLeftButtonClicked", 0, 0 };
    static const QUMethod slot_11 = {"multiplierDecadeLeftRightClickableKPushButtonRightButtonClicked", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_12 = {"analyzerViewQListBoxOnItem", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"timeAxelQSliderValueChanged", 1, param_slot_13 };
    static const QUMethod slot_14 = {"hScrollBSliderReleased", 0, 0 };
    static const QUMethod slot_15 = {"hScrollBSliderSliderPageMoved", 0, 0 };
    static const QUMethod slot_16 = {"updateAnalyzerViewQListBoxTimer_timeout", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "inputPinKListBoxSelectionChanged()", &slot_0, QMetaData::Private },
	{ "inputPinKListBoxClicked(QListBoxItem*)", &slot_1, QMetaData::Private },
	{ "analyzerViewQListBoxSelectionChanged()", &slot_2, QMetaData::Private },
	{ "analyzerViewQListBoxClicked(QListBoxItem*,const QPoint&)", &slot_3, QMetaData::Private },
	{ "analyzerViewQListBoxRightButtonClicked(QListBoxItem*,const QPoint&)", &slot_4, QMetaData::Private },
	{ "progarmCounterValuesKListBoxPressed(QListBoxItem*)", &slot_5, QMetaData::Private },
	{ "progarmCounterValuesKListBoxRightButtonPressed(QListBoxItem*,const QPoint&)", &slot_6, QMetaData::Private },
	{ "clearAndSetKPushButtonClicked()", &slot_7, QMetaData::Private },
	{ "setRasterOnOffKPushButtonClicked()", &slot_8, QMetaData::Private },
	{ "onOffKPushButtonClicked()", &slot_9, QMetaData::Private },
	{ "multiplierDecadeLeftRightClickableKPushButtonLeftButtonClicked()", &slot_10, QMetaData::Private },
	{ "multiplierDecadeLeftRightClickableKPushButtonRightButtonClicked()", &slot_11, QMetaData::Private },
	{ "analyzerViewQListBoxOnItem(QListBoxItem*)", &slot_12, QMetaData::Private },
	{ "timeAxelQSliderValueChanged(int)", &slot_13, QMetaData::Private },
	{ "hScrollBSliderReleased()", &slot_14, QMetaData::Private },
	{ "hScrollBSliderSliderPageMoved()", &slot_15, QMetaData::Private },
	{ "updateAnalyzerViewQListBoxTimer_timeout()", &slot_16, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"LogicAnalyzerW", parentObject,
	slot_tbl, 17,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LogicAnalyzerW.setMetaObject( metaObj );
    return metaObj;
}

void* LogicAnalyzerW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LogicAnalyzerW" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool LogicAnalyzerW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: inputPinKListBoxSelectionChanged(); break;
    case 1: inputPinKListBoxClicked((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 2: analyzerViewQListBoxSelectionChanged(); break;
    case 3: analyzerViewQListBoxClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 4: analyzerViewQListBoxRightButtonClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 5: progarmCounterValuesKListBoxPressed((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: progarmCounterValuesKListBoxRightButtonPressed((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 7: clearAndSetKPushButtonClicked(); break;
    case 8: setRasterOnOffKPushButtonClicked(); break;
    case 9: onOffKPushButtonClicked(); break;
    case 10: multiplierDecadeLeftRightClickableKPushButtonLeftButtonClicked(); break;
    case 11: multiplierDecadeLeftRightClickableKPushButtonRightButtonClicked(); break;
    case 12: analyzerViewQListBoxOnItem((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 13: timeAxelQSliderValueChanged((int)static_QUType_int.get(_o+1)); break;
    case 14: hScrollBSliderReleased(); break;
    case 15: hScrollBSliderSliderPageMoved(); break;
    case 16: updateAnalyzerViewQListBoxTimer_timeout(); break;
    default:
	return ExternalComponentW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool LogicAnalyzerW::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool LogicAnalyzerW::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool LogicAnalyzerW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
