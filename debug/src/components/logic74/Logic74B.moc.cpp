/****************************************************************************
** Logic74BaseW meta object code from reading C++ file 'Logic74B.h'
**
** Created: Fri Dec 30 16:33:35 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../../src/components/logic74/Logic74B.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Logic74BaseW::className() const
{
    return "Logic74BaseW";
}

QMetaObject *Logic74BaseW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Logic74BaseW( "Logic74BaseW", &Logic74BaseW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Logic74BaseW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Logic74BaseW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Logic74BaseW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Logic74BaseW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Logic74BaseW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Logic74BaseW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Logic74BaseW.setMetaObject( metaObj );
    return metaObj;
}

void* Logic74BaseW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Logic74BaseW" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool Logic74BaseW::qt_invoke( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_invoke(_id,_o);
}

bool Logic74BaseW::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Logic74BaseW::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool Logic74BaseW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
