#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QTimer>
#include <QMessageBox>
#include <QTextStream>
#include <QInputDialog>  // Pour utiliser QInputDialog
#include <QLayout>  // Inclure QLayout
#include <QVBoxLayout> // Si vous utilisez QVBoxLayout
#include <QHBoxLayout> // Si vous utilisez QHBoxLayout
#include <QPixmap>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this); // Configuration de l'interface utilisateur





    player = new QMediaPlayer(this);

    currentTrackIndex = -1; // Aucune piste sélectionnée au début
    audioOutput = new QAudioOutput(this); // Initialisation de QAudioOutput
    player->setAudioOutput(audioOutput); // Associe QMediaPlayer à QAudioOutput

    // Configuration des icônes des boutons
    ui->prevButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
    ui->playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pauseButton->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    ui->stopButton->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->nextButton->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));

    // Configuration du slider de volume
    ui->volumeSlider->setMinimum(0); // Définit la valeur minimale du slider de volume
    ui->volumeSlider->setMaximum(100); // Définit la valeur maximale du slider de volume
    ui->volumeSlider->setValue(50); // Valeur initiale de volume

    // Connexion des signaux et slots
    // Connexion des signaux et slots
    connect(ui->volumeSlider, &QSlider::valueChanged, this, &MainWindow::on_volumeSlider_valueChanged);
    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::on_progressBar_valueChanged); // Connexion pour la barre de progression
    connect(ui->SongListWidget, &QListWidget::itemDoubleClicked, this, &MainWindow::onSongSelected);
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::on_lineEdit_textChanged);




    // Configuration du timer pour mettre à jour la barre de progression
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::on_progressBar_valueChanged);
    timer->start(1000); // Met à jour toutes les secondes


}

MainWindow::~MainWindow()
{
    delete player; // Libération de la mémoire du lecteur multimédia
    delete ui; // Libération de la mémoire de l'interface utilisateur
}

// Reste de votre code...


void MainWindow::updateSongList()
{
    // Supposons que vous avez un QListWidget nommé songListWidget
    ui->SongListWidget->clear(); // Vide la liste actuelle

    // Récupérez les noms des chansons à partir de votre bibliothèque
    QStringList songs = getSongNames(); // Exemple de fonction pour obtenir les noms

    // Ajoutez chaque chanson à la liste
    for (const QString &song : songs) {
        ui->SongListWidget->addItem(song); // Ajoute chaque chanson au QListWidget
    }
}


// Fonction pour obtenir les noms des chansons de la bibliothèque
QStringList MainWindow::getSongNames() const
{
    QStringList songNames;
    for (const QString &song : library) {
        songNames.append(QFileInfo(song).fileName()); // Ajoute le nom de chaque chanson
    }
    return songNames;
}

// Méthode pour jouer la chanson
void MainWindow::playSong(const QString &filePath) {
    if (QFile::exists(filePath)) {
        player->setSource(QUrl::fromLocalFile(filePath));  // Configure le lecteur
        player->play();  // Démarre la lecture
        ui->lbl_File_Name->setText(QFileInfo(filePath).fileName());  // Affiche le titre
    } else {
        // Afficher un message de débogage
        qDebug() << "Le fichier n'existe pas à l'emplacement:" << filePath;
        // Vous pouvez ici implémenter une logique pour demander un nouveau chemin à l'utilisateur
        QMessageBox::warning(this, "Erreur", "Le fichier audio sélectionné n'existe pas. Vérifiez l'emplacement.");
    }
}
void MainWindow::onSongSelected(QListWidgetItem *item) {
    if (item) {
        QString songName = item->text();  // Récupère le nom de la chanson
        QString filePath = findSongPath(songName);  // Appel correct pour récupérer le chemin

        // Vérifiez que le chemin a été trouvé
        if (!filePath.isEmpty()) {
            qDebug() << "Fichier sélectionné:" << filePath;
            playSong(filePath);  // Joue la chanson
        } else {
            qDebug() << "Aucun chemin trouvé pour la chanson:" << songName;
            QMessageBox::warning(this, "Erreur", "Aucun chemin trouvé pour cette chanson.");
        }
    }
}


QString MainWindow::findSongPath(const QString &songName) {  // Assurez-vous que le type de retour est correct
    QFile file("chanson.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Impossible d'ouvrir le fichier:" << file.errorString();
        return QString();  // Retourne une chaîne vide en cas d'erreur
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        if (line.contains(songName, Qt::CaseInsensitive)) {
            return line;  // Retourne le chemin trouvé
        }
    }

    file.close();
    return QString();  // Retourne une chaîne vide si le chemin n'est pas trouvé
}


// Méthode pour filtrer la liste des chansons
void MainWindow::filterSongList(const QString &searchTerm) {
    for (int i = 0; i < ui->SongListWidget->count(); ++i) {
        QListWidgetItem *item = ui->SongListWidget->item(i);
        if (item->text().contains(searchTerm, Qt::CaseInsensitive)) {
            item->setHidden(false); // Afficher l'élément
        } else {
            item->setHidden(true); // Masquer l'élément
        }
    }
}











void MainWindow::on_openAction_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Ouvrir un fichier audio"), "", tr("Fichiers audio (*.mp3 *.m3u *.wav)"));
    if (!fileName.isEmpty()) {
        // Charge le fichier dans le lecteur multimédia
        player->setSource(QUrl::fromLocalFile(fileName));

        // Stocke le nom du fichier
        currentFileName = QFileInfo(fileName).fileName();

        // Affiche le nom du fichier dans lbl_File_Name
        ui->lbl_File_Name->setText(currentFileName);

        // Démarre la lecture
        player->play();
    }
}

void MainWindow::on_prevButton_clicked()
{
    // Vérifiez si une piste est en cours de lecture
    if (currentTrackIndex > 0) {
        currentTrackIndex--; // Passe à la piste précédente
    } else {
        // Si vous êtes déjà à la première piste, ne changez pas
        return;
    }

    // Chargez la nouvelle piste et démarrez la lecture
    player->setSource(QUrl::fromLocalFile(playlist[currentTrackIndex]));
    player->play();

    // Met à jour l'affichage du nom de fichier
    QString currentFileName = QFileInfo(playlist[currentTrackIndex]).fileName();
    ui->lbl_File_Name->setText(currentFileName);
}

void MainWindow::on_playButton_clicked()
{
        player->play(); // Démarre la lecture
}

void MainWindow::on_pauseButton_clicked()
{
    player->pause(); // Met en pause la lecture
    ui->playButton->setIcon(style()->standardIcon(QStyle::SP_MediaPlay)); // Change l'icône
}

void MainWindow::on_stopButton_clicked()
{
    player->stop(); // Arrête la lecture
    // Vide la playlist, si vous avez utilisé une QMediaPlaylist
    if (playlist.isEmpty()) {
        playlist.clear(); // Si vous utilisez une QMediaPlaylist
        // ou, si vous stockez les fichiers dans une QList<QString>
        // playlist.clear();
    }

    // Réinitialiser l'interface utilisateur, si nécessaire
    ui->lbl_File_Name->setText("Aucun fichier en cours de lecture"); // Met à jour le label
    ui->progressBar->setValue(0); // Réinitialise le slider de durée
    ui->volumeSlider->setValue(50); // Optionnel : Réinitialise le volume à une valeur par défaut
}

void MainWindow::on_nextButton_clicked()
{ // Vérifiez si une piste est en cours de lecture
    if (currentTrackIndex < playlist.size() - 1) {
        currentTrackIndex++; // Passe à la piste suivante
    } else {
        // Si vous êtes déjà à la dernière piste, ne changez pas
        return;
    }

    // Chargez la nouvelle piste et démarrez la lecture
    player->setSource(QUrl::fromLocalFile(playlist[currentTrackIndex]));
    player->play();

    // Met à jour l'affichage du nom de fichier
    QString currentFileName = QFileInfo(playlist[currentTrackIndex]).fileName();
    ui->lbl_File_Name->setText(currentFileName);
}

void MainWindow::on_volumeSlider_valueChanged(int value)
{
    // Applique le volume à QAudioOutput
    audioOutput->setVolume(value / 100.0); // Le volume est un flottant entre 0.0 et 1.0
}

void MainWindow::on_progressBar_valueChanged()
{
    // Récupérer la durée totale de la piste
    qint64 duration = player->duration();
    // Récupérer la position actuelle
    qint64 position = player->position();

    // Mettre à jour la barre de progression
    if (duration > 0) {
        int progressValue = static_cast<int>((position * 100) / duration); // Calculer la valeur en pourcentage
        ui->progressBar->setValue(progressValue); // Mettre à jour la barre de progression
    }
}


void MainWindow::on_lbl_File_Name_linkActivated()
{
    // Affichez le nom du fichier dans lbl_File_Name
    ui->lbl_File_Name->setText(currentFileName);
}


void MainWindow::on_addPlaylistAction_triggered()
{
    QStringList files = QFileDialog::getOpenFileNames(this, tr("Ouvrir des fichiers"), QString(), tr("Fichiers Audio (*.m3u *.mp3 *.wav *.ogg);;Tous les fichiers (*)"));

    if (!files.isEmpty()) {
        playlist.append(files); // Ajoute les fichiers à la playlist
        currentTrackIndex = 0; // Réinitialise l'index de la piste actuelle

        // Charge la première piste et démarre la lecture
        player->setSource(QUrl::fromLocalFile(playlist[currentTrackIndex]));
        player->play(); // Démarre la lecture automatiquement

        // Met à jour l'affichage du nom de fichier
        QString currentFileName = QFileInfo(playlist[currentTrackIndex]).fileName();
        ui->lbl_File_Name->setText(currentFileName);
    }
}


void MainWindow::on_savePlaylistAction_triggered()
{
    // Ouvre une boîte de dialogue pour sélectionner l'emplacement et le nom du fichier à enregistrer
    QString fileName = QFileDialog::getSaveFileName(this, tr("Enregistrer la liste de lecture"), QString(), tr("Fichiers M3U (*.m3u)"));

    // Vérifie si le nom de fichier n'est pas vide
    if (!fileName.isEmpty()) {
        QFile file(fileName); // Crée un objet QFile avec le nom du fichier sélectionné

        // Essaie d'ouvrir le fichier en mode écriture
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file); // Crée un flux de texte pour écrire dans le fichier
            out << "#EXTM3U\n"; // Écrit l'en-tête de la liste de lecture M3U

            // Parcourt chaque piste dans la playlist
            for (const QString &track : playlist) {
                QFileInfo fileInfo(track); // Obtient des informations sur le fichier

                out << "#EXTINF:" << 0 << ", " << fileInfo.fileName() << "\n"; // Écrit les informations de la piste
                out << track << "\n"; // Écrit le chemin du fichier
            }

            file.close(); // Ferme le fichier
            QMessageBox::information(this, tr("Succès"), tr("Liste de lecture enregistrée avec succès.")); // Affiche un message de succès
        } else {
            // Affiche un message d'erreur si le fichier n'a pas pu être ouvert
            QMessageBox::warning(this, tr("Erreur"), tr("Impossible d'enregistrer la liste de lecture."));
        }
    }
}

// Méthode pour enregistrer les chemins des chansons dans un fichier
void MainWindow::saveSongsToFile(const QString &filePath) {
    QString saveFilePath = QDir::currentPath() + "/" + filePath; // Utilise le chemin courant

    QFile file(saveFilePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Erreur", "Impossible d'ouvrir le fichier pour écrire.");
        return;
    }

    QTextStream out(&file);
    for (const QString &songPath : library) { // 'library' contient les chemins des fichiers
        out << songPath << "\n";  // Écrit le chemin dans le fichier
    }

    file.close();
    QMessageBox::information(this, "Succès", "Chansons sauvegardées dans le fichier avec succès !");
}


// Méthode pour gérer l'ajout de chansons à la bibliothèque
void MainWindow::on_addBiblioSongAction_triggered() {
    // Ouvrir un dialogue pour sélectionner des fichiers audio
    QStringList fileNames = QFileDialog::getOpenFileNames(this, "Ajouter des chansons à la bibliothèque", "", "Fichiers audio (*.mp3 *.wav *.ogg);;Tous les fichiers (*)");

    // Vérifier si des fichiers ont été sélectionnés
    if (!fileNames.isEmpty()) {
        for (const QString &fileName : fileNames) {
            // Ajout des fichiers à la bibliothèque
            library.append(fileName); // 'library' est un QList<QString> pour stocker les chemins des fichiers
        }

        // Mettre à jour l'interface utilisateur
        updateSongList(); // Appelle la fonction pour mettre à jour l'affichage


        // Mettre à jour le fichier de sauvegarde
        saveSongsToFile("chanson.txt"); // Sauvegarde la nouvelle liste dans le fichierr
    }
}


void MainWindow::on_updateSongAction_triggered() {
    // Ouvrir un dialogue pour sélectionner des fichiers audio
    QStringList fileNames = QFileDialog::getOpenFileNames(this, "Mettre à jour les chansons", "", "Fichiers audio (*.mp3 *.wav *.ogg);;Tous les fichiers (*)");

    // Vérifier si des fichiers ont été sélectionnés
    if (!fileNames.isEmpty()) {
        // Vider la bibliothèque actuelle avant d'ajouter les nouvelles chansons
        library.clear(); // 'library' est un QList<QString> pour stocker les chemins des fichiers

        // Ajouter les nouveaux fichiers à la bibliothèque
        for (const QString &filePath : fileNames) {
            library.append(filePath); // Ajouter le chemin du nouveau fichier
        }

        // Mettre à jour l'affichage de la liste des chansons
        updateSongList(); // Appelle la fonction pour mettre à jour l'interface utilisateur

        // Mettre à jour le fichier de sauvegarde
        saveSongsToFile("chanson.txt"); // Sauvegarde la nouvelle liste dans le fichier
    } else {
        QMessageBox::warning(this, "Avertissement", "Veuillez sélectionner au moins une chanson à mettre à jour.");
    }
}


void MainWindow::on_lineEdit_textChanged(const QString &arg1) {
    // Obtenez le texte saisi dans le QLineEdit
    QString searchTerm = arg1.trimmed(); // Supprime les espaces inutiles

    // Parcourez tous les éléments de la liste de chansons
    for (int i = 0; i < ui->SongListWidget->count(); ++i) {
        QListWidgetItem *item = ui->SongListWidget->item(i);

        // Vérifiez si le texte de l'élément contient le terme de recherche
        if (item->text().contains(searchTerm, Qt::CaseInsensitive)) {
            item->setHidden(false); // Affiche l'élément s'il correspond
        } else {
            item->setHidden(true); // Masque l'élément s'il ne correspond pas
        }
    }
}

void MainWindow::on_openVideoAction_triggered()
{

}


void MainWindow::on_stopVideoAction_triggered()
{

}


void MainWindow::on_exitAppAction_triggered()
{

    // Demander la confirmation avant de fermer
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Quitter", "Êtes-vous sûr de vouloir quitter ?",
                                  QMessageBox::Yes | QMessageBox::No);

    // Fermer si l'utilisateur confirme
    if (reply == QMessageBox::Yes) {
        close();
    }
}



void MainWindow::on_aboutAppAction_triggered()
{
    QMessageBox aboutBox(this);
    aboutBox.setWindowTitle("À propos de l'application");

    // Ajoutez un icône, si nécessaire
    aboutBox.setIcon(QMessageBox::Information);

    // Ajouter une image (si vous avez un chemin vers une image)
    QLabel *label = new QLabel();
    label->setPixmap(QPixmap(":bg.ico")); // Chemin de votre image dans le .qrc
    aboutBox.layout()->addWidget(label);

    // Ajoutez le texte d'information
    aboutBox.setText("Nom de l'application: SenRitsu Player Media\n"
                     "Version: 1.0.0\n"
                     "Développé par: Nehm\n"
                     "Merci d'utiliser notre application !");

    aboutBox.exec(); // Affiche la boîte de dialogue

}

