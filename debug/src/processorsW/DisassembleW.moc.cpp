/****************************************************************************
** DisassembleW meta object code from reading C++ file 'DisassembleW.h'
**
** Created: Fri Dec 30 16:40:36 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/processorsW/DisassembleW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DisassembleW::className() const
{
    return "DisassembleW";
}

QMetaObject *DisassembleW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DisassembleW( "DisassembleW", &DisassembleW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DisassembleW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DisassembleW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DisassembleW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DisassembleW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DisassembleW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "p", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"disassembleKListBoxRightButtonClicked", 2, param_slot_0 };
    static const QUMethod slot_1 = {"toggleBreakpointActivated", 0, 0 };
    static const QUMethod slot_2 = {"removeBreakpointsActivated", 0, 0 };
    static const QUMethod slot_3 = {"executionPointActivated", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "disassembleKListBoxRightButtonClicked(QListBoxItem*,const QPoint&)", &slot_0, QMetaData::Private },
	{ "toggleBreakpointActivated()", &slot_1, QMetaData::Private },
	{ "removeBreakpointsActivated()", &slot_2, QMetaData::Private },
	{ "executionPointActivated()", &slot_3, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In }
    };
    static const QUMethod signal_0 = {"message_SetExecutionPoint", 2, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "message_SetExecutionPoint(const QString&,const unsigned long)", &signal_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"DisassembleW", parentObject,
	slot_tbl, 4,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DisassembleW.setMetaObject( metaObj );
    return metaObj;
}

void* DisassembleW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DisassembleW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message_SetExecutionPoint
void DisassembleW::message_SetExecutionPoint( const QString& t0, const unsigned long t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

bool DisassembleW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: disassembleKListBoxRightButtonClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 1: toggleBreakpointActivated(); break;
    case 2: removeBreakpointsActivated(); break;
    case 3: executionPointActivated(); break;
    default:
	return ShareMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DisassembleW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message_SetExecutionPoint((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2)))); break;
    default:
	return ShareMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool DisassembleW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool DisassembleW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
