/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openAction;
    QAction *exitAppAction;
    QAction *addPlaylistAction;
    QAction *aboutAppAction;
    QAction *savePlaylistAction;
    QAction *updateSongAction;
    QAction *addBiblioSongAction;
    QAction *openVideoAction;
    QAction *stopVideoAction;
    QWidget *centralwidget;
    QLabel *lbl_File_Title;
    QLabel *lbl_File_Name;
    QPushButton *prevButton;
    QPushButton *playButton;
    QPushButton *pauseButton;
    QPushButton *stopButton;
    QPushButton *nextButton;
    QProgressBar *progressBar;
    QSlider *volumeSlider;
    QLabel *label;
    QListWidget *SongListWidget;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *playlistMenu;
    QMenu *helpMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 700);
        MainWindow->setMinimumSize(QSize(500, 250));
        MainWindow->setMaximumSize(QSize(1024, 800));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #1e1e1e;\n"
"}\n"
"QWidget {\n"
"    font-family: \"Roboto\", sans-serif;\n"
"    color: #ffffff;\n"
"}\n"
"QPushButton {\n"
"    color: #ffffff;\n"
"    background-color: #333333;\n"
"    border: 1px solid #555555;\n"
"    padding: 8px;\n"
"    border-radius: 5px;\n"
"    box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.3);\n"
"    transition: transform 0.1s ease-in-out;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #444444;\n"
"    transform: scale(1.05);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #007ACC;\n"
"}\n"
""));
        openAction = new QAction(MainWindow);
        openAction->setObjectName("openAction");
        exitAppAction = new QAction(MainWindow);
        exitAppAction->setObjectName("exitAppAction");
        addPlaylistAction = new QAction(MainWindow);
        addPlaylistAction->setObjectName("addPlaylistAction");
        aboutAppAction = new QAction(MainWindow);
        aboutAppAction->setObjectName("aboutAppAction");
        savePlaylistAction = new QAction(MainWindow);
        savePlaylistAction->setObjectName("savePlaylistAction");
        updateSongAction = new QAction(MainWindow);
        updateSongAction->setObjectName("updateSongAction");
        addBiblioSongAction = new QAction(MainWindow);
        addBiblioSongAction->setObjectName("addBiblioSongAction");
        openVideoAction = new QAction(MainWindow);
        openVideoAction->setObjectName("openVideoAction");
        stopVideoAction = new QAction(MainWindow);
        stopVideoAction->setObjectName("stopVideoAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lbl_File_Title = new QLabel(centralwidget);
        lbl_File_Title->setObjectName("lbl_File_Title");
        lbl_File_Title->setGeometry(QRect(10, 10, 151, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setPointSize(12);
        font.setBold(true);
        lbl_File_Title->setFont(font);
        lbl_File_Title->setStyleSheet(QString::fromUtf8("background-color: #E1B7C4;\n"
"color: black;\n"
"border-radius: 5px;"));
        lbl_File_Name = new QLabel(centralwidget);
        lbl_File_Name->setObjectName("lbl_File_Name");
        lbl_File_Name->setGeometry(QRect(170, 10, 621, 20));
        lbl_File_Name->setFont(font);
        lbl_File_Name->setStyleSheet(QString::fromUtf8("background-color: #C04563;\n"
"color: black;\n"
"border-radius: 5px;"));
        prevButton = new QPushButton(centralwidget);
        prevButton->setObjectName("prevButton");
        prevButton->setGeometry(QRect(10, 470, 71, 41));
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName("playButton");
        playButton->setGeometry(QRect(90, 470, 71, 41));
        pauseButton = new QPushButton(centralwidget);
        pauseButton->setObjectName("pauseButton");
        pauseButton->setGeometry(QRect(170, 470, 71, 41));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName("stopButton");
        stopButton->setGeometry(QRect(250, 470, 71, 41));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName("nextButton");
        nextButton->setGeometry(QRect(330, 470, 71, 41));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(10, 440, 781, 23));
        progressBar->setValue(12);
        volumeSlider = new QSlider(centralwidget);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setGeometry(QRect(550, 480, 181, 20));
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(50);
        volumeSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(410, 480, 131, 21));
        label->setFont(font);
        SongListWidget = new QListWidget(centralwidget);
        SongListWidget->setObjectName("SongListWidget");
        SongListWidget->setGeometry(QRect(10, 80, 781, 351));
        SongListWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/bg.ico);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"background-color:   #F5F5F5;\n"
"border-radius: 10px;\n"
"color: black;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 781, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Roboto")});
        font1.setBold(true);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:   #F5F5F5; border: 1px solid #B3E5FC; border-radius: 5px;\n"
"color :black;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName("fileMenu");
        playlistMenu = new QMenu(menubar);
        playlistMenu->setObjectName("playlistMenu");
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName("helpMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(playlistMenu->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(openAction);
        fileMenu->addAction(openVideoAction);
        fileMenu->addAction(stopVideoAction);
        fileMenu->addAction(addBiblioSongAction);
        fileMenu->addAction(updateSongAction);
        fileMenu->addAction(exitAppAction);
        playlistMenu->addAction(addPlaylistAction);
        playlistMenu->addAction(savePlaylistAction);
        helpMenu->addAction(aboutAppAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Senritsu", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        exitAppAction->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        addPlaylistAction->setText(QCoreApplication::translate("MainWindow", "New Playlist", nullptr));
        aboutAppAction->setText(QCoreApplication::translate("MainWindow", "Abouts us", nullptr));
        savePlaylistAction->setText(QCoreApplication::translate("MainWindow", "Save Playlist", nullptr));
        updateSongAction->setText(QCoreApplication::translate("MainWindow", "Update Biblio", nullptr));
        addBiblioSongAction->setText(QCoreApplication::translate("MainWindow", "Add Biblio", nullptr));
        openVideoAction->setText(QCoreApplication::translate("MainWindow", "Open Video", nullptr));
        stopVideoAction->setText(QCoreApplication::translate("MainWindow", "Stop Video", nullptr));
        lbl_File_Title->setText(QCoreApplication::translate("MainWindow", "Audio file Name:", nullptr));
        lbl_File_Name->setText(QString());
        prevButton->setText(QString());
        playButton->setText(QString());
        pauseButton->setText(QString());
        stopButton->setText(QString());
        nextButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "       Volume:", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search....", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        playlistMenu->setTitle(QCoreApplication::translate("MainWindow", "Playlist", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
