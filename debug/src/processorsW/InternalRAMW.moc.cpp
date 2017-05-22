/****************************************************************************
** InternalRAMW meta object code from reading C++ file 'InternalRAMW.h'
**
** Created: Fri Dec 30 16:40:50 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/processorsW/InternalRAMW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *InternalRAMW::className() const
{
    return "InternalRAMW";
}

QMetaObject *InternalRAMW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_InternalRAMW( "InternalRAMW", &InternalRAMW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString InternalRAMW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InternalRAMW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString InternalRAMW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "InternalRAMW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* InternalRAMW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"internalRAMTableValueChanged", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"internalRAMTableCurrentChanged", 2, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "internalRAMTableValueChanged(int,int)", &slot_0, QMetaData::Private },
	{ "internalRAMTableCurrentChanged(int,int)", &slot_1, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"message_MemoryValueChanged", 3, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "message_MemoryValueChanged(const QString&,const unsigned long,const int)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"InternalRAMW", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_InternalRAMW.setMetaObject( metaObj );
    return metaObj;
}

void* InternalRAMW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "InternalRAMW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message_MemoryValueChanged
void InternalRAMW::message_MemoryValueChanged( const QString& t0, const unsigned long t1, const int t2 )
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

bool InternalRAMW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: internalRAMTableValueChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: internalRAMTableCurrentChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return ShareMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool InternalRAMW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message_MemoryValueChanged((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2))),(const int)static_QUType_int.get(_o+3)); break;
    default:
	return ShareMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool InternalRAMW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool InternalRAMW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
