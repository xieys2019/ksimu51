/****************************************************************************
** WorkspaceMainW meta object code from reading C++ file 'WorkspaceMainW.h'
**
** Created: Sun Jul 8 11:21:53 2012
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "WorkspaceMainW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WorkspaceMainW::className() const
{
    return "WorkspaceMainW";
}

QMetaObject *WorkspaceMainW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WorkspaceMainW( "WorkspaceMainW", &WorkspaceMainW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WorkspaceMainW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WorkspaceMainW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WorkspaceMainW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WorkspaceMainW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WorkspaceMainW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    static const QUMethod slot_0 = {"centerActiveWindow", 0, 0 };
    static const QUMethod slot_1 = {"cornerActiveWindow", 0, 0 };
    static const QUMethod slot_2 = {"backPreviousWindowState", 0, 0 };
    static const QUMethod slot_3 = {"activeWindowNearToWindow", 0, 0 };
    static const QUMethod slot_4 = {"activeWindowResizeHiddenOff", 0, 0 };
    static const QUMethod slot_5 = {"nextWindowToShow", 0, 0 };
    static const QUMethod slot_6 = {"tileWindowsHorizontal", 0, 0 };
    static const QUMethod slot_7 = {"tileWindows", 0, 0 };
    static const QUMethod slot_8 = {"cascadeWindows", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_9 = {"childWindowActivated", 1, param_slot_9 };
    static const QUMethod slot_10 = {"windowsMenuAboutToShow", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"windowActivatedFromMenu", 1, param_slot_11 };
    static const QMetaData slot_tbl[] = {
	{ "centerActiveWindow()", &slot_0, QMetaData::Public },
	{ "cornerActiveWindow()", &slot_1, QMetaData::Public },
	{ "backPreviousWindowState()", &slot_2, QMetaData::Public },
	{ "activeWindowNearToWindow()", &slot_3, QMetaData::Public },
	{ "activeWindowResizeHiddenOff()", &slot_4, QMetaData::Public },
	{ "nextWindowToShow()", &slot_5, QMetaData::Public },
	{ "tileWindowsHorizontal()", &slot_6, QMetaData::Public },
	{ "tileWindows()", &slot_7, QMetaData::Public },
	{ "cascadeWindows()", &slot_8, QMetaData::Public },
	{ "childWindowActivated(QWidget*)", &slot_9, QMetaData::Private },
	{ "windowsMenuAboutToShow()", &slot_10, QMetaData::Private },
	{ "windowActivatedFromMenu(int)", &slot_11, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"workspaceScrolled", 0, 0 };
    static const QUMethod signal_1 = {"workspaceWindowActivated", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "workspaceScrolled()", &signal_0, QMetaData::Protected },
	{ "workspaceWindowActivated()", &signal_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"WorkspaceMainW", parentObject,
	slot_tbl, 12,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WorkspaceMainW.setMetaObject( metaObj );
    return metaObj;
}

void* WorkspaceMainW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WorkspaceMainW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

// SIGNAL workspaceScrolled
void WorkspaceMainW::workspaceScrolled()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL workspaceWindowActivated
void WorkspaceMainW::workspaceWindowActivated()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool WorkspaceMainW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: centerActiveWindow(); break;
    case 1: cornerActiveWindow(); break;
    case 2: backPreviousWindowState(); break;
    case 3: activeWindowNearToWindow(); break;
    case 4: activeWindowResizeHiddenOff(); break;
    case 5: nextWindowToShow(); break;
    case 6: tileWindowsHorizontal(); break;
    case 7: tileWindows(); break;
    case 8: cascadeWindows(); break;
    case 9: childWindowActivated((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 10: windowsMenuAboutToShow(); break;
    case 11: windowActivatedFromMenu((int)static_QUType_int.get(_o+1)); break;
    default:
	return ShareMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool WorkspaceMainW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: workspaceScrolled(); break;
    case 1: workspaceWindowActivated(); break;
    default:
	return ShareMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool WorkspaceMainW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool WorkspaceMainW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
