/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab2D;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *lineBtn;
    QPushButton *rectBtn;
    QPushButton *circleBtn;
    QPushButton *elipBtn;
    QPushButton *selectBtn;
    QWidget *tab3D;
    QVBoxLayout *verticalLayout_7;
    QWidget *tabFrame;
    QVBoxLayout *verticalLayout_9;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_8;
    QLabel *thicknessLabel;
    QSlider *verticalSlider;
    QLabel *mousePosLabel;
    QSplitter *mySplitter;
    QGraphicsView *graphicsView;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *infoLayout;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *changeColorBtn;
    QPushButton *fillColorBtn;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *deleteBtn;
    QPushButton *clearSceneBtn;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *addFrameBtn;
    QPushButton *nextFrameBtn;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *toTextFileBtn;
    QPushButton *readTextFileBtn;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QFrame *frameTranslate;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *dxTranslate;
    QLabel *label_2;
    QLineEdit *dyTranslate;
    QPushButton *translateBtn;
    QFrame *frameRotate;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *xRolate;
    QLineEdit *yRolate;
    QLineEdit *angleRolate;
    QPushButton *rolateBtn;
    QFrame *frameScale;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_9;
    QLabel *label_3;
    QLabel *label_4;
    QGridLayout *gridLayout_8;
    QLineEdit *scaleX;
    QLineEdit *sxScale;
    QLineEdit *syScale;
    QLineEdit *scaleY;
    QPushButton *scaleBtn;
    QFrame *frameReflect;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_6;
    QLabel *label_8;
    QLineEdit *xReflection;
    QLabel *label_9;
    QLineEdit *yReflection;
    QPushButton *reflecBtn;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBoxMethod;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *cavalier;
    QRadioButton *cabinet;
    QGroupBox *groupBoxCube;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout;
    QLabel *label_12;
    QLineEdit *cubeY;
    QLineEdit *cubeW;
    QLineEdit *cubeZ;
    QLineEdit *cubeX;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_10;
    QLineEdit *cubeL;
    QLabel *label_15;
    QLineEdit *cubeH;
    QPushButton *addCubeBtn;
    QGroupBox *groupBoxSphere;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout_5;
    QLineEdit *zSphere;
    QLineEdit *ySphere;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *xSphere;
    QLabel *label_19;
    QLineEdit *rShere;
    QPushButton *addSphereBtn;
    QGroupBox *groupBoxCube_2;
    QHBoxLayout *horizontalLayout_12;
    QGridLayout *gridLayout_7;
    QLabel *label_20;
    QLineEdit *cylinderY;
    QLineEdit *cylinderR;
    QLineEdit *cylinderZ;
    QLineEdit *cylinderX;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *cylinderH;
    QPushButton *addCylinder;
    QPushButton *clear3Dbtn;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *openSceneBtn;
    QPushButton *playBtn;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_26;
    QLineEdit *delayValue;
    QCheckBox *pauseAtEndRBtn;
    QCheckBox *stopEachFrame;
    QCheckBox *showRuler;
    QLabel *openFileName;
    QSpacerItem *verticalSpacer_2;
    QButtonGroup *modeGroupBtn;
    QButtonGroup *to2DMethod;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QStringLiteral("Window"));
        Window->resize(1258, 652);
        Window->setMinimumSize(QSize(300, 150));
        Window->setBaseSize(QSize(1200, 600));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(10);
        Window->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Window->setWindowIcon(icon);
        centralWidget = new QWidget(Window);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QFont font1;
        font1.setPointSize(10);
        centralWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 0));
        tabWidget->setMaximumSize(QSize(99999, 99999));
        tabWidget->setSizeIncrement(QSize(0, 0));
        tabWidget->setBaseSize(QSize(0, 0));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(0, 0));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabBarAutoHide(false);
        tab2D = new QWidget();
        tab2D->setObjectName(QStringLiteral("tab2D"));
        sizePolicy.setHeightForWidth(tab2D->sizePolicy().hasHeightForWidth());
        tab2D->setSizePolicy(sizePolicy);
        tab2D->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(12);
        tab2D->setFont(font2);
        horizontalLayout_2 = new QHBoxLayout(tab2D);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineBtn = new QPushButton(tab2D);
        modeGroupBtn = new QButtonGroup(Window);
        modeGroupBtn->setObjectName(QStringLiteral("modeGroupBtn"));
        modeGroupBtn->addButton(lineBtn);
        lineBtn->setObjectName(QStringLiteral("lineBtn"));
        sizePolicy.setHeightForWidth(lineBtn->sizePolicy().hasHeightForWidth());
        lineBtn->setSizePolicy(sizePolicy);
        lineBtn->setFont(font1);
        lineBtn->setCheckable(true);
        lineBtn->setChecked(true);
        lineBtn->setFlat(true);

        horizontalLayout_2->addWidget(lineBtn);

        rectBtn = new QPushButton(tab2D);
        modeGroupBtn->addButton(rectBtn);
        rectBtn->setObjectName(QStringLiteral("rectBtn"));
        sizePolicy.setHeightForWidth(rectBtn->sizePolicy().hasHeightForWidth());
        rectBtn->setSizePolicy(sizePolicy);
        rectBtn->setFont(font1);
        rectBtn->setCheckable(true);
        rectBtn->setFlat(true);

        horizontalLayout_2->addWidget(rectBtn);

        circleBtn = new QPushButton(tab2D);
        modeGroupBtn->addButton(circleBtn);
        circleBtn->setObjectName(QStringLiteral("circleBtn"));
        sizePolicy.setHeightForWidth(circleBtn->sizePolicy().hasHeightForWidth());
        circleBtn->setSizePolicy(sizePolicy);
        circleBtn->setFont(font1);
        circleBtn->setCheckable(true);
        circleBtn->setFlat(true);

        horizontalLayout_2->addWidget(circleBtn);

        elipBtn = new QPushButton(tab2D);
        modeGroupBtn->addButton(elipBtn);
        elipBtn->setObjectName(QStringLiteral("elipBtn"));
        sizePolicy.setHeightForWidth(elipBtn->sizePolicy().hasHeightForWidth());
        elipBtn->setSizePolicy(sizePolicy);
        elipBtn->setFont(font1);
        elipBtn->setCheckable(true);
        elipBtn->setFlat(true);

        horizontalLayout_2->addWidget(elipBtn);

        selectBtn = new QPushButton(tab2D);
        modeGroupBtn->addButton(selectBtn);
        selectBtn->setObjectName(QStringLiteral("selectBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(selectBtn->sizePolicy().hasHeightForWidth());
        selectBtn->setSizePolicy(sizePolicy1);
        selectBtn->setFont(font1);
        selectBtn->setCheckable(true);
        selectBtn->setFlat(true);

        horizontalLayout_2->addWidget(selectBtn);

        tabWidget->addTab(tab2D, QString());
        tabWidget->setTabText(tabWidget->indexOf(tab2D), QStringLiteral("2D"));
        tab3D = new QWidget();
        tab3D->setObjectName(QStringLiteral("tab3D"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab3D->sizePolicy().hasHeightForWidth());
        tab3D->setSizePolicy(sizePolicy2);
        tab3D->setMaximumSize(QSize(0, 0));
        verticalLayout_7 = new QVBoxLayout(tab3D);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab3D, QString());
        tabFrame = new QWidget();
        tabFrame->setObjectName(QStringLiteral("tabFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabFrame->sizePolicy().hasHeightForWidth());
        tabFrame->setSizePolicy(sizePolicy3);
        tabFrame->setMaximumSize(QSize(0, 0));
        verticalLayout_9 = new QVBoxLayout(tabFrame);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        tabWidget->addTab(tabFrame, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalFrame = new QFrame(centralWidget);
        horizontalFrame->setObjectName(QStringLiteral("horizontalFrame"));
        sizePolicy.setHeightForWidth(horizontalFrame->sizePolicy().hasHeightForWidth());
        horizontalFrame->setSizePolicy(sizePolicy);
        horizontalFrame->setMaximumSize(QSize(150, 16777215));
        horizontalLayout_11 = new QHBoxLayout(horizontalFrame);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 30, -1, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        thicknessLabel = new QLabel(horizontalFrame);
        thicknessLabel->setObjectName(QStringLiteral("thicknessLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(thicknessLabel->sizePolicy().hasHeightForWidth());
        thicknessLabel->setSizePolicy(sizePolicy4);
        thicknessLabel->setMinimumSize(QSize(0, 0));
        thicknessLabel->setMaximumSize(QSize(25, 16777215));
        thicknessLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(thicknessLabel);

        verticalSlider = new QSlider(horizontalFrame);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        sizePolicy4.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy4);
        verticalSlider->setMaximumSize(QSize(25, 16777215));
        verticalSlider->setMinimum(1);
        verticalSlider->setMaximum(4);
        verticalSlider->setSingleStep(1);
        verticalSlider->setPageStep(1);
        verticalSlider->setValue(1);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setTickInterval(5);

        verticalLayout_8->addWidget(verticalSlider);


        horizontalLayout_11->addLayout(verticalLayout_8);

        mousePosLabel = new QLabel(horizontalFrame);
        mousePosLabel->setObjectName(QStringLiteral("mousePosLabel"));
        mousePosLabel->setMinimumSize(QSize(0, 0));
        mousePosLabel->setFrameShape(QFrame::Box);
        mousePosLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(mousePosLabel);

        horizontalLayout_11->setStretch(1, 2);

        horizontalLayout->addWidget(horizontalFrame);


        verticalLayout->addLayout(horizontalLayout);

        mySplitter = new QSplitter(centralWidget);
        mySplitter->setObjectName(QStringLiteral("mySplitter"));
        mySplitter->setOrientation(Qt::Horizontal);
        graphicsView = new QGraphicsView(mySplitter);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setSizeIncrement(QSize(5, 5));
        graphicsView->setBaseSize(QSize(0, 0));
        mySplitter->addWidget(graphicsView);
        stackedWidget = new QStackedWidget(mySplitter);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(200, 0));
        stackedWidget->setFrameShape(QFrame::NoFrame);
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        verticalLayout_3 = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(stackedWidgetPage1);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        infoLayout = new QVBoxLayout(layoutWidget);
        infoLayout->setSpacing(6);
        infoLayout->setContentsMargins(11, 11, 11, 11);
        infoLayout->setObjectName(QStringLiteral("infoLayout"));
        infoLayout->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        changeColorBtn = new QPushButton(layoutWidget1);
        changeColorBtn->setObjectName(QStringLiteral("changeColorBtn"));

        horizontalLayout_7->addWidget(changeColorBtn);

        fillColorBtn = new QPushButton(layoutWidget1);
        fillColorBtn->setObjectName(QStringLiteral("fillColorBtn"));
        fillColorBtn->setEnabled(false);

        horizontalLayout_7->addWidget(fillColorBtn);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        deleteBtn = new QPushButton(layoutWidget1);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));

        horizontalLayout_13->addWidget(deleteBtn);

        clearSceneBtn = new QPushButton(layoutWidget1);
        clearSceneBtn->setObjectName(QStringLiteral("clearSceneBtn"));

        horizontalLayout_13->addWidget(clearSceneBtn);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        addFrameBtn = new QPushButton(layoutWidget1);
        addFrameBtn->setObjectName(QStringLiteral("addFrameBtn"));

        horizontalLayout_15->addWidget(addFrameBtn);

        nextFrameBtn = new QPushButton(layoutWidget1);
        nextFrameBtn->setObjectName(QStringLiteral("nextFrameBtn"));

        horizontalLayout_15->addWidget(nextFrameBtn);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        toTextFileBtn = new QPushButton(layoutWidget1);
        toTextFileBtn->setObjectName(QStringLiteral("toTextFileBtn"));

        horizontalLayout_14->addWidget(toTextFileBtn);

        readTextFileBtn = new QPushButton(layoutWidget1);
        readTextFileBtn->setObjectName(QStringLiteral("readTextFileBtn"));

        horizontalLayout_14->addWidget(readTextFileBtn);


        verticalLayout_2->addLayout(horizontalLayout_14);

        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frameTranslate = new QFrame(groupBox);
        frameTranslate->setObjectName(QStringLiteral("frameTranslate"));
        frameTranslate->setFrameShape(QFrame::Box);
        horizontalLayout_3 = new QHBoxLayout(frameTranslate);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(frameTranslate);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMinimumSize(QSize(50, 0));
        label->setSizeIncrement(QSize(0, 0));
        label->setIndent(0);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        dxTranslate = new QLineEdit(frameTranslate);
        dxTranslate->setObjectName(QStringLiteral("dxTranslate"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(dxTranslate->sizePolicy().hasHeightForWidth());
        dxTranslate->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(dxTranslate, 0, 1, 1, 1);

        label_2 = new QLabel(frameTranslate);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setSizeIncrement(QSize(0, 0));
        label_2->setIndent(0);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        dyTranslate = new QLineEdit(frameTranslate);
        dyTranslate->setObjectName(QStringLiteral("dyTranslate"));
        sizePolicy5.setHeightForWidth(dyTranslate->sizePolicy().hasHeightForWidth());
        dyTranslate->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(dyTranslate, 1, 1, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        translateBtn = new QPushButton(frameTranslate);
        translateBtn->setObjectName(QStringLiteral("translateBtn"));
        sizePolicy1.setHeightForWidth(translateBtn->sizePolicy().hasHeightForWidth());
        translateBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(translateBtn);


        verticalLayout_4->addWidget(frameTranslate);

        frameRotate = new QFrame(groupBox);
        frameRotate->setObjectName(QStringLiteral("frameRotate"));
        frameRotate->setFrameShape(QFrame::Box);
        horizontalLayout_4 = new QHBoxLayout(frameRotate);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_5 = new QLabel(frameRotate);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setMinimumSize(QSize(50, 0));
        label_5->setSizeIncrement(QSize(0, 0));
        label_5->setIndent(0);

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(frameRotate);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setMinimumSize(QSize(50, 0));
        label_6->setSizeIncrement(QSize(0, 0));
        label_6->setIndent(0);

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new QLabel(frameRotate);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setMinimumSize(QSize(50, 0));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        xRolate = new QLineEdit(frameRotate);
        xRolate->setObjectName(QStringLiteral("xRolate"));
        sizePolicy5.setHeightForWidth(xRolate->sizePolicy().hasHeightForWidth());
        xRolate->setSizePolicy(sizePolicy5);

        gridLayout_4->addWidget(xRolate, 0, 1, 1, 1);

        yRolate = new QLineEdit(frameRotate);
        yRolate->setObjectName(QStringLiteral("yRolate"));
        sizePolicy5.setHeightForWidth(yRolate->sizePolicy().hasHeightForWidth());
        yRolate->setSizePolicy(sizePolicy5);

        gridLayout_4->addWidget(yRolate, 1, 1, 1, 1);

        angleRolate = new QLineEdit(frameRotate);
        angleRolate->setObjectName(QStringLiteral("angleRolate"));
        sizePolicy5.setHeightForWidth(angleRolate->sizePolicy().hasHeightForWidth());
        angleRolate->setSizePolicy(sizePolicy5);

        gridLayout_4->addWidget(angleRolate, 2, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_4);

        rolateBtn = new QPushButton(frameRotate);
        rolateBtn->setObjectName(QStringLiteral("rolateBtn"));
        sizePolicy1.setHeightForWidth(rolateBtn->sizePolicy().hasHeightForWidth());
        rolateBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(rolateBtn);


        verticalLayout_4->addWidget(frameRotate);

        frameScale = new QFrame(groupBox);
        frameScale->setObjectName(QStringLiteral("frameScale"));
        frameScale->setFrameShape(QFrame::Box);
        horizontalLayout_5 = new QHBoxLayout(frameScale);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_3 = new QLabel(frameScale);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setSizeIncrement(QSize(0, 0));
        label_3->setIndent(0);

        gridLayout_9->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(frameScale);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy4.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy4);
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setSizeIncrement(QSize(0, 0));
        label_4->setIndent(0);

        gridLayout_9->addWidget(label_4, 1, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_9);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        scaleX = new QLineEdit(frameScale);
        scaleX->setObjectName(QStringLiteral("scaleX"));
        QSizePolicy sizePolicy6(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(scaleX->sizePolicy().hasHeightForWidth());
        scaleX->setSizePolicy(sizePolicy6);

        gridLayout_8->addWidget(scaleX, 0, 1, 1, 1);

        sxScale = new QLineEdit(frameScale);
        sxScale->setObjectName(QStringLiteral("sxScale"));
        sizePolicy6.setHeightForWidth(sxScale->sizePolicy().hasHeightForWidth());
        sxScale->setSizePolicy(sizePolicy6);

        gridLayout_8->addWidget(sxScale, 0, 0, 1, 1);

        syScale = new QLineEdit(frameScale);
        syScale->setObjectName(QStringLiteral("syScale"));
        sizePolicy6.setHeightForWidth(syScale->sizePolicy().hasHeightForWidth());
        syScale->setSizePolicy(sizePolicy6);

        gridLayout_8->addWidget(syScale, 1, 0, 1, 1);

        scaleY = new QLineEdit(frameScale);
        scaleY->setObjectName(QStringLiteral("scaleY"));
        sizePolicy6.setHeightForWidth(scaleY->sizePolicy().hasHeightForWidth());
        scaleY->setSizePolicy(sizePolicy6);

        gridLayout_8->addWidget(scaleY, 1, 1, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_8);

        scaleBtn = new QPushButton(frameScale);
        scaleBtn->setObjectName(QStringLiteral("scaleBtn"));
        sizePolicy.setHeightForWidth(scaleBtn->sizePolicy().hasHeightForWidth());
        scaleBtn->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(scaleBtn);


        verticalLayout_4->addWidget(frameScale);

        frameReflect = new QFrame(groupBox);
        frameReflect->setObjectName(QStringLiteral("frameReflect"));
        frameReflect->setFrameShape(QFrame::Box);
        horizontalLayout_6 = new QHBoxLayout(frameReflect);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_8 = new QLabel(frameReflect);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy4.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy4);
        label_8->setMinimumSize(QSize(50, 0));
        label_8->setSizeIncrement(QSize(0, 0));
        label_8->setIndent(0);

        gridLayout_6->addWidget(label_8, 0, 0, 1, 1);

        xReflection = new QLineEdit(frameReflect);
        xReflection->setObjectName(QStringLiteral("xReflection"));
        sizePolicy5.setHeightForWidth(xReflection->sizePolicy().hasHeightForWidth());
        xReflection->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(xReflection, 0, 1, 1, 1);

        label_9 = new QLabel(frameReflect);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy4.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy4);
        label_9->setMinimumSize(QSize(50, 0));
        label_9->setSizeIncrement(QSize(0, 0));
        label_9->setIndent(0);

        gridLayout_6->addWidget(label_9, 1, 0, 1, 1);

        yReflection = new QLineEdit(frameReflect);
        yReflection->setObjectName(QStringLiteral("yReflection"));
        sizePolicy5.setHeightForWidth(yReflection->sizePolicy().hasHeightForWidth());
        yReflection->setSizePolicy(sizePolicy5);

        gridLayout_6->addWidget(yReflection, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_6);

        reflecBtn = new QPushButton(frameReflect);
        reflecBtn->setObjectName(QStringLiteral("reflecBtn"));
        sizePolicy1.setHeightForWidth(reflecBtn->sizePolicy().hasHeightForWidth());
        reflecBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_6->addWidget(reflecBtn);


        verticalLayout_4->addWidget(frameReflect);


        verticalLayout_2->addWidget(groupBox);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        stackedWidget->addWidget(stackedWidgetPage1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBoxMethod = new QGroupBox(page);
        groupBoxMethod->setObjectName(QStringLiteral("groupBoxMethod"));
        horizontalLayout_10 = new QHBoxLayout(groupBoxMethod);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        cavalier = new QRadioButton(groupBoxMethod);
        to2DMethod = new QButtonGroup(Window);
        to2DMethod->setObjectName(QStringLiteral("to2DMethod"));
        to2DMethod->addButton(cavalier);
        cavalier->setObjectName(QStringLiteral("cavalier"));
        cavalier->setChecked(true);

        horizontalLayout_10->addWidget(cavalier);

        cabinet = new QRadioButton(groupBoxMethod);
        to2DMethod->addButton(cabinet);
        cabinet->setObjectName(QStringLiteral("cabinet"));

        horizontalLayout_10->addWidget(cabinet);


        verticalLayout_5->addWidget(groupBoxMethod);

        groupBoxCube = new QGroupBox(page);
        groupBoxCube->setObjectName(QStringLiteral("groupBoxCube"));
        horizontalLayout_8 = new QHBoxLayout(groupBoxCube);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_12 = new QLabel(groupBoxCube);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 2, 0, 1, 1);

        cubeY = new QLineEdit(groupBoxCube);
        cubeY->setObjectName(QStringLiteral("cubeY"));

        gridLayout->addWidget(cubeY, 1, 1, 1, 1);

        cubeW = new QLineEdit(groupBoxCube);
        cubeW->setObjectName(QStringLiteral("cubeW"));

        gridLayout->addWidget(cubeW, 0, 3, 1, 1);

        cubeZ = new QLineEdit(groupBoxCube);
        cubeZ->setObjectName(QStringLiteral("cubeZ"));

        gridLayout->addWidget(cubeZ, 2, 1, 1, 1);

        cubeX = new QLineEdit(groupBoxCube);
        cubeX->setObjectName(QStringLiteral("cubeX"));

        gridLayout->addWidget(cubeX, 0, 1, 1, 1);

        label_13 = new QLabel(groupBoxCube);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 0, 2, 1, 1);

        label_11 = new QLabel(groupBoxCube);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_14 = new QLabel(groupBoxCube);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 1, 2, 1, 1);

        label_10 = new QLabel(groupBoxCube);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        cubeL = new QLineEdit(groupBoxCube);
        cubeL->setObjectName(QStringLiteral("cubeL"));

        gridLayout->addWidget(cubeL, 2, 3, 1, 1);

        label_15 = new QLabel(groupBoxCube);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 2, 2, 1, 1);

        cubeH = new QLineEdit(groupBoxCube);
        cubeH->setObjectName(QStringLiteral("cubeH"));

        gridLayout->addWidget(cubeH, 1, 3, 1, 1);


        horizontalLayout_8->addLayout(gridLayout);

        addCubeBtn = new QPushButton(groupBoxCube);
        addCubeBtn->setObjectName(QStringLiteral("addCubeBtn"));
        sizePolicy1.setHeightForWidth(addCubeBtn->sizePolicy().hasHeightForWidth());
        addCubeBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(addCubeBtn);


        verticalLayout_5->addWidget(groupBoxCube);

        groupBoxSphere = new QGroupBox(page);
        groupBoxSphere->setObjectName(QStringLiteral("groupBoxSphere"));
        horizontalLayout_9 = new QHBoxLayout(groupBoxSphere);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        zSphere = new QLineEdit(groupBoxSphere);
        zSphere->setObjectName(QStringLiteral("zSphere"));

        gridLayout_5->addWidget(zSphere, 2, 1, 1, 1);

        ySphere = new QLineEdit(groupBoxSphere);
        ySphere->setObjectName(QStringLiteral("ySphere"));

        gridLayout_5->addWidget(ySphere, 1, 1, 1, 1);

        label_16 = new QLabel(groupBoxSphere);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_5->addWidget(label_16, 0, 0, 1, 1);

        label_17 = new QLabel(groupBoxSphere);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_5->addWidget(label_17, 1, 0, 1, 1);

        label_18 = new QLabel(groupBoxSphere);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_5->addWidget(label_18, 2, 0, 1, 1);

        xSphere = new QLineEdit(groupBoxSphere);
        xSphere->setObjectName(QStringLiteral("xSphere"));

        gridLayout_5->addWidget(xSphere, 0, 1, 1, 1);

        label_19 = new QLabel(groupBoxSphere);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_5->addWidget(label_19, 0, 2, 1, 1);

        rShere = new QLineEdit(groupBoxSphere);
        rShere->setObjectName(QStringLiteral("rShere"));

        gridLayout_5->addWidget(rShere, 0, 3, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_5);

        addSphereBtn = new QPushButton(groupBoxSphere);
        addSphereBtn->setObjectName(QStringLiteral("addSphereBtn"));
        sizePolicy1.setHeightForWidth(addSphereBtn->sizePolicy().hasHeightForWidth());
        addSphereBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_9->addWidget(addSphereBtn);


        verticalLayout_5->addWidget(groupBoxSphere);

        groupBoxCube_2 = new QGroupBox(page);
        groupBoxCube_2->setObjectName(QStringLiteral("groupBoxCube_2"));
        horizontalLayout_12 = new QHBoxLayout(groupBoxCube_2);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_20 = new QLabel(groupBoxCube_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_7->addWidget(label_20, 2, 0, 1, 1);

        cylinderY = new QLineEdit(groupBoxCube_2);
        cylinderY->setObjectName(QStringLiteral("cylinderY"));

        gridLayout_7->addWidget(cylinderY, 1, 1, 1, 1);

        cylinderR = new QLineEdit(groupBoxCube_2);
        cylinderR->setObjectName(QStringLiteral("cylinderR"));

        gridLayout_7->addWidget(cylinderR, 0, 3, 1, 1);

        cylinderZ = new QLineEdit(groupBoxCube_2);
        cylinderZ->setObjectName(QStringLiteral("cylinderZ"));

        gridLayout_7->addWidget(cylinderZ, 2, 1, 1, 1);

        cylinderX = new QLineEdit(groupBoxCube_2);
        cylinderX->setObjectName(QStringLiteral("cylinderX"));

        gridLayout_7->addWidget(cylinderX, 0, 1, 1, 1);

        label_21 = new QLabel(groupBoxCube_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_7->addWidget(label_21, 0, 2, 1, 1);

        label_22 = new QLabel(groupBoxCube_2);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_7->addWidget(label_22, 1, 0, 1, 1);

        label_23 = new QLabel(groupBoxCube_2);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_7->addWidget(label_23, 1, 2, 1, 1);

        label_24 = new QLabel(groupBoxCube_2);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_7->addWidget(label_24, 0, 0, 1, 1);

        label_25 = new QLabel(groupBoxCube_2);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_7->addWidget(label_25, 2, 2, 1, 1);

        cylinderH = new QLineEdit(groupBoxCube_2);
        cylinderH->setObjectName(QStringLiteral("cylinderH"));

        gridLayout_7->addWidget(cylinderH, 1, 3, 1, 1);


        horizontalLayout_12->addLayout(gridLayout_7);

        addCylinder = new QPushButton(groupBoxCube_2);
        addCylinder->setObjectName(QStringLiteral("addCylinder"));
        sizePolicy1.setHeightForWidth(addCylinder->sizePolicy().hasHeightForWidth());
        addCylinder->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(addCylinder);


        verticalLayout_5->addWidget(groupBoxCube_2);

        clear3Dbtn = new QPushButton(page);
        clear3Dbtn->setObjectName(QStringLiteral("clear3Dbtn"));

        verticalLayout_5->addWidget(clear3Dbtn);

        verticalSpacer = new QSpacerItem(20, 283, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        openSceneBtn = new QPushButton(page_2);
        openSceneBtn->setObjectName(QStringLiteral("openSceneBtn"));

        verticalLayout_6->addWidget(openSceneBtn);

        playBtn = new QPushButton(page_2);
        playBtn->setObjectName(QStringLiteral("playBtn"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(playBtn->sizePolicy().hasHeightForWidth());
        playBtn->setSizePolicy(sizePolicy7);

        verticalLayout_6->addWidget(playBtn);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_26 = new QLabel(page_2);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_16->addWidget(label_26);

        delayValue = new QLineEdit(page_2);
        delayValue->setObjectName(QStringLiteral("delayValue"));
        sizePolicy7.setHeightForWidth(delayValue->sizePolicy().hasHeightForWidth());
        delayValue->setSizePolicy(sizePolicy7);

        horizontalLayout_16->addWidget(delayValue);


        verticalLayout_6->addLayout(horizontalLayout_16);

        pauseAtEndRBtn = new QCheckBox(page_2);
        pauseAtEndRBtn->setObjectName(QStringLiteral("pauseAtEndRBtn"));
        pauseAtEndRBtn->setChecked(true);

        verticalLayout_6->addWidget(pauseAtEndRBtn);

        stopEachFrame = new QCheckBox(page_2);
        stopEachFrame->setObjectName(QStringLiteral("stopEachFrame"));

        verticalLayout_6->addWidget(stopEachFrame);

        showRuler = new QCheckBox(page_2);
        showRuler->setObjectName(QStringLiteral("showRuler"));
        showRuler->setChecked(true);

        verticalLayout_6->addWidget(showRuler);

        openFileName = new QLabel(page_2);
        openFileName->setObjectName(QStringLiteral("openFileName"));
        sizePolicy.setHeightForWidth(openFileName->sizePolicy().hasHeightForWidth());
        openFileName->setSizePolicy(sizePolicy);
        openFileName->setMinimumSize(QSize(0, 100));
        openFileName->setFrameShape(QFrame::Box);
        openFileName->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        openFileName->setWordWrap(false);

        verticalLayout_6->addWidget(openFileName);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        stackedWidget->addWidget(page_2);
        mySplitter->addWidget(stackedWidget);

        verticalLayout->addWidget(mySplitter);

        Window->setCentralWidget(centralWidget);
        QWidget::setTabOrder(cylinderX, cylinderY);
        QWidget::setTabOrder(cylinderY, cylinderZ);
        QWidget::setTabOrder(cylinderZ, cylinderR);
        QWidget::setTabOrder(cylinderR, cylinderH);
        QWidget::setTabOrder(cylinderH, addCylinder);
        QWidget::setTabOrder(addCylinder, changeColorBtn);
        QWidget::setTabOrder(changeColorBtn, fillColorBtn);
        QWidget::setTabOrder(fillColorBtn, deleteBtn);
        QWidget::setTabOrder(deleteBtn, clearSceneBtn);
        QWidget::setTabOrder(clearSceneBtn, dxTranslate);
        QWidget::setTabOrder(dxTranslate, dyTranslate);
        QWidget::setTabOrder(dyTranslate, translateBtn);
        QWidget::setTabOrder(translateBtn, xRolate);
        QWidget::setTabOrder(xRolate, yRolate);
        QWidget::setTabOrder(yRolate, angleRolate);
        QWidget::setTabOrder(angleRolate, rolateBtn);
        QWidget::setTabOrder(rolateBtn, scaleBtn);
        QWidget::setTabOrder(scaleBtn, xReflection);
        QWidget::setTabOrder(xReflection, yReflection);
        QWidget::setTabOrder(yReflection, reflecBtn);
        QWidget::setTabOrder(reflecBtn, cubeX);
        QWidget::setTabOrder(cubeX, cubeY);
        QWidget::setTabOrder(cubeY, cubeZ);
        QWidget::setTabOrder(cubeZ, cubeW);
        QWidget::setTabOrder(cubeW, cubeH);
        QWidget::setTabOrder(cubeH, cubeL);
        QWidget::setTabOrder(cubeL, addCubeBtn);
        QWidget::setTabOrder(addCubeBtn, xSphere);
        QWidget::setTabOrder(xSphere, ySphere);
        QWidget::setTabOrder(ySphere, zSphere);
        QWidget::setTabOrder(zSphere, rShere);
        QWidget::setTabOrder(rShere, addSphereBtn);
        QWidget::setTabOrder(addSphereBtn, verticalSlider);
        QWidget::setTabOrder(verticalSlider, cavalier);
        QWidget::setTabOrder(cavalier, cabinet);
        QWidget::setTabOrder(cabinet, clear3Dbtn);
        QWidget::setTabOrder(clear3Dbtn, playBtn);
        QWidget::setTabOrder(playBtn, lineBtn);
        QWidget::setTabOrder(lineBtn, circleBtn);
        QWidget::setTabOrder(circleBtn, rectBtn);
        QWidget::setTabOrder(rectBtn, tabWidget);
        QWidget::setTabOrder(tabWidget, elipBtn);
        QWidget::setTabOrder(elipBtn, graphicsView);

        retranslateUi(Window);

        tabWidget->setCurrentIndex(1);
        lineBtn->setDefault(false);
        rectBtn->setDefault(false);
        circleBtn->setDefault(false);
        elipBtn->setDefault(false);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Computer Graphic", Q_NULLPTR));
        lineBtn->setText(QApplication::translate("Window", "\320\233\320\270\320\275\320\270\321\217", Q_NULLPTR));
        rectBtn->setText(QApplication::translate("Window", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\320\275\320\270\320\272", Q_NULLPTR));
        circleBtn->setText(QApplication::translate("Window", "\320\232\321\200\321\203\320\263", Q_NULLPTR));
        elipBtn->setText(QApplication::translate("Window", "\320\255\320\273\320\270\320\277\321\201", Q_NULLPTR));
        selectBtn->setText(QApplication::translate("Window", "\320\222\321\213\320\264\320\265\320\273\320\270\321\202\321\214", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab3D), QApplication::translate("Window", "3D", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabFrame), QApplication::translate("Window", "Player", Q_NULLPTR));
        thicknessLabel->setText(QApplication::translate("Window", "5", Q_NULLPTR));
        mousePosLabel->setText(QString());
        changeColorBtn->setText(QApplication::translate("Window", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\206\320\262\320\265\321\202", Q_NULLPTR));
        fillColorBtn->setText(QApplication::translate("Window", "\320\227\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        deleteBtn->setText(QApplication::translate("Window", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", Q_NULLPTR));
        clearSceneBtn->setText(QApplication::translate("Window", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\200\320\260\320\261\320\276\321\207\321\203\321\216 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", Q_NULLPTR));
        addFrameBtn->setText(QApplication::translate("Window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\276\320\272\320\275\320\276", Q_NULLPTR));
        nextFrameBtn->setText(QApplication::translate("Window", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\265 \320\276\320\272\320\275\320\276", Q_NULLPTR));
        toTextFileBtn->setText(QApplication::translate("Window", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", Q_NULLPTR));
        readTextFileBtn->setText(QApplication::translate("Window", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Window", "\320\242\321\200\320\260\320\275\321\201\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", Q_NULLPTR));
        label->setText(QApplication::translate("Window", "dx", Q_NULLPTR));
        dxTranslate->setInputMask(QString());
        dxTranslate->setPlaceholderText(QString());
        label_2->setText(QApplication::translate("Window", "dy", Q_NULLPTR));
        translateBtn->setText(QApplication::translate("Window", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("Window", "x", Q_NULLPTR));
        label_6->setText(QApplication::translate("Window", "y", Q_NULLPTR));
        label_7->setText(QApplication::translate("Window", "angle", Q_NULLPTR));
        xRolate->setInputMask(QString());
        xRolate->setPlaceholderText(QString());
        rolateBtn->setText(QApplication::translate("Window", "\320\237\320\265\321\200\320\265\320\262\320\265\321\200\320\275\321\203\321\202\321\214", Q_NULLPTR));
        label_3->setText(QApplication::translate("Window", "Sx/x", Q_NULLPTR));
        label_4->setText(QApplication::translate("Window", "Sy/y", Q_NULLPTR));
        sxScale->setInputMask(QString());
        sxScale->setPlaceholderText(QString());
        scaleBtn->setText(QApplication::translate("Window", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214", Q_NULLPTR));
        label_8->setText(QApplication::translate("Window", "x", Q_NULLPTR));
        xReflection->setInputMask(QString());
        xReflection->setPlaceholderText(QString());
        label_9->setText(QApplication::translate("Window", "y", Q_NULLPTR));
        reflecBtn->setText(QApplication::translate("Window", "\320\236\321\202\321\200\320\260\320\267\320\270\321\202\321\214", Q_NULLPTR));
        groupBoxMethod->setTitle(QApplication::translate("Window", "Method", Q_NULLPTR));
        cavalier->setText(QApplication::translate("Window", "Cavalier", Q_NULLPTR));
        cabinet->setText(QApplication::translate("Window", "Cabinet", Q_NULLPTR));
        groupBoxCube->setTitle(QApplication::translate("Window", "\320\232\321\203\320\261", Q_NULLPTR));
        label_12->setText(QApplication::translate("Window", "z", Q_NULLPTR));
        label_13->setText(QApplication::translate("Window", "\320\250\320\270\321\200\320\270\320\275\320\260", Q_NULLPTR));
        label_11->setText(QApplication::translate("Window", "y", Q_NULLPTR));
        label_14->setText(QApplication::translate("Window", "\320\222\321\213\321\201\320\276\321\202\320\260", Q_NULLPTR));
        label_10->setText(QApplication::translate("Window", "x", Q_NULLPTR));
        label_15->setText(QApplication::translate("Window", "\320\224\320\273\320\270\320\275\320\260", Q_NULLPTR));
        addCubeBtn->setText(QApplication::translate("Window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        groupBoxSphere->setTitle(QApplication::translate("Window", "\320\241\321\204\320\265\321\200\320\260", Q_NULLPTR));
        label_16->setText(QApplication::translate("Window", "x", Q_NULLPTR));
        label_17->setText(QApplication::translate("Window", "y", Q_NULLPTR));
        label_18->setText(QApplication::translate("Window", "z", Q_NULLPTR));
        label_19->setText(QApplication::translate("Window", "\320\240\320\260\320\264\320\270\321\203\321\201", Q_NULLPTR));
        addSphereBtn->setText(QApplication::translate("Window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        groupBoxCube_2->setTitle(QApplication::translate("Window", "\320\246\320\270\320\273\320\270\320\275\320\264\321\200", Q_NULLPTR));
        label_20->setText(QApplication::translate("Window", "z", Q_NULLPTR));
        label_21->setText(QApplication::translate("Window", "\320\240\320\260\320\264\320\270\321\203\321\201", Q_NULLPTR));
        label_22->setText(QApplication::translate("Window", "y", Q_NULLPTR));
        label_23->setText(QApplication::translate("Window", "\320\222\321\213\321\201\320\276\321\202\320\260", Q_NULLPTR));
        label_24->setText(QApplication::translate("Window", "x", Q_NULLPTR));
        label_25->setText(QString());
        addCylinder->setText(QApplication::translate("Window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", Q_NULLPTR));
        clear3Dbtn->setText(QApplication::translate("Window", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", Q_NULLPTR));
        openSceneBtn->setText(QApplication::translate("Window", "Open", Q_NULLPTR));
        playBtn->setText(QApplication::translate("Window", "Play", Q_NULLPTR));
        label_26->setText(QApplication::translate("Window", "Delay (ms)", Q_NULLPTR));
        delayValue->setText(QApplication::translate("Window", "30", Q_NULLPTR));
        pauseAtEndRBtn->setText(QApplication::translate("Window", "Pause at the end", Q_NULLPTR));
        stopEachFrame->setText(QApplication::translate("Window", "Stop At each frame", Q_NULLPTR));
        showRuler->setText(QApplication::translate("Window", "Show ruler", Q_NULLPTR));
        openFileName->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
