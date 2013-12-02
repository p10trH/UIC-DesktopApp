/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UIC/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 17),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 22),
QT_MOC_LITERAL(4, 53, 18),
QT_MOC_LITERAL(5, 72, 21),
QT_MOC_LITERAL(6, 94, 20),
QT_MOC_LITERAL(7, 115, 22),
QT_MOC_LITERAL(8, 138, 23),
QT_MOC_LITERAL(9, 162, 20),
QT_MOC_LITERAL(10, 183, 17),
QT_MOC_LITERAL(11, 201, 19),
QT_MOC_LITERAL(12, 221, 11),
QT_MOC_LITERAL(13, 233, 11),
QT_MOC_LITERAL(14, 245, 12),
QT_MOC_LITERAL(15, 258, 9),
QT_MOC_LITERAL(16, 268, 5),
QT_MOC_LITERAL(17, 274, 14),
QT_MOC_LITERAL(18, 289, 12),
QT_MOC_LITERAL(19, 302, 1)
    },
    "MainWindow\0on_b_Home_clicked\0\0"
    "on_b_Athletics_clicked\0on_b_BookS_clicked\0"
    "on_b_CHousing_clicked\0on_b_Courses_clicked\0"
    "on_b_Directory_clicked\0on_b_EventsNews_clicked\0"
    "on_b_Library_clicked\0on_b_Maps_clicked\0"
    "on_b_Safety_clicked\0setAllFalse\0"
    "hideWidgets\0setMenuIcons\0slideShow\0"
    "delay\0mouseMoveEvent\0QMouseEvent*\0e\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08,
       3,    0,   95,    2, 0x08,
       4,    0,   96,    2, 0x08,
       5,    0,   97,    2, 0x08,
       6,    0,   98,    2, 0x08,
       7,    0,   99,    2, 0x08,
       8,    0,  100,    2, 0x08,
       9,    0,  101,    2, 0x08,
      10,    0,  102,    2, 0x08,
      11,    0,  103,    2, 0x08,
      12,    0,  104,    2, 0x08,
      13,    0,  105,    2, 0x08,
      14,    0,  106,    2, 0x08,
      15,    0,  107,    2, 0x08,
      16,    0,  108,    2, 0x08,
      17,    1,  109,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_b_Home_clicked(); break;
        case 1: _t->on_b_Athletics_clicked(); break;
        case 2: _t->on_b_BookS_clicked(); break;
        case 3: _t->on_b_CHousing_clicked(); break;
        case 4: _t->on_b_Courses_clicked(); break;
        case 5: _t->on_b_Directory_clicked(); break;
        case 6: _t->on_b_EventsNews_clicked(); break;
        case 7: _t->on_b_Library_clicked(); break;
        case 8: _t->on_b_Maps_clicked(); break;
        case 9: _t->on_b_Safety_clicked(); break;
        case 10: _t->setAllFalse(); break;
        case 11: _t->hideWidgets(); break;
        case 12: _t->setMenuIcons(); break;
        case 13: _t->slideShow(); break;
        case 14: _t->delay(); break;
        case 15: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
