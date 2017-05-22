/****************************************************************************
** I51BaseTimer2W meta object code from reading C++ file 'I51BaseTimer2W.h'
**
** Created: Fri Dec 30 16:41:18 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/processorsW/I51BaseTimer2W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *I51BaseTimer2W::className() const
{
    return "I51BaseTimer2W";
}

QMetaObject *I51BaseTimer2W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_I51BaseTimer2W( "I51BaseTimer2W", &I51BaseTimer2W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString I51BaseTimer2W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseTimer2W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString I51BaseTimer2W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I51BaseTimer2W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* I51BaseTimer2W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"I51BaseTimer2W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_I51BaseTimer2W.setMetaObject( metaObj );
    return metaObj;
}

void* I51BaseTimer2W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "I51BaseTimer2W" ) )
	return this;
    return I51BaseW::qt_cast( clname );
}

bool I51BaseTimer2W::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool I51BaseTimer2W::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool I51BaseTimer2W::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool I51BaseTimer2W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
