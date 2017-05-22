/****************************************************************************
** AtmelT89C51RD2_32W meta object code from reading C++ file 'AtmelT89C51RD2_32W.h'
**
** Created: Sun Jul 8 11:28:01 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "AtmelT89C51RD2_32W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AtmelT89C51RD2_32W::className() const
{
    return "AtmelT89C51RD2_32W";
}

QMetaObject *AtmelT89C51RD2_32W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AtmelT89C51RD2_32W( "AtmelT89C51RD2_32W", &AtmelT89C51RD2_32W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AtmelT89C51RD2_32W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AtmelT89C51RD2_32W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AtmelT89C51RD2_32W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AtmelT89C51RD2_32W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AtmelT89C51RD2_32W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"AtmelT89C51RD2_32W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AtmelT89C51RD2_32W.setMetaObject( metaObj );
    return metaObj;
}

void* AtmelT89C51RD2_32W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AtmelT89C51RD2_32W" ) )
	return this;
    if ( !qstrcmp( clname, "I51BaseInternalFLASHW" ) )
	return (I51BaseInternalFLASHW*)this;
    if ( !qstrcmp( clname, "I51BaseInternalIRAMW" ) )
	return (I51BaseInternalIRAMW*)this;
    if ( !qstrcmp( clname, "I51BaseInternalXRAMW" ) )
	return (I51BaseInternalXRAMW*)this;
    if ( !qstrcmp( clname, "I51BaseTimer2W" ) )
	return (I51BaseTimer2W*)this;
    return I51BaseW::qt_cast( clname );
}

bool AtmelT89C51RD2_32W::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool AtmelT89C51RD2_32W::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AtmelT89C51RD2_32W::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool AtmelT89C51RD2_32W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
