/****************************************************************************
** ShareMainW meta object code from reading C++ file 'ShareMainW.h'
**
** Created: Fri Dec 30 16:31:00 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/share/ShareMainW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ShareMainW::className() const
{
    return "ShareMainW";
}

QMetaObject *ShareMainW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ShareMainW( "ShareMainW", &ShareMainW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ShareMainW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ShareMainW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ShareMainW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ShareMainW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ShareMainW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = KMainWindow::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"ShareMainW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ShareMainW.setMetaObject( metaObj );
    return metaObj;
}

void* ShareMainW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ShareMainW" ) )
	return this;
    return KMainWindow::qt_cast( clname );
}

bool ShareMainW::qt_invoke( int _id, QUObject* _o )
{
    return KMainWindow::qt_invoke(_id,_o);
}

bool ShareMainW::qt_emit( int _id, QUObject* _o )
{
    return KMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ShareMainW::qt_property( int id, int f, QVariant* v)
{
    return KMainWindow::qt_property( id, f, v);
}

bool ShareMainW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
