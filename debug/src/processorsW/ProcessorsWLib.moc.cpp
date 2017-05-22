/****************************************************************************
** ProcessorsWLib meta object code from reading C++ file 'ProcessorsWLib.h'
**
** Created: Fri Dec 30 16:40:09 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/processorsW/ProcessorsWLib.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ProcessorsWLib::className() const
{
    return "ProcessorsWLib";
}

QMetaObject *ProcessorsWLib::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ProcessorsWLib( "ProcessorsWLib", &ProcessorsWLib::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ProcessorsWLib::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessorsWLib", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ProcessorsWLib::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProcessorsWLib", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ProcessorsWLib::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"addProcessorFromGroup_Intel", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"addProcessorFromGroup_Atmel", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"addProcessorFromGroup_Maxim", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"addProcessorFromGroup_Philips", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"addProcessorFromGroup_TexasInstruments", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "addProcessorFromGroup_Intel(int)", &slot_0, QMetaData::Private },
	{ "addProcessorFromGroup_Atmel(int)", &slot_1, QMetaData::Private },
	{ "addProcessorFromGroup_Maxim(int)", &slot_2, QMetaData::Private },
	{ "addProcessorFromGroup_Philips(int)", &slot_3, QMetaData::Private },
	{ "addProcessorFromGroup_TexasInstruments(int)", &slot_4, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "I51BaseW", QUParameter::In }
    };
    static const QUMethod signal_0 = {"processorCreated", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "processorCreated(I51BaseW*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ProcessorsWLib", parentObject,
	slot_tbl, 5,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ProcessorsWLib.setMetaObject( metaObj );
    return metaObj;
}

void* ProcessorsWLib::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ProcessorsWLib" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL processorCreated
void ProcessorsWLib::processorCreated( I51BaseW* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool ProcessorsWLib::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addProcessorFromGroup_Intel((int)static_QUType_int.get(_o+1)); break;
    case 1: addProcessorFromGroup_Atmel((int)static_QUType_int.get(_o+1)); break;
    case 2: addProcessorFromGroup_Maxim((int)static_QUType_int.get(_o+1)); break;
    case 3: addProcessorFromGroup_Philips((int)static_QUType_int.get(_o+1)); break;
    case 4: addProcessorFromGroup_TexasInstruments((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ProcessorsWLib::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: processorCreated((I51BaseW*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ProcessorsWLib::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ProcessorsWLib::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
