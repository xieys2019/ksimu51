/****************************************************************************
** ExternalComponentW meta object code from reading C++ file 'ExternalComponentW.h'
**
** Created: Sun Jul 8 11:26:05 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ExternalComponentW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ExternalComponentW::className() const
{
    return "ExternalComponentW";
}

QMetaObject *ExternalComponentW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ExternalComponentW( "ExternalComponentW", &ExternalComponentW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ExternalComponentW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ExternalComponentW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ExternalComponentW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ExternalComponentW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ExternalComponentW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"inputPinListMouseButtonClicked", 3, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_1 = {"outputPinListMouseButtonClicked", 3, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_2 = {"bidirPinListMouseButtonClickedInLeftKToolBar", 3, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_3 = {"bidirPinListMouseButtonClickedInRightKToolBar", 3, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"delayTimeValueChanged", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "inputPinListMouseButtonClicked(int,QListBoxItem*,const QPoint&)", &slot_0, QMetaData::Private },
	{ "outputPinListMouseButtonClicked(int,QListBoxItem*,const QPoint&)", &slot_1, QMetaData::Private },
	{ "bidirPinListMouseButtonClickedInLeftKToolBar(int,QListBoxItem*,const QPoint&)", &slot_2, QMetaData::Private },
	{ "bidirPinListMouseButtonClickedInRightKToolBar(int,QListBoxItem*,const QPoint&)", &slot_3, QMetaData::Private },
	{ "delayTimeValueChanged(double)", &slot_4, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"message_Created", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"message_Destroyed", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"message_PinConnect", 3, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"message_PinUnconnect", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"message_PinConnected", 3, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"message_PinUnconnected", 3, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"message_PinCopy", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"message_MemoryValueChanged", 3, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In }
    };
    static const QUMethod signal_8 = {"message_FocusProgramMemoryAddress", 2, param_signal_8 };
    static const QMetaData signal_tbl[] = {
	{ "message_Created(const QString&)", &signal_0, QMetaData::Protected },
	{ "message_Destroyed(const QString&)", &signal_1, QMetaData::Protected },
	{ "message_PinConnect(const QString&,const int,const QString&)", &signal_2, QMetaData::Protected },
	{ "message_PinUnconnect(const QString&)", &signal_3, QMetaData::Protected },
	{ "message_PinConnected(const QString&,const int,const QString&)", &signal_4, QMetaData::Protected },
	{ "message_PinUnconnected(const QString&,const int,const QString&)", &signal_5, QMetaData::Protected },
	{ "message_PinCopy(const QString&,const int)", &signal_6, QMetaData::Protected },
	{ "message_MemoryValueChanged(const QString&,const unsigned long,const int)", &signal_7, QMetaData::Protected },
	{ "message_FocusProgramMemoryAddress(const QString&,const unsigned long)", &signal_8, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ExternalComponentW", parentObject,
	slot_tbl, 5,
	signal_tbl, 9,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ExternalComponentW.setMetaObject( metaObj );
    return metaObj;
}

void* ExternalComponentW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ExternalComponentW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

// SIGNAL message_Created
void ExternalComponentW::message_Created( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL message_Destroyed
void ExternalComponentW::message_Destroyed( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message_PinConnect
void ExternalComponentW::message_PinConnect( const QString& t0, const int t1, const QString& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL message_PinUnconnect
void ExternalComponentW::message_PinUnconnect( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL message_PinConnected
void ExternalComponentW::message_PinConnected( const QString& t0, const int t1, const QString& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL message_PinUnconnected
void ExternalComponentW::message_PinUnconnected( const QString& t0, const int t1, const QString& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL message_PinCopy
void ExternalComponentW::message_PinCopy( const QString& t0, const int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL message_MemoryValueChanged
void ExternalComponentW::message_MemoryValueChanged( const QString& t0, const unsigned long t1, const int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL message_FocusProgramMemoryAddress
void ExternalComponentW::message_FocusProgramMemoryAddress( const QString& t0, const unsigned long t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

bool ExternalComponentW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: inputPinListMouseButtonClicked((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 1: outputPinListMouseButtonClicked((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 2: bidirPinListMouseButtonClickedInLeftKToolBar((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 3: bidirPinListMouseButtonClickedInRightKToolBar((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 4: delayTimeValueChanged((double)static_QUType_double.get(_o+1)); break;
    default:
	return ShareMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ExternalComponentW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message_Created((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: message_Destroyed((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: message_PinConnect((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 3: message_PinUnconnect((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: message_PinConnected((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 5: message_PinUnconnected((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 6: message_PinCopy((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    case 7: message_MemoryValueChanged((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2))),(const int)static_QUType_int.get(_o+3)); break;
    case 8: message_FocusProgramMemoryAddress((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2)))); break;
    default:
	return ShareMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ExternalComponentW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool ExternalComponentW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
