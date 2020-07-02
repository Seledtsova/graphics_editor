/********************************************************************************
** Form generated from reading UI file 'rectinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTINFO_H
#define UI_RECTINFO_H

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

QT_BEGIN_NAMESPACE

class Ui_RectInfo
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *rectEditBottomRightX;
    QLabel *label_4;
    QLineEdit *rectEditTopLeftY;
    QLineEdit *rectEditHeight;
    QLineEdit *rectEditWidth;
    QLineEdit *rectEditTopLeftX;
    QLineEdit *rectEditBottomRightY;
    QLabel *label_2;
    QPushButton *applyBtn;

    void setupUi(QFrame *RectInfo)
    {
        if (RectInfo->objectName().isEmpty())
            RectInfo->setObjectName(QStringLiteral("RectInfo"));
        RectInfo->resize(370, 90);
        RectInfo->setMinimumSize(QSize(0, 0));
        RectInfo->setMaximumSize(QSize(370, 90));
        RectInfo->setFrameShape(QFrame::Box);
        gridLayout_2 = new QGridLayout(RectInfo);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(RectInfo);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        rectEditBottomRightX = new QLineEdit(RectInfo);
        rectEditBottomRightX->setObjectName(QStringLiteral("rectEditBottomRightX"));
        sizePolicy.setHeightForWidth(rectEditBottomRightX->sizePolicy().hasHeightForWidth());
        rectEditBottomRightX->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rectEditBottomRightX, 1, 1, 1, 1);

        label_4 = new QLabel(RectInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        rectEditTopLeftY = new QLineEdit(RectInfo);
        rectEditTopLeftY->setObjectName(QStringLiteral("rectEditTopLeftY"));
        sizePolicy.setHeightForWidth(rectEditTopLeftY->sizePolicy().hasHeightForWidth());
        rectEditTopLeftY->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rectEditTopLeftY, 0, 2, 1, 1);

        rectEditHeight = new QLineEdit(RectInfo);
        rectEditHeight->setObjectName(QStringLiteral("rectEditHeight"));
        rectEditHeight->setEnabled(false);
        sizePolicy.setHeightForWidth(rectEditHeight->sizePolicy().hasHeightForWidth());
        rectEditHeight->setSizePolicy(sizePolicy);
        rectEditHeight->setMaximumSize(QSize(370, 90));

        gridLayout->addWidget(rectEditHeight, 2, 2, 1, 1);

        rectEditWidth = new QLineEdit(RectInfo);
        rectEditWidth->setObjectName(QStringLiteral("rectEditWidth"));
        rectEditWidth->setEnabled(false);
        sizePolicy.setHeightForWidth(rectEditWidth->sizePolicy().hasHeightForWidth());
        rectEditWidth->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rectEditWidth, 2, 1, 1, 1);

        rectEditTopLeftX = new QLineEdit(RectInfo);
        rectEditTopLeftX->setObjectName(QStringLiteral("rectEditTopLeftX"));
        sizePolicy.setHeightForWidth(rectEditTopLeftX->sizePolicy().hasHeightForWidth());
        rectEditTopLeftX->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rectEditTopLeftX, 0, 1, 1, 1);

        rectEditBottomRightY = new QLineEdit(RectInfo);
        rectEditBottomRightY->setObjectName(QStringLiteral("rectEditBottomRightY"));
        sizePolicy.setHeightForWidth(rectEditBottomRightY->sizePolicy().hasHeightForWidth());
        rectEditBottomRightY->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rectEditBottomRightY, 1, 2, 1, 1);

        label_2 = new QLabel(RectInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        applyBtn = new QPushButton(RectInfo);
        applyBtn->setObjectName(QStringLiteral("applyBtn"));
        sizePolicy.setHeightForWidth(applyBtn->sizePolicy().hasHeightForWidth());
        applyBtn->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(applyBtn, 0, 1, 1, 1);

        QWidget::setTabOrder(rectEditTopLeftX, rectEditTopLeftY);
        QWidget::setTabOrder(rectEditTopLeftY, rectEditBottomRightX);
        QWidget::setTabOrder(rectEditBottomRightX, rectEditBottomRightY);
        QWidget::setTabOrder(rectEditBottomRightY, applyBtn);
        QWidget::setTabOrder(applyBtn, rectEditHeight);
        QWidget::setTabOrder(rectEditHeight, rectEditWidth);

        retranslateUi(RectInfo);

        QMetaObject::connectSlotsByName(RectInfo);
    } // setupUi

    void retranslateUi(QFrame *RectInfo)
    {
        RectInfo->setWindowTitle(QApplication::translate("RectInfo", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("RectInfo", "Top left (X, Y)", Q_NULLPTR));
        label_4->setText(QApplication::translate("RectInfo", "Bottom right (X,Y)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("RectInfo", "<html><head/><body><p>Rectangel Size ( Width, Height)</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("RectInfo", "Size (W, H)", Q_NULLPTR));
        applyBtn->setText(QApplication::translate("RectInfo", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RectInfo: public Ui_RectInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTINFO_H
