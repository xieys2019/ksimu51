/****************************************************************************
** IndexedKDoubleNumInput meta object code from reading C++ file 'IndexedKDoubleNumInput.h'
**
** Created: Fri Dec 30 16:30:59 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/share/IndexedKDoubleNumInput.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IndexedKDoubleNumInput::className() const
{
    return "IndexedKDoubleNumInput";
}

QMetaObject *IndexedKDoubleNumInput::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IndexedKDoubleNumInput( "IndexedKDoubleNumInput", &IndexedKDoubleNumInput::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IndexedKDoubleNumInput::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IndexedKDoubleNumInput", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IndexedKDoubleNumInput::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IndexedKDoubleNumInput", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IndexedKDoubleNumInput::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KDoubleNumInput::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slotValueIsChanged", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "slotValueIsChanged(double)", &slot_0, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::InOut },
	{ 0, &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueIsChanged", 3, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "valueIsChanged(int,QString&,double)", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"IndexedKDoubleNumInput", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IndexedKDoubleNumInput.setMetaObject( metaObj );
    return metaObj;
}

void* IndexedKDoubleNumInput::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IndexedKDoubleNumInput" ) )
	return this;
    return KDoubleNumInput::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL valueIsChanged
void IndexedKDoubleNumInput::valueIsChanged( int t0, QString& t1, double t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_double.set(o+3,t2);
    activate_signal( clist, o );
    t1 = static_QUType_QString.get(o+2);
}

bool IndexedKDoubleNumInput::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotValueIsChanged((double)static_QUType_double.get(_o+1)); break;
    default:
	return KDoubleNumInput::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool IndexedKDoubleNumInput::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueIsChanged((int)static_QUType_int.get(_o+1),(QString&)static_QUType_QString.get(_o+2),(double)static_QUType_double.get(_o+3)); break;
    default:
	return KDoubleNumInput::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool IndexedKDoubleNumInput::qt_property( int id, int f, QVariant* v)
{
    return KDoubleNumInput::qt_property( id, f, v);
}

bool IndexedKDoubleNumInput::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
