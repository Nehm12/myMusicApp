#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qlistwidget.h"
#include <QMainWindow>
#include <QtMultimedia>
#include <QStyle>
#include <QAudioOutput>
#include <QList>
#include <QMediaPlayer> // Ajoutez cet en-tête
#include <QListWidgetItem> // Ajoutez cet en-tête pour utiliser QListWidgetItem


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList getSongNames() const;  // Ajoutez cette ligne dans la section publique


private slots:
    void on_openAction_triggered();
    void on_prevButton_clicked();
    void on_playButton_clicked();
    void on_pauseButton_clicked();
    void on_stopButton_clicked();
    void on_nextButton_clicked();
    void on_volumeSlider_valueChanged(int value); // Changez le nom ici
    void on_progressBar_valueChanged();

    void on_lbl_File_Name_linkActivated();

    void on_addPlaylistAction_triggered();

    void on_savePlaylistAction_triggered();

    void on_addBiblioSongAction_triggered();
    void updateSongList();

    void on_updateSongAction_triggered();
    void onSongSelected(QListWidgetItem *item);
    void playSong(const QString &filePath);
    void saveSongsToFile(const QString &filePath);


    void on_lineEdit_textChanged(const QString &arg1);

    void filterSongList(const QString &filterText);

    void on_openVideoAction_triggered();

    void on_exitAppAction_triggered();

    void on_stopVideoAction_triggered();

    void on_aboutAppAction_triggered();

private:
    Ui::MainWindow *ui;           // Pointeur vers l'interface utilisateur
    QMediaPlayer *player;         // Pointeur vers le lecteur multimédia
    QAudioOutput *audioOutput;    // Pointeur vers la sortie audio
    QString currentFileName; // Pour stocker le nom du fichier actuel
    QList<QString> playlist;
    int currentTrackIndex; // Pour suivre l'index de la piste actuelle
    QList<QString> library; // Déclaration de la liste de chansons
    QString findSongPath(const QString &songName);

};

#endif // MAINWINDOW_H
