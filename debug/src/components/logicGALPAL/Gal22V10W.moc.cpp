/****************************************************************************
** Gal22V10W meta object code from reading C++ file 'Gal22V10W.h'
**
** Created: Fri Dec 30 16:34:05 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../../src/components/logicGALPAL/Gal22V10W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Gal22V10W::className() const
{
    return "Gal22V10W";
}

QMetaObject *Gal22V10W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Gal22V10W( "Gal22V10W", &Gal22V10W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Gal22V10W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Gal22V10W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Gal22V10W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Gal22V10W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Gal22V10W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ExternalComponentW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Gal22V10W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Gal22V10W.setMetaObject( metaObj );
    return metaObj;
}

void* Gal22V10W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Gal22V10W" ) )
	return this;
    return ExternalComponentW::qt_cast( clname );
}

bool Gal22V10W::qt_invoke( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_invoke(_id,_o);
}

bool Gal22V10W::qt_emit( int _id, QUObject* _o )
{
    return ExternalComponentW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Gal22V10W::qt_property( int id, int f, QVariant* v)
{
    return ExternalComponentW::qt_property( id, f, v);
}

bool Gal22V10W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
