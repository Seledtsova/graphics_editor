/********************************************************************************
** Form generated from reading UI file 'circleinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCLEINFO_H
#define UI_CIRCLEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CircleInfo
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *applyBtn;
    QLabel *label_2;
    QLineEdit *circlePoint1;
    QLineEdit *circlePoint2;
    QLineEdit *circleRadius;
    QLabel *label;

    void setupUi(QFrame *CircleInfo)
    {
        if (CircleInfo->objectName().isEmpty())
            CircleInfo->setObjectName(QStringLiteral("CircleInfo"));
        CircleInfo->setEnabled(true);
        CircleInfo->resize(265, 90);
        CircleInfo->setMaximumSize(QSize(370, 90));
        CircleInfo->setFrameShape(QFrame::WinPanel);
        verticalLayout = new QVBoxLayout(CircleInfo);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        applyBtn = new QPushButton(CircleInfo);
        applyBtn->setObjectName(QStringLiteral("applyBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(applyBtn->sizePolicy().hasHeightForWidth());
        applyBtn->setSizePolicy(sizePolicy);

        gridLayout->addWidget(applyBtn, 0, 3, 4, 1);

        label_2 = new QLabel(CircleInfo);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 2, 1);

        circlePoint1 = new QLineEdit(CircleInfo);
        circlePoint1->setObjectName(QStringLiteral("circlePoint1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(circlePoint1->sizePolicy().hasHeightForWidth());
        circlePoint1->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(circlePoint1, 0, 1, 2, 1);

        circlePoint2 = new QLineEdit(CircleInfo);
        circlePoint2->setObjectName(QStringLiteral("circlePoint2"));
        sizePolicy1.setHeightForWidth(circlePoint2->sizePolicy().hasHeightForWidth());
        circlePoint2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(circlePoint2, 0, 2, 2, 1);

        circleRadius = new QLineEdit(CircleInfo);
        circleRadius->setObjectName(QStringLiteral("circleRadius"));
        sizePolicy1.setHeightForWidth(circleRadius->sizePolicy().hasHeightForWidth());
        circleRadius->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(circleRadius, 2, 1, 2, 2);

        label = new QLabel(CircleInfo);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label, 0, 0, 2, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(CircleInfo);

        QMetaObject::connectSlotsByName(CircleInfo);
    } // setupUi

    void retranslateUi(QFrame *CircleInfo)
    {
        CircleInfo->setWindowTitle(QApplication::translate("CircleInfo", "Frame", Q_NULLPTR));
        applyBtn->setText(QApplication::translate("CircleInfo", "Apply", Q_NULLPTR));
        label_2->setText(QApplication::translate("CircleInfo", " Radius", Q_NULLPTR));
        label->setText(QApplication::translate("CircleInfo", "Center (x,y)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CircleInfo: public Ui_CircleInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLEINFO_H
