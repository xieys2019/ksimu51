/****************************************************************************
** Latch8W meta object code from reading C++ file 'Latch8W.h'
**
** Created: Sun Jul 8 11:24:29 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "Latch8W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Latch8W::className() const
{
    return "Latch8W";
}

QMetaObject *Latch8W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Latch8W( "Latch8W", &Latch8W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Latch8W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Latch8W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Latch8W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Latch8W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Latch8W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Logic74BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Latch8W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Latch8W.setMetaObject( metaObj );
    return metaObj;
}

void* Latch8W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Latch8W" ) )
	return this;
    return Logic74BaseW::qt_cast( clname );
}

bool Latch8W::qt_invoke( int _id, QUObject* _o )
{
    return Logic74BaseW::qt_invoke(_id,_o);
}

bool Latch8W::qt_emit( int _id, QUObject* _o )
{
    return Logic74BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Latch8W::qt_property( int id, int f, QVariant* v)
{
    return Logic74BaseW::qt_property( id, f, v);
}

bool Latch8W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
