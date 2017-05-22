/****************************************************************************
** ExternalW meta object code from reading C++ file 'ExternalW.h'
**
** Created: Sun Jul 8 11:34:35 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ExternalW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ExternalW::className() const
{
    return "ExternalW";
}

QMetaObject *ExternalW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ExternalW( "ExternalW", &ExternalW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ExternalW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ExternalW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ExternalW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ExternalW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ExternalW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = WorkspaceMainW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"ioPinsKListBoxDoubleClicked", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_1 = {"ioPinsKListBoxClicked", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_2 = {"portsKListBoxDoubleClicked", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_3 = {"portsKListBoxClicked", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_4 = {"netKListBoxDoubleClicked", 2, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_5 = {"netKListBoxMouseButtonClicked", 3, param_slot_5 };
    static const QUMethod slot_6 = {"showR0", 0, 0 };
    static const QUMethod slot_7 = {"showR1", 0, 0 };
    static const QUMethod slot_8 = {"showDPTR", 0, 0 };
    static const QUMethod slot_9 = {"hideShowToolsButtons", 0, 0 };
    static const QUMethod slot_10 = {"connectUnconnectPinsButtonPressed", 0, 0 };
    static const QUMethod slot_11 = {"showComponentChangesWhenRunningButtonPressed", 0, 0 };
    static const QUMethod slot_12 = {"showIOChangesWhenRunningButtonPressed", 0, 0 };
    static const QUMethod slot_13 = {"componentActivated", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_ptr, "ExternalComponentW", QUParameter::In }
    };
    static const QUMethod slot_14 = {"componentCreatedFromLibrary", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"messageFromComponent_Created", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"messageFromComponent_Destroyed", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "pinID", &static_QUType_int, 0, QUParameter::In },
	{ "pinName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"messageFromComponent_PinConnect", 3, param_slot_17 };
    static const QUParameter param_slot_18[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"messageFromComponent_PinUnconnect", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "pinID", &static_QUType_int, 0, QUParameter::In },
	{ "pinName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"messageFromComponent_PinConnected", 3, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "pinID", &static_QUType_int, 0, QUParameter::In },
	{ "pinName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_20 = {"messageFromComponent_PinUnconnected", 3, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "pinID", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_21 = {"messageFromComponent_PinCopy", 2, param_slot_21 };
    static const QUParameter param_slot_22[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "address", &static_QUType_ptr, "unsigned long", QUParameter::In },
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"messageFromComponent_MemoryValueChanged", 3, param_slot_22 };
    static const QUParameter param_slot_23[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "address", &static_QUType_ptr, "unsigned long", QUParameter::In }
    };
    static const QUMethod slot_23 = {"messageFromComponent_FocusProgramMemoryAddress", 2, param_slot_23 };
    static const QMetaData slot_tbl[] = {
	{ "ioPinsKListBoxDoubleClicked(QListBoxItem*,const QPoint&)", &slot_0, QMetaData::Private },
	{ "ioPinsKListBoxClicked(QListBoxItem*,const QPoint&)", &slot_1, QMetaData::Private },
	{ "portsKListBoxDoubleClicked(QListBoxItem*,const QPoint&)", &slot_2, QMetaData::Private },
	{ "portsKListBoxClicked(QListBoxItem*,const QPoint&)", &slot_3, QMetaData::Private },
	{ "netKListBoxDoubleClicked(QListBoxItem*,const QPoint&)", &slot_4, QMetaData::Private },
	{ "netKListBoxMouseButtonClicked(int,QListBoxItem*,const QPoint&)", &slot_5, QMetaData::Private },
	{ "showR0()", &slot_6, QMetaData::Private },
	{ "showR1()", &slot_7, QMetaData::Private },
	{ "showDPTR()", &slot_8, QMetaData::Private },
	{ "hideShowToolsButtons()", &slot_9, QMetaData::Private },
	{ "connectUnconnectPinsButtonPressed()", &slot_10, QMetaData::Private },
	{ "showComponentChangesWhenRunningButtonPressed()", &slot_11, QMetaData::Private },
	{ "showIOChangesWhenRunningButtonPressed()", &slot_12, QMetaData::Private },
	{ "componentActivated()", &slot_13, QMetaData::Private },
	{ "componentCreatedFromLibrary(ExternalComponentW*)", &slot_14, QMetaData::Private },
	{ "messageFromComponent_Created(const QString&)", &slot_15, QMetaData::Private },
	{ "messageFromComponent_Destroyed(const QString&)", &slot_16, QMetaData::Private },
	{ "messageFromComponent_PinConnect(const QString&,const int,const QString&)", &slot_17, QMetaData::Private },
	{ "messageFromComponent_PinUnconnect(const QString&)", &slot_18, QMetaData::Private },
	{ "messageFromComponent_PinConnected(const QString&,const int,const QString&)", &slot_19, QMetaData::Private },
	{ "messageFromComponent_PinUnconnected(const QString&,const int,const QString&)", &slot_20, QMetaData::Private },
	{ "messageFromComponent_PinCopy(const QString&,const int)", &slot_21, QMetaData::Private },
	{ "messageFromComponent_MemoryValueChanged(const QString&,const unsigned long,const int)", &slot_22, QMetaData::Private },
	{ "messageFromComponent_FocusProgramMemoryAddress(const QString&,const unsigned long)", &slot_23, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"message_MemoryValueChanged", 3, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"message_ToggleBit", 3, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"message_WindowLevel", 2, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In }
    };
    static const QUMethod signal_3 = {"message_FocusProgramMemoryAddress", 2, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"message_Update", 1, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "message_MemoryValueChanged(const QString&,const unsigned long,const int)", &signal_0, QMetaData::Protected },
	{ "message_ToggleBit(const QString&,const QString&,const int)", &signal_1, QMetaData::Protected },
	{ "message_WindowLevel(const QString&,const int)", &signal_2, QMetaData::Protected },
	{ "message_FocusProgramMemoryAddress(const QString&,const unsigned long)", &signal_3, QMetaData::Protected },
	{ "message_Update(const QString&)", &signal_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ExternalW", parentObject,
	slot_tbl, 24,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ExternalW.setMetaObject( metaObj );
    return metaObj;
}

void* ExternalW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ExternalW" ) )
	return this;
    return WorkspaceMainW::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message_MemoryValueChanged
void ExternalW::message_MemoryValueChanged( const QString& t0, const unsigned long t1, const int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL message_ToggleBit
void ExternalW::message_ToggleBit( const QString& t0, const QString& t1, const int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL message_WindowLevel
void ExternalW::message_WindowLevel( const QString& t0, const int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL message_FocusProgramMemoryAddress
void ExternalW::message_FocusProgramMemoryAddress( const QString& t0, const unsigned long t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL message_Update
void ExternalW::message_Update( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 4, t0 );
}

bool ExternalW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: ioPinsKListBoxDoubleClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 1: ioPinsKListBoxClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 2: portsKListBoxDoubleClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 3: portsKListBoxClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 4: netKListBoxDoubleClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 5: netKListBoxMouseButtonClicked((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 6: showR0(); break;
    case 7: showR1(); break;
    case 8: showDPTR(); break;
    case 9: hideShowToolsButtons(); break;
    case 10: connectUnconnectPinsButtonPressed(); break;
    case 11: showComponentChangesWhenRunningButtonPressed(); break;
    case 12: showIOChangesWhenRunningButtonPressed(); break;
    case 13: componentActivated(); break;
    case 14: componentCreatedFromLibrary((ExternalComponentW*)static_QUType_ptr.get(_o+1)); break;
    case 15: messageFromComponent_Created((const QString&)static_QUType_QString.get(_o+1)); break;
    case 16: messageFromComponent_Destroyed((const QString&)static_QUType_QString.get(_o+1)); break;
    case 17: messageFromComponent_PinConnect((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 18: messageFromComponent_PinUnconnect((const QString&)static_QUType_QString.get(_o+1)); break;
    case 19: messageFromComponent_PinConnected((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 20: messageFromComponent_PinUnconnected((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 21: messageFromComponent_PinCopy((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    case 22: messageFromComponent_MemoryValueChanged((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2))),(const int)static_QUType_int.get(_o+3)); break;
    case 23: messageFromComponent_FocusProgramMemoryAddress((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2)))); break;
    default:
	return WorkspaceMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ExternalW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message_MemoryValueChanged((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2))),(const int)static_QUType_int.get(_o+3)); break;
    case 1: message_ToggleBit((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const int)static_QUType_int.get(_o+3)); break;
    case 2: message_WindowLevel((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    case 3: message_FocusProgramMemoryAddress((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2)))); break;
    case 4: message_Update((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return WorkspaceMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ExternalW::qt_property( int id, int f, QVariant* v)
{
    return WorkspaceMainW::qt_property( id, f, v);
}

bool ExternalW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
