/****************************************************************************
** MaximMAX7651W meta object code from reading C++ file 'MaximMAX7651W.h'
**
** Created: Sun Jul 8 11:30:25 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "MaximMAX7651W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MaximMAX7651W::className() const
{
    return "MaximMAX7651W";
}

QMetaObject *MaximMAX7651W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MaximMAX7651W( "MaximMAX7651W", &MaximMAX7651W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MaximMAX7651W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MaximMAX7651W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MaximMAX7651W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MaximMAX7651W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MaximMAX7651W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"MaximMAX7651W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MaximMAX7651W.setMetaObject( metaObj );
    return metaObj;
}

void* MaximMAX7651W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MaximMAX7651W" ) )
	return this;
    if ( !qstrcmp( clname, "I51BaseInternalIRAMW" ) )
	return (I51BaseInternalIRAMW*)this;
    if ( !qstrcmp( clname, "I51BaseADConverterW" ) )
	return (I51BaseADConverterW*)this;
    if ( !qstrcmp( clname, "I51BaseInternalFLASHW" ) )
	return (I51BaseInternalFLASHW*)this;
    if ( !qstrcmp( clname, "I51BaseTimer2W" ) )
	return (I51BaseTimer2W*)this;
    return I51BaseW::qt_cast( clname );
}

bool MaximMAX7651W::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool MaximMAX7651W::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MaximMAX7651W::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool MaximMAX7651W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
