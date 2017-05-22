/****************************************************************************
** I51BaseInternalFLASHW meta object code from reading C++ file 'I51BaseInternalFLASHW.h'
**
** Created: Sun Jul 8 11:33:39 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "I51BaseInternalFLASHW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *I51BaseInternalFLASHW::className() const
{
    return "I51BaseInternalFLASHW";
}

QMetaObject *I51BaseInternalFLASHW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_I51BaseInternalFLASHW( "I51BaseInternalFLASHW", &I51BaseInternalFLASHW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString I51BaseInternalFLASHW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseInternalFLASHW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString I51BaseInternalFLASHW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseInternalFLASHW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* I51BaseInternalFLASHW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"I51BaseInternalFLASHW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_I51BaseInternalFLASHW.setMetaObject( metaObj );
    return metaObj;
}

void* I51BaseInternalFLASHW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "I51BaseInternalFLASHW" ) )
	return this;
    if ( !qstrcmp( clname, "I51BaseInternalROMW" ) )
	return (I51BaseInternalROMW*)this;
    return I51BaseW::qt_cast( clname );
}

bool I51BaseInternalFLASHW::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool I51BaseInternalFLASHW::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool I51BaseInternalFLASHW::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool I51BaseInternalFLASHW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
