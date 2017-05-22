/****************************************************************************
** RomW meta object code from reading C++ file 'RomW.h'
**
** Created: Sun Jul 8 11:33:24 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "RomW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *RomW::className() const
{
    return "RomW";
}

QMetaObject *RomW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_RomW( "RomW", &RomW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString RomW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RomW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString RomW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RomW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* RomW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"RomW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_RomW.setMetaObject( metaObj );
    return metaObj;
}

void* RomW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "RomW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

bool RomW::qt_invoke( int _id, QUObject* _o )
{
    return ShareMainW::qt_invoke(_id,_o);
}

bool RomW::qt_emit( int _id, QUObject* _o )
{
    return ShareMainW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool RomW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool RomW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
