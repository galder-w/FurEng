/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QLineEdit *pathToFile;
    QPushButton *loadButton;
    QPushButton *browseButton;
    QLabel *labelLoading;
    QLabel *labelAskingWord;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *checkButton;
    QLabel *labelRes;
    QPushButton *startButton;
    QLabel *labelRight;
    QLabel *labelRightCount;
    QLabel *labelWrongCount;
    QLabel *labelWrong;
    QRadioButton *radioButton_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(725, 507);
        MainWindow->setMaximumSize(QSize(1920, 1080));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pathToFile = new QLineEdit(centralWidget);
        pathToFile->setObjectName(QStringLiteral("pathToFile"));
        pathToFile->setGeometry(QRect(10, 10, 541, 20));
        pathToFile->setAutoFillBackground(false);
        loadButton = new QPushButton(centralWidget);
        loadButton->setObjectName(QStringLiteral("loadButton"));
        loadButton->setGeometry(QRect(640, 10, 75, 23));
        browseButton = new QPushButton(centralWidget);
        browseButton->setObjectName(QStringLiteral("browseButton"));
        browseButton->setGeometry(QRect(560, 10, 75, 23));
        labelLoading = new QLabel(centralWidget);
        labelLoading->setObjectName(QStringLiteral("labelLoading"));
        labelLoading->setGeometry(QRect(560, 40, 151, 20));
        labelLoading->setLayoutDirection(Qt::LeftToRight);
        labelLoading->setTextFormat(Qt::AutoText);
        labelLoading->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelAskingWord = new QLabel(centralWidget);
        labelAskingWord->setObjectName(QStringLiteral("labelAskingWord"));
        labelAskingWord->setEnabled(true);
        labelAskingWord->setGeometry(QRect(190, 200, 141, 20));
        labelAskingWord->setMaximumSize(QSize(16777215, 16777215));
        radioButton = new QRadioButton(centralWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setEnabled(true);
        radioButton->setGeometry(QRect(350, 150, 121, 17));
        radioButton->setMaximumSize(QSize(16777215, 16777215));
        radioButton_2 = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(true);
        radioButton_2->setGeometry(QRect(350, 180, 121, 17));
        radioButton_2->setMaximumSize(QSize(16777215, 16777215));
        radioButton_3 = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setEnabled(true);
        radioButton_3->setGeometry(QRect(350, 210, 121, 17));
        radioButton_3->setMaximumSize(QSize(16777215, 16777215));
        radioButton_4 = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setEnabled(true);
        radioButton_4->setGeometry(QRect(350, 240, 121, 17));
        radioButton_4->setMaximumSize(QSize(16777215, 16777215));
        checkButton = new QPushButton(centralWidget);
        checkButton->setObjectName(QStringLiteral("checkButton"));
        checkButton->setEnabled(true);
        checkButton->setGeometry(QRect(500, 180, 75, 23));
        checkButton->setMaximumSize(QSize(16777215, 16777215));
        labelRes = new QLabel(centralWidget);
        labelRes->setObjectName(QStringLiteral("labelRes"));
        labelRes->setEnabled(true);
        labelRes->setGeometry(QRect(500, 210, 211, 21));
        labelRes->setMaximumSize(QSize(16777215, 16777215));
        labelRes->setTextFormat(Qt::PlainText);
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(350, 310, 75, 23));
        labelRight = new QLabel(centralWidget);
        labelRight->setObjectName(QStringLiteral("labelRight"));
        labelRight->setEnabled(true);
        labelRight->setGeometry(QRect(500, 240, 41, 16));
        labelRight->setMaximumSize(QSize(16777215, 16777215));
        labelRight->setFocusPolicy(Qt::TabFocus);
        labelRight->setContextMenuPolicy(Qt::DefaultContextMenu);
        labelRightCount = new QLabel(centralWidget);
        labelRightCount->setObjectName(QStringLiteral("labelRightCount"));
        labelRightCount->setEnabled(true);
        labelRightCount->setGeometry(QRect(540, 240, 31, 16));
        labelRightCount->setMaximumSize(QSize(16777215, 16777215));
        labelRightCount->setFocusPolicy(Qt::TabFocus);
        labelWrongCount = new QLabel(centralWidget);
        labelWrongCount->setObjectName(QStringLiteral("labelWrongCount"));
        labelWrongCount->setEnabled(true);
        labelWrongCount->setGeometry(QRect(630, 240, 31, 16));
        labelWrongCount->setMaximumSize(QSize(16777215, 16777215));
        labelWrongCount->setFocusPolicy(Qt::TabFocus);
        labelWrong = new QLabel(centralWidget);
        labelWrong->setObjectName(QStringLiteral("labelWrong"));
        labelWrong->setEnabled(true);
        labelWrong->setGeometry(QRect(580, 240, 41, 16));
        labelWrong->setMaximumSize(QSize(16777215, 16777215));
        labelWrong->setFocusPolicy(Qt::TabFocus);
        radioButton_5 = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(350, 270, 82, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 21));
        menuBar->setMaximumSize(QSize(1920, 1080));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FurEng v0.1 alpha", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        loadButton->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        browseButton->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        labelLoading->setText(QApplication::translate("MainWindow", "No loading", Q_NULLPTR));
        labelAskingWord->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        checkButton->setText(QApplication::translate("MainWindow", "Check", Q_NULLPTR));
        labelRes->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        labelRight->setText(QApplication::translate("MainWindow", "Right:", Q_NULLPTR));
        labelRightCount->setText(QString());
        labelWrongCount->setText(QString());
        labelWrong->setText(QApplication::translate("MainWindow", "Wrong:", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
