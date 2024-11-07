/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_openAction_triggered",
    "",
    "on_prevButton_clicked",
    "on_playButton_clicked",
    "on_pauseButton_clicked",
    "on_stopButton_clicked",
    "on_nextButton_clicked",
    "on_volumeSlider_valueChanged",
    "value",
    "on_progressBar_valueChanged",
    "on_lbl_File_Name_linkActivated",
    "on_addPlaylistAction_triggered",
    "on_savePlaylistAction_triggered",
    "on_addBiblioSongAction_triggered",
    "updateSongList",
    "on_updateSongAction_triggered",
    "onSongSelected",
    "QListWidgetItem*",
    "item",
    "playSong",
    "filePath",
    "saveSongsToFile",
    "on_lineEdit_textChanged",
    "arg1",
    "filterSongList",
    "filterText",
    "on_openVideoAction_triggered",
    "on_exitAppAction_triggered",
    "on_stopVideoAction_triggered",
    "on_aboutAppAction_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[11];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[22];
    char stringdata5[23];
    char stringdata6[22];
    char stringdata7[22];
    char stringdata8[29];
    char stringdata9[6];
    char stringdata10[28];
    char stringdata11[31];
    char stringdata12[31];
    char stringdata13[32];
    char stringdata14[33];
    char stringdata15[15];
    char stringdata16[30];
    char stringdata17[15];
    char stringdata18[17];
    char stringdata19[5];
    char stringdata20[9];
    char stringdata21[9];
    char stringdata22[16];
    char stringdata23[24];
    char stringdata24[5];
    char stringdata25[15];
    char stringdata26[11];
    char stringdata27[29];
    char stringdata28[27];
    char stringdata29[29];
    char stringdata30[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 23),  // "on_openAction_triggered"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 21),  // "on_prevButton_clicked"
        QT_MOC_LITERAL(58, 21),  // "on_playButton_clicked"
        QT_MOC_LITERAL(80, 22),  // "on_pauseButton_clicked"
        QT_MOC_LITERAL(103, 21),  // "on_stopButton_clicked"
        QT_MOC_LITERAL(125, 21),  // "on_nextButton_clicked"
        QT_MOC_LITERAL(147, 28),  // "on_volumeSlider_valueChanged"
        QT_MOC_LITERAL(176, 5),  // "value"
        QT_MOC_LITERAL(182, 27),  // "on_progressBar_valueChanged"
        QT_MOC_LITERAL(210, 30),  // "on_lbl_File_Name_linkActivated"
        QT_MOC_LITERAL(241, 30),  // "on_addPlaylistAction_triggered"
        QT_MOC_LITERAL(272, 31),  // "on_savePlaylistAction_triggered"
        QT_MOC_LITERAL(304, 32),  // "on_addBiblioSongAction_triggered"
        QT_MOC_LITERAL(337, 14),  // "updateSongList"
        QT_MOC_LITERAL(352, 29),  // "on_updateSongAction_triggered"
        QT_MOC_LITERAL(382, 14),  // "onSongSelected"
        QT_MOC_LITERAL(397, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(414, 4),  // "item"
        QT_MOC_LITERAL(419, 8),  // "playSong"
        QT_MOC_LITERAL(428, 8),  // "filePath"
        QT_MOC_LITERAL(437, 15),  // "saveSongsToFile"
        QT_MOC_LITERAL(453, 23),  // "on_lineEdit_textChanged"
        QT_MOC_LITERAL(477, 4),  // "arg1"
        QT_MOC_LITERAL(482, 14),  // "filterSongList"
        QT_MOC_LITERAL(497, 10),  // "filterText"
        QT_MOC_LITERAL(508, 28),  // "on_openVideoAction_triggered"
        QT_MOC_LITERAL(537, 26),  // "on_exitAppAction_triggered"
        QT_MOC_LITERAL(564, 28),  // "on_stopVideoAction_triggered"
        QT_MOC_LITERAL(593, 27)   // "on_aboutAppAction_triggered"
    },
    "MainWindow",
    "on_openAction_triggered",
    "",
    "on_prevButton_clicked",
    "on_playButton_clicked",
    "on_pauseButton_clicked",
    "on_stopButton_clicked",
    "on_nextButton_clicked",
    "on_volumeSlider_valueChanged",
    "value",
    "on_progressBar_valueChanged",
    "on_lbl_File_Name_linkActivated",
    "on_addPlaylistAction_triggered",
    "on_savePlaylistAction_triggered",
    "on_addBiblioSongAction_triggered",
    "updateSongList",
    "on_updateSongAction_triggered",
    "onSongSelected",
    "QListWidgetItem*",
    "item",
    "playSong",
    "filePath",
    "saveSongsToFile",
    "on_lineEdit_textChanged",
    "arg1",
    "filterSongList",
    "filterText",
    "on_openVideoAction_triggered",
    "on_exitAppAction_triggered",
    "on_stopVideoAction_triggered",
    "on_aboutAppAction_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  152,    2, 0x08,    1 /* Private */,
       3,    0,  153,    2, 0x08,    2 /* Private */,
       4,    0,  154,    2, 0x08,    3 /* Private */,
       5,    0,  155,    2, 0x08,    4 /* Private */,
       6,    0,  156,    2, 0x08,    5 /* Private */,
       7,    0,  157,    2, 0x08,    6 /* Private */,
       8,    1,  158,    2, 0x08,    7 /* Private */,
      10,    0,  161,    2, 0x08,    9 /* Private */,
      11,    0,  162,    2, 0x08,   10 /* Private */,
      12,    0,  163,    2, 0x08,   11 /* Private */,
      13,    0,  164,    2, 0x08,   12 /* Private */,
      14,    0,  165,    2, 0x08,   13 /* Private */,
      15,    0,  166,    2, 0x08,   14 /* Private */,
      16,    0,  167,    2, 0x08,   15 /* Private */,
      17,    1,  168,    2, 0x08,   16 /* Private */,
      20,    1,  171,    2, 0x08,   18 /* Private */,
      22,    1,  174,    2, 0x08,   20 /* Private */,
      23,    1,  177,    2, 0x08,   22 /* Private */,
      25,    1,  180,    2, 0x08,   24 /* Private */,
      27,    0,  183,    2, 0x08,   26 /* Private */,
      28,    0,  184,    2, 0x08,   27 /* Private */,
      29,    0,  185,    2, 0x08,   28 /* Private */,
      30,    0,  186,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_openAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_prevButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_playButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pauseButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stopButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_nextButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_volumeSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_progressBar_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lbl_File_Name_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addPlaylistAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_savePlaylistAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addBiblioSongAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateSongList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_updateSongAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSongSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'playSong'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'saveSongsToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_lineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'filterSongList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_openVideoAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exitAppAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stopVideoAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_aboutAppAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_openAction_triggered(); break;
        case 1: _t->on_prevButton_clicked(); break;
        case 2: _t->on_playButton_clicked(); break;
        case 3: _t->on_pauseButton_clicked(); break;
        case 4: _t->on_stopButton_clicked(); break;
        case 5: _t->on_nextButton_clicked(); break;
        case 6: _t->on_volumeSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_progressBar_valueChanged(); break;
        case 8: _t->on_lbl_File_Name_linkActivated(); break;
        case 9: _t->on_addPlaylistAction_triggered(); break;
        case 10: _t->on_savePlaylistAction_triggered(); break;
        case 11: _t->on_addBiblioSongAction_triggered(); break;
        case 12: _t->updateSongList(); break;
        case 13: _t->on_updateSongAction_triggered(); break;
        case 14: _t->onSongSelected((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 15: _t->playSong((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->saveSongsToFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->filterSongList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->on_openVideoAction_triggered(); break;
        case 20: _t->on_exitAppAction_triggered(); break;
        case 21: _t->on_stopVideoAction_triggered(); break;
        case 22: _t->on_aboutAppAction_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
