/****************************************************************************
** CharacterDotMatrixLCD meta object code from reading C++ file 'CharacterDotMatrixLCD.h'
**
** Created: Sun Jul 8 11:22:51 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "CharacterDotMatrixLCD.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CharacterDotMatrixLCD::className() const
{
    return "CharacterDotMatrixLCD";
}

QMetaObject *CharacterDotMatrixLCD::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CharacterDotMatrixLCD( "CharacterDotMatrixLCD", &CharacterDotMatrixLCD::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CharacterDotMatrixLCD::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CharacterDotMatrixLCD", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CharacterDotMatrixLCD::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CharacterDotMatrixLCD", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CharacterDotMatrixLCD::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"CharacterDotMatrixLCD", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CharacterDotMatrixLCD.setMetaObject( metaObj );
    return metaObj;
}

void* CharacterDotMatrixLCD::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CharacterDotMatrixLCD" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool CharacterDotMatrixLCD::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool CharacterDotMatrixLCD::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CharacterDotMatrixLCD::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool CharacterDotMatrixLCD::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES