/****************************************************************************
** SFRBitW meta object code from reading C++ file 'SFRBitW.h'
**
** Created: Sun Jul 8 11:34:26 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SFRBitW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SFRBitW::className() const
{
    return "SFRBitW";
}

QMetaObject *SFRBitW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SFRBitW( "SFRBitW", &SFRBitW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SFRBitW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SFRBitW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SFRBitW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SFRBitW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SFRBitW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "mousePos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"sfrBitTableMouseDoubleClicked", 4, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "mousePos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_1 = {"sfrBitTableMouseClicked", 4, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "sfrBitTableMouseDoubleClicked(int,int,int,const QPoint&)", &slot_0, QMetaData::Private },
	{ "sfrBitTableMouseClicked(int,int,int,const QPoint&)", &slot_1, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"message_MemoryValueChanged", 3, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"message_ToggleBreakpointBit", 2, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "message_MemoryValueChanged(const QString&,const unsigned long,const int)", &signal_0, QMetaData::Protected },
	{ "message_ToggleBreakpointBit(const QString&,const int)", &signal_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"SFRBitW", parentObject,
	slot_tbl, 2,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SFRBitW.setMetaObject( metaObj );
    return metaObj;
}

void* SFRBitW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SFRBitW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message_MemoryValueChanged
void SFRBitW::message_MemoryValueChanged( const QString& t0, const unsigned long t1, const int t2 )
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

// SIGNAL message_ToggleBreakpointBit
void SFRBitW::message_ToggleBreakpointBit( const QString& t0, const int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

bool SFRBitW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: sfrBitTableMouseDoubleClicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+4))); break;
    case 1: sfrBitTableMouseClicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+4))); break;
    default:
	return ShareMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SFRBitW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message_MemoryValueChanged((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2))),(const int)static_QUType_int.get(_o+3)); break;
    case 1: message_ToggleBreakpointBit((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    default:
	return ShareMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SFRBitW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool SFRBitW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
