/********************************************************************************
** Form generated from reading UI file 'ellipseinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELLIPSEINFO_H
#define UI_ELLIPSEINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EllipseInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ellipsePointx;
    QLineEdit *ellipsePointy;
    QLabel *label_2;
    QLineEdit *ellipseRx;
    QLineEdit *ellipseRy;
    QPushButton *applyBtn;

    void setupUi(QFrame *EllipseInfo)
    {
        if (EllipseInfo->objectName().isEmpty())
            EllipseInfo->setObjectName(QStringLiteral("EllipseInfo"));
        EllipseInfo->resize(370, 90);
        EllipseInfo->setMaximumSize(QSize(370, 90));
        EllipseInfo->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(EllipseInfo);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(EllipseInfo);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ellipsePointx = new QLineEdit(EllipseInfo);
        ellipsePointx->setObjectName(QStringLiteral("ellipsePointx"));
        sizePolicy.setHeightForWidth(ellipsePointx->sizePolicy().hasHeightForWidth());
        ellipsePointx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ellipsePointx, 0, 1, 1, 1);

        ellipsePointy = new QLineEdit(EllipseInfo);
        ellipsePointy->setObjectName(QStringLiteral("ellipsePointy"));
        sizePolicy.setHeightForWidth(ellipsePointy->sizePolicy().hasHeightForWidth());
        ellipsePointy->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ellipsePointy, 0, 2, 1, 1);

        label_2 = new QLabel(EllipseInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        ellipseRx = new QLineEdit(EllipseInfo);
        ellipseRx->setObjectName(QStringLiteral("ellipseRx"));
        sizePolicy.setHeightForWidth(ellipseRx->sizePolicy().hasHeightForWidth());
        ellipseRx->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ellipseRx, 1, 1, 1, 1);

        ellipseRy = new QLineEdit(EllipseInfo);
        ellipseRy->setObjectName(QStringLiteral("ellipseRy"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ellipseRy->sizePolicy().hasHeightForWidth());
        ellipseRy->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(ellipseRy, 1, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        applyBtn = new QPushButton(EllipseInfo);
        applyBtn->setObjectName(QStringLiteral("applyBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(applyBtn->sizePolicy().hasHeightForWidth());
        applyBtn->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(applyBtn);


        retranslateUi(EllipseInfo);

        QMetaObject::connectSlotsByName(EllipseInfo);
    } // setupUi

    void retranslateUi(QFrame *EllipseInfo)
    {
        EllipseInfo->setWindowTitle(QApplication::translate("EllipseInfo", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("EllipseInfo", "Center", Q_NULLPTR));
        label_2->setText(QApplication::translate("EllipseInfo", " Radius", Q_NULLPTR));
        applyBtn->setText(QApplication::translate("EllipseInfo", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EllipseInfo: public Ui_EllipseInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELLIPSEINFO_H
