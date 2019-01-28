/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_como;
    QAction *actionFechar;
    QAction *actionCopiar;
    QAction *actionRecortar;
    QAction *actionColar;
    QAction *actionDesfazer;
    QAction *actionRefazer;
    QAction *actionSobre_CFB_Cursos;
    QAction *actionFonte;
    QAction *actionCor;
    QAction *actionCor_de_Fundo;
    QAction *actionImprimir;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuEditar;
    QMenu *menuSobre;
    QMenu *menuFonte;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(527, 383);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/novo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/icones/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/icones/salvar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon2);
        actionSalvar_como = new QAction(MainWindow);
        actionSalvar_como->setObjectName(QString::fromUtf8("actionSalvar_como"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icones/icones/salvar_como.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar_como->setIcon(icon3);
        actionFechar = new QAction(MainWindow);
        actionFechar->setObjectName(QString::fromUtf8("actionFechar"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icones/icones/fechar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFechar->setIcon(icon4);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icones/icones/copiar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon5);
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName(QString::fromUtf8("actionRecortar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icones/icones/recurtar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecortar->setIcon(icon6);
        actionColar = new QAction(MainWindow);
        actionColar->setObjectName(QString::fromUtf8("actionColar"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icones/icones/colar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColar->setIcon(icon7);
        actionDesfazer = new QAction(MainWindow);
        actionDesfazer->setObjectName(QString::fromUtf8("actionDesfazer"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icones/icones/desfazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesfazer->setIcon(icon8);
        actionRefazer = new QAction(MainWindow);
        actionRefazer->setObjectName(QString::fromUtf8("actionRefazer"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icones/icones/refazer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefazer->setIcon(icon9);
        actionSobre_CFB_Cursos = new QAction(MainWindow);
        actionSobre_CFB_Cursos->setObjectName(QString::fromUtf8("actionSobre_CFB_Cursos"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icones/icones/sobre.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSobre_CFB_Cursos->setIcon(icon10);
        actionFonte = new QAction(MainWindow);
        actionFonte->setObjectName(QString::fromUtf8("actionFonte"));
        actionCor = new QAction(MainWindow);
        actionCor->setObjectName(QString::fromUtf8("actionCor"));
        actionCor_de_Fundo = new QAction(MainWindow);
        actionCor_de_Fundo->setObjectName(QString::fromUtf8("actionCor_de_Fundo"));
        actionImprimir = new QAction(MainWindow);
        actionImprimir->setObjectName(QString::fromUtf8("actionImprimir"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 501, 291));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 527, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuEditar = new QMenu(menuBar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        menuFonte = new QMenu(menuBar);
        menuFonte->setObjectName(QString::fromUtf8("menuFonte"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuEditar->menuAction());
        menuBar->addAction(menuFonte->menuAction());
        menuBar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_como);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionImprimir);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionFechar);
        menuEditar->addAction(actionDesfazer);
        menuEditar->addAction(actionRefazer);
        menuEditar->addSeparator();
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionRecortar);
        menuEditar->addAction(actionColar);
        menuSobre->addAction(actionSobre_CFB_Cursos);
        menuFonte->addAction(actionFonte);
        menuFonte->addAction(actionCor);
        menuFonte->addAction(actionCor_de_Fundo);
        mainToolBar->addAction(actionNovo);
        mainToolBar->addAction(actionAbrir);
        mainToolBar->addAction(actionSalvar);
        mainToolBar->addAction(actionSalvar_como);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCopiar);
        mainToolBar->addAction(actionRecortar);
        mainToolBar->addAction(actionColar);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionDesfazer);
        mainToolBar->addAction(actionRefazer);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSobre_CFB_Cursos);
        mainToolBar->addAction(actionFechar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNovo->setText(QApplication::translate("MainWindow", "Novo", nullptr));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        actionSalvar_como->setText(QApplication::translate("MainWindow", "Salvar como", nullptr));
        actionFechar->setText(QApplication::translate("MainWindow", "Fechar", nullptr));
        actionCopiar->setText(QApplication::translate("MainWindow", "Copiar", nullptr));
        actionRecortar->setText(QApplication::translate("MainWindow", "Recortar", nullptr));
        actionColar->setText(QApplication::translate("MainWindow", "Colar", nullptr));
        actionDesfazer->setText(QApplication::translate("MainWindow", "Desfazer", nullptr));
        actionRefazer->setText(QApplication::translate("MainWindow", "Refazer", nullptr));
        actionSobre_CFB_Cursos->setText(QApplication::translate("MainWindow", "Sobre CFB Cursos", nullptr));
        actionFonte->setText(QApplication::translate("MainWindow", "Fonte", nullptr));
        actionCor->setText(QApplication::translate("MainWindow", "Cor da Fonte", nullptr));
        actionCor_de_Fundo->setText(QApplication::translate("MainWindow", "Cor de Fundo", nullptr));
        actionImprimir->setText(QApplication::translate("MainWindow", "Imprimir", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", nullptr));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", nullptr));
        menuFonte->setTitle(QApplication::translate("MainWindow", "Formatar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
