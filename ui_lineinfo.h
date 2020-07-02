/********************************************************************************
** Form generated from reading UI file 'lineinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEINFO_H
#define UI_LINEINFO_H

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

class Ui_LineInfo
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditPoint2x;
    QLabel *label_2;
    QLineEdit *lineEditPoint1y;
    QLineEdit *lineEditPoint2y;
    QLineEdit *lineEditPoint1x;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *applyBtn;

    void setupUi(QFrame *LineInfo)
    {
        if (LineInfo->objectName().isEmpty())
            LineInfo->setObjectName(QStringLiteral("LineInfo"));
        LineInfo->resize(370, 89);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LineInfo->sizePolicy().hasHeightForWidth());
        LineInfo->setSizePolicy(sizePolicy);
        LineInfo->setMinimumSize(QSize(0, 0));
        LineInfo->setMaximumSize(QSize(370, 90));
        LineInfo->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(LineInfo);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(LineInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::Box);
        label->setLineWidth(1);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEditPoint2x = new QLineEdit(LineInfo);
        lineEditPoint2x->setObjectName(QStringLiteral("lineEditPoint2x"));

        gridLayout->addWidget(lineEditPoint2x, 2, 1, 1, 1);

        label_2 = new QLabel(LineInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEditPoint1y = new QLineEdit(LineInfo);
        lineEditPoint1y->setObjectName(QStringLiteral("lineEditPoint1y"));

        gridLayout->addWidget(lineEditPoint1y, 1, 2, 1, 1);

        lineEditPoint2y = new QLineEdit(LineInfo);
        lineEditPoint2y->setObjectName(QStringLiteral("lineEditPoint2y"));

        gridLayout->addWidget(lineEditPoint2y, 2, 2, 1, 1);

        lineEditPoint1x = new QLineEdit(LineInfo);
        lineEditPoint1x->setObjectName(QStringLiteral("lineEditPoint1x"));

        gridLayout->addWidget(lineEditPoint1x, 1, 1, 1, 1);

        label_3 = new QLabel(LineInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFrameShape(QFrame::Box);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(LineInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFrameShape(QFrame::Box);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        applyBtn = new QPushButton(LineInfo);
        applyBtn->setObjectName(QStringLiteral("applyBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(applyBtn->sizePolicy().hasHeightForWidth());
        applyBtn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(applyBtn);


        retranslateUi(LineInfo);

        QMetaObject::connectSlotsByName(LineInfo);
    } // setupUi

    void retranslateUi(QFrame *LineInfo)
    {
        LineInfo->setWindowTitle(QApplication::translate("LineInfo", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("LineInfo", "Point 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("LineInfo", "Point 2", Q_NULLPTR));
        label_3->setText(QApplication::translate("LineInfo", "x", Q_NULLPTR));
        label_4->setText(QApplication::translate("LineInfo", "y", Q_NULLPTR));
        applyBtn->setText(QApplication::translate("LineInfo", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LineInfo: public Ui_LineInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEINFO_H
