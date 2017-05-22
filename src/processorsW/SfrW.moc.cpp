/****************************************************************************
** SfrW meta object code from reading C++ file 'SfrW.h'
**
** Created: Sun Jul 8 11:33:13 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "SfrW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SfrW::className() const
{
    return "SfrW";
}

QMetaObject *SfrW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SfrW( "SfrW", &SfrW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SfrW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SfrW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SfrW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SfrW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SfrW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"SfrW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SfrW.setMetaObject( metaObj );
    return metaObj;
}

void* SfrW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SfrW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

bool SfrW::qt_invoke( int _id, QUObject* _o )
{
    return ShareMainW::qt_invoke(_id,_o);
}

bool SfrW::qt_emit( int _id, QUObject* _o )
{
    return ShareMainW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SfrW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool SfrW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
