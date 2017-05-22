/****************************************************************************
** I51BaseInternalIRAMW meta object code from reading C++ file 'I51BaseInternalIRAMW.h'
**
** Created: Sun Jul 8 11:33:28 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "I51BaseInternalIRAMW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *I51BaseInternalIRAMW::className() const
{
    return "I51BaseInternalIRAMW";
}

QMetaObject *I51BaseInternalIRAMW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_I51BaseInternalIRAMW( "I51BaseInternalIRAMW", &I51BaseInternalIRAMW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString I51BaseInternalIRAMW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseInternalIRAMW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString I51BaseInternalIRAMW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseInternalIRAMW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* I51BaseInternalIRAMW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"I51BaseInternalIRAMW", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_I51BaseInternalIRAMW.setMetaObject( metaObj );
    return metaObj;
}

void* I51BaseInternalIRAMW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "I51BaseInternalIRAMW" ) )
	return this;
    return I51BaseW::qt_cast( clname );
}

bool I51BaseInternalIRAMW::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool I51BaseInternalIRAMW::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool I51BaseInternalIRAMW::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool I51BaseInternalIRAMW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
