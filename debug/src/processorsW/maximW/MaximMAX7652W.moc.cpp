/****************************************************************************
** MaximMAX7652W meta object code from reading C++ file 'MaximMAX7652W.h'
**
** Created: Fri Dec 30 16:37:35 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../../src/processorsW/maximW/MaximMAX7652W.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MaximMAX7652W::className() const
{
    return "MaximMAX7652W";
}

QMetaObject *MaximMAX7652W::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MaximMAX7652W( "MaximMAX7652W", &MaximMAX7652W::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MaximMAX7652W::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MaximMAX7652W", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MaximMAX7652W::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MaximMAX7652W", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MaximMAX7652W::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = I51BaseW::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"MaximMAX7652W", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MaximMAX7652W.setMetaObject( metaObj );
    return metaObj;
}

void* MaximMAX7652W::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MaximMAX7652W" ) )
	return this;
    if ( !qstrcmp( clname, "MaximMAX7651W" ) )
	return (MaximMAX7651W*)this;
    return I51BaseW::qt_cast( clname );
}

bool MaximMAX7652W::qt_invoke( int _id, QUObject* _o )
{
    return I51BaseW::qt_invoke(_id,_o);
}

bool MaximMAX7652W::qt_emit( int _id, QUObject* _o )
{
    return I51BaseW::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MaximMAX7652W::qt_property( int id, int f, QVariant* v)
{
    return I51BaseW::qt_property( id, f, v);
}

bool MaximMAX7652W::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
