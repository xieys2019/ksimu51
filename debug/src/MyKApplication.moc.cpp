/****************************************************************************
** MyKApplication meta object code from reading C++ file 'MyKApplication.h'
**
** Created: Fri Dec 30 16:41:56 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../src/MyKApplication.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MyKApplication::className() const
{
    return "MyKApplication";
}

QMetaObject *MyKApplication::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MyKApplication( "MyKApplication", &MyKApplication::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MyKApplication::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyKApplication", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MyKApplication::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyKApplication", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MyKApplication::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KApplication::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_0 = {"x11LeftMouseButtonPressed", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "x11LeftMouseButtonPressed(QPoint*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MyKApplication", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MyKApplication.setMetaObject( metaObj );
    return metaObj;
}

void* MyKApplication::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MyKApplication" ) )
	return this;
    return KApplication::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL x11LeftMouseButtonPressed
void MyKApplication::x11LeftMouseButtonPressed( QPoint* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool MyKApplication::qt_invoke( int _id, QUObject* _o )
{
    return KApplication::qt_invoke(_id,_o);
}

bool MyKApplication::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: x11LeftMouseButtonPressed((QPoint*)static_QUType_varptr.get(_o+1)); break;
    default:
	return KApplication::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MyKApplication::qt_property( int id, int f, QVariant* v)
{
    return KApplication::qt_property( id, f, v);
}

bool MyKApplication::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
