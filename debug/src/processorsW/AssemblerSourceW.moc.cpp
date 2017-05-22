/****************************************************************************
** AsmSourceQWidget meta object code from reading C++ file 'AssemblerSourceW.h'
**
** Created: Fri Dec 30 16:41:09 2011
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../src/processorsW/AssemblerSourceW.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AsmSourceQWidget::className() const
{
    return "AsmSourceQWidget";
}

QMetaObject *AsmSourceQWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AsmSourceQWidget( "AsmSourceQWidget", &AsmSourceQWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AsmSourceQWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AsmSourceQWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AsmSourceQWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AsmSourceQWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AsmSourceQWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"AsmSourceQWidget", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AsmSourceQWidget.setMetaObject( metaObj );
    return metaObj;
}

void* AsmSourceQWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AsmSourceQWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool AsmSourceQWidget::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool AsmSourceQWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AsmSourceQWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool AsmSourceQWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *SourceTabQTabWidget::className() const
{
    return "SourceTabQTabWidget";
}

QMetaObject *SourceTabQTabWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SourceTabQTabWidget( "SourceTabQTabWidget", &SourceTabQTabWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SourceTabQTabWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SourceTabQTabWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SourceTabQTabWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SourceTabQTabWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SourceTabQTabWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTabWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"SourceTabQTabWidget", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SourceTabQTabWidget.setMetaObject( metaObj );
    return metaObj;
}

void* SourceTabQTabWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SourceTabQTabWidget" ) )
	return this;
    return QTabWidget::qt_cast( clname );
}

bool SourceTabQTabWidget::qt_invoke( int _id, QUObject* _o )
{
    return QTabWidget::qt_invoke(_id,_o);
}

bool SourceTabQTabWidget::qt_emit( int _id, QUObject* _o )
{
    return QTabWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SourceTabQTabWidget::qt_property( int id, int f, QVariant* v)
{
    return QTabWidget::qt_property( id, f, v);
}

bool SourceTabQTabWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *NamedBitListWidget::className() const
{
    return "NamedBitListWidget";
}

QMetaObject *NamedBitListWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_NamedBitListWidget( "NamedBitListWidget", &NamedBitListWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString NamedBitListWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NamedBitListWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString NamedBitListWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NamedBitListWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* NamedBitListWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"namedBitsKListBoxDoubleClicked", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_1 = {"namedBitsKListBoxRightButtonClicked", 2, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "namedBitsKListBoxDoubleClicked(QListBoxItem*,const QPoint&)", &slot_0, QMetaData::Private },
	{ "namedBitsKListBoxRightButtonClicked(QListBoxItem*,const QPoint&)", &slot_1, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"bitDoubleClicked", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "unsigned int", QUParameter::In }
    };
    static const QUMethod signal_1 = {"bitRightMouseButtonClicked", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "bitDoubleClicked(const QString&,const int)", &signal_0, QMetaData::Private },
	{ "bitRightMouseButtonClicked(const unsigned int)", &signal_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"NamedBitListWidget", parentObject,
	slot_tbl, 2,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_NamedBitListWidget.setMetaObject( metaObj );
    return metaObj;
}

void* NamedBitListWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "NamedBitListWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL bitDoubleClicked
void NamedBitListWidget::bitDoubleClicked( const QString& t0, const int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL bitRightMouseButtonClicked
void NamedBitListWidget::bitRightMouseButtonClicked( const unsigned int t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool NamedBitListWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: namedBitsKListBoxDoubleClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 1: namedBitsKListBoxRightButtonClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool NamedBitListWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: bitDoubleClicked((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    case 1: bitRightMouseButtonClicked((const unsigned int)(*((const unsigned int*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool NamedBitListWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool NamedBitListWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *AssemblerSourceW::className() const
{
    return "AssemblerSourceW";
}

QMetaObject *AssemblerSourceW::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AssemblerSourceW( "AssemblerSourceW", &AssemblerSourceW::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AssemblerSourceW::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AssemblerSourceW", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AssemblerSourceW::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AssemblerSourceW", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AssemblerSourceW::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ShareMainW::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "p", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"asmSourceTabQTabWidgetRightButtonClicked", 2, param_slot_0 };
    static const QUMethod slot_1 = {"toggleBreakpointActivated", 0, 0 };
    static const QUMethod slot_2 = {"removeBreakpointsActivated", 0, 0 };
    static const QUMethod slot_3 = {"executionPointActivated", 0, 0 };
    static const QUMethod slot_4 = {"findActivated", 0, 0 };
    static const QUMethod slot_5 = {"findNext", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "page", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_6 = {"currentAsmSourceTabChanged", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "mstr", &static_QUType_QString, 0, QUParameter::In },
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"bitsListBoxBitDoubleClicked", 2, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "bitAddress", &static_QUType_ptr, "unsigned int", QUParameter::In }
    };
    static const QUMethod slot_8 = {"bitListRightMouseButtonClicked", 1, param_slot_8 };
    static const QMetaData slot_tbl[] = {
	{ "asmSourceTabQTabWidgetRightButtonClicked(QListBoxItem*,const QPoint&)", &slot_0, QMetaData::Private },
	{ "toggleBreakpointActivated()", &slot_1, QMetaData::Private },
	{ "removeBreakpointsActivated()", &slot_2, QMetaData::Private },
	{ "executionPointActivated()", &slot_3, QMetaData::Private },
	{ "findActivated()", &slot_4, QMetaData::Private },
	{ "findNext()", &slot_5, QMetaData::Private },
	{ "currentAsmSourceTabChanged(QWidget*)", &slot_6, QMetaData::Private },
	{ "bitsListBoxBitDoubleClicked(const QString&,const int)", &slot_7, QMetaData::Private },
	{ "bitListRightMouseButtonClicked(const unsigned int)", &slot_8, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "unsigned long", QUParameter::In }
    };
    static const QUMethod signal_0 = {"message_SetExecutionPoint", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"message_ToggleBit", 3, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"message_ToggleBreakpointBit", 2, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "message_SetExecutionPoint(const QString&,const unsigned long)", &signal_0, QMetaData::Private },
	{ "message_ToggleBit(const QString&,const QString&,const int)", &signal_1, QMetaData::Private },
	{ "message_ToggleBreakpointBit(const QString&,const int)", &signal_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"AssemblerSourceW", parentObject,
	slot_tbl, 9,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AssemblerSourceW.setMetaObject( metaObj );
    return metaObj;
}

void* AssemblerSourceW::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AssemblerSourceW" ) )
	return this;
    return ShareMainW::qt_cast( clname );
}

// SIGNAL message_SetExecutionPoint
void AssemblerSourceW::message_SetExecutionPoint( const QString& t0, const unsigned long t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL message_ToggleBit
void AssemblerSourceW::message_ToggleBit( const QString& t0, const QString& t1, const int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL message_ToggleBreakpointBit
void AssemblerSourceW::message_ToggleBreakpointBit( const QString& t0, const int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

bool AssemblerSourceW::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: asmSourceTabQTabWidgetRightButtonClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 1: toggleBreakpointActivated(); break;
    case 2: removeBreakpointsActivated(); break;
    case 3: executionPointActivated(); break;
    case 4: findActivated(); break;
    case 5: findNext(); break;
    case 6: currentAsmSourceTabChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 7: bitsListBoxBitDoubleClicked((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    case 8: bitListRightMouseButtonClicked((const unsigned int)(*((const unsigned int*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return ShareMainW::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AssemblerSourceW::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message_SetExecutionPoint((const QString&)static_QUType_QString.get(_o+1),(const unsigned long)(*((const unsigned long*)static_QUType_ptr.get(_o+2)))); break;
    case 1: message_ToggleBit((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const int)static_QUType_int.get(_o+3)); break;
    case 2: message_ToggleBreakpointBit((const QString&)static_QUType_QString.get(_o+1),(const int)static_QUType_int.get(_o+2)); break;
    default:
	return ShareMainW::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool AssemblerSourceW::qt_property( int id, int f, QVariant* v)
{
    return ShareMainW::qt_property( id, f, v);
}

bool AssemblerSourceW::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
