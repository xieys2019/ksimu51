/****************************************************************************
** I51BaseW meta object code from reading C++ file 'I51BaseW.h'
**
** Created: Sun Jul 8 11:34:00 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "I51BaseW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *I51BaseW::className() const
{
    return "I51BaseW";
}

QMetaObject *I51BaseW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_I51BaseW( "I51BaseW", &I51BaseW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString I51BaseW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString I51BaseW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* I51BaseW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = WorkspaceMainW::staticMetaObject();
    static const QUMethod slot_0 = {"childWindowActivated", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "address", &static_QUType_ptr, "unsigned long", QUParameter::In }
    };
    static const QUMethod slot_1 = {"messageFromWorkspaceW_SetExecutionPoint", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "address", &static_QUType_ptr, "unsigned long", QUParameter::In },
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"messageFromWorkspaceW_MemoryValueChanged", 3, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "index", &static_QUType_ptr, "unsigned long", QUParameter::In },
	{ "value", &static_QUType_ptr, "long", QUParameter::In }
    };
    static const QUMethod slot_3 = {"messageFromWorkspaceW_ValueChanged", 3, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "messageString", &static_QUType_QString, 0, QUParameter::In },
	{ "messageValue", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"messageFromWorkspaceW_ToggleBit", 3, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "messageValue", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"messageFromWorkspaceW_ToggleBreakpointBit", 2, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"messageFromWorkspaceW_Update", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "address", &static_QUType_ptr, "unsigned long", QUParameter::In }
    };
    static const QUMethod slot_7 = {"messageFromWorkspaceW_FocusProgramMemoryAddress", 2, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In },
	{ "level", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"messageFromWorkspaceW_WindowLevel", 2, param_slot_8 };
    static const QMetaData slot_tbl[] = {
	{ "childWindowActivated()", &slot_0, QMetaData::Private },
	{ "messageFromWorkspaceW_SetExecutionPoint(const QString&,const unsigned long)", &slot_1, QMetaData::Private },
	{ "messageFromWorkspaceW_MemoryValueChanged(const QString&,const unsigned long,const int)", &slot_2, QMetaData::Private },
	{ "messageFromWorkspaceW_ValueChanged(const QString&,const unsigned long,const long)", &slot_3, QMetaData::Private },
	{ "messageFromWorkspaceW_ToggleBit(const QString&,const QString&,const int)", &slot_4, QMetaData::Private },
	{ "messageFromWorkspaceW_ToggleBreakpointBit(const QString&,const int)", &slot_5, QMetaData::Private },
	{ "messageFromWorkspaceW_Update(const QString&)", &slot_6, QMetaData::Private },
	{ "messageFromWorkspaceW_FocusProgramMemoryAddress(const QString&,const unsigned long)", &slot_7, QMetaData::Private },
	{ "messageFromWorkspaceW_WindowLevel(const QString&,const int)", &slot_8, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned int", QUParameter::In }
    };
    static const QUMethod signal_0 = {"message_SetStatusBar", 3, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"message_Close", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"message_SetWindowLevel", 2, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "message_SetStatusBar(const int,const QString&,const unsigned int)", &signal_0, QMetaData::Protected },
	{ "message_Close(const int)", &signal_1, QMetaData::Protected },
	{ "message_SetWindowLevel(const int,const int)", &signal_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"I51BaseW", parentObject,
	slot_tbl, 9,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_I51BaseW.setMetaObject( metaObj );
    return metaObj;
}

void* I51BaseW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "I51BaseW" ) )
	return this;
    return WorkspaceMainW::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message_SetStatusBar
void I51BaseW::message_SetStatusBar( const int t0, const QString& t1, const unsigned int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_ptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL message_Close
void I51BaseW::message_Close( const int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL message_SetWindowLevel
void I51BaseW::message_SetWindowLevel( const int t0, const int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

bool I51BaseW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: childWindowActivated(); break;
    case 1: messageFromWorkspaceW_SetExecutionPoint((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2)))); break;
    case 2: messageFromWorkspaceW_MemoryValueChanged((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2))),(const int)static_QUType_int.get(_o+3)); break;
    case 3: messageFromWorkspaceW_ValueChanged((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2))),(const long)(*((const long*)static_QUType_ptr.get(_o+3)))); break;
    case 4: messageFromWorkspaceW_ToggleBit((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const int)static_QUType_int.get(_o+3)); break;
    case 5: messageFromWorkspaceW_ToggleBreakpointBit((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    case 6: messageFromWorkspaceW_Update((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: messageFromWorkspaceW_FocusProgramMemoryAddress((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2)))); break;
    case 8: messageFromWorkspaceW_WindowLevel((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    default:
	return WorkspaceMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool I51BaseW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message_SetStatusBar((const int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const unsigned int)(*((const unsigned int*)static_QUType_ptr.get(_o+3)))); break;
    case 1: message_Close((const int)static_QUType_int.get(_o+1)); break;
    case 2: message_SetWindowLevel((const int)static_QUType_int.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    default:
	return WorkspaceMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool I51BaseW::qt_property( int id, int f, QVariant* v)
{
    return WorkspaceMainW::qt_property( id, f, v);
}

bool I51BaseW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
