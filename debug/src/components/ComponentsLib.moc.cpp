/****************************************************************************
** ComponentsLib meta object code from reading C++ file 'ComponentsLib.h'
**
** Created: Fri Dec 30 16:34:42 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/components/ComponentsLib.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ComponentsLib::className() const
{
    return "ComponentsLib";
}

QMetaObject *ComponentsLib::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ComponentsLib( "ComponentsLib", &ComponentsLib::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ComponentsLib::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ComponentsLib", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ComponentsLib::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ComponentsLib", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ComponentsLib::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"addComponentFromGroup_Memory", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"addComponentFromGroup_Displays", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"addComponentFromGroup_KeysButtons", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"addComponentFromGroup_Logic74", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"addComponentFromGroup_LogicGALPAL", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"addComponentFromGroup_Misc", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"addComponentFromGroup_Instruments", 1, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "addComponentFromGroup_Memory(int)", &slot_0, QMetaData::Private },
	{ "addComponentFromGroup_Displays(int)", &slot_1, QMetaData::Private },
	{ "addComponentFromGroup_KeysButtons(int)", &slot_2, QMetaData::Private },
	{ "addComponentFromGroup_Logic74(int)", &slot_3, QMetaData::Private },
	{ "addComponentFromGroup_LogicGALPAL(int)", &slot_4, QMetaData::Private },
	{ "addComponentFromGroup_Misc(int)", &slot_5, QMetaData::Private },
	{ "addComponentFromGroup_Instruments(int)", &slot_6, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "ExternalComponentW", QUParameter::In }
    };
    static const QUMethod signal_0 = {"componentCreated", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "componentCreated(ExternalComponentW*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ComponentsLib", parentObject,
	slot_tbl, 7,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ComponentsLib.setMetaObject( metaObj );
    return metaObj;
}

void* ComponentsLib::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ComponentsLib" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL componentCreated
void ComponentsLib::componentCreated( ExternalComponentW* t0 )
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

bool ComponentsLib::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addComponentFromGroup_Memory((int)static_QUType_int.get(_o+1)); break;
    case 1: addComponentFromGroup_Displays((int)static_QUType_int.get(_o+1)); break;
    case 2: addComponentFromGroup_KeysButtons((int)static_QUType_int.get(_o+1)); break;
    case 3: addComponentFromGroup_Logic74((int)static_QUType_int.get(_o+1)); break;
    case 4: addComponentFromGroup_LogicGALPAL((int)static_QUType_int.get(_o+1)); break;
    case 5: addComponentFromGroup_Misc((int)static_QUType_int.get(_o+1)); break;
    case 6: addComponentFromGroup_Instruments((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ComponentsLib::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: componentCreated((ExternalComponentW*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ComponentsLib::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ComponentsLib::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
