#ifndef CBUILTINDLG_H
#define CBUILTINDLG_H

#include <QDialog>
#include <QtWidgets>
#include <QPushButton>
#include <QTextEdit>

class CBuiltinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuiltinDlg(QWidget *parent = nullptr);
    ~CBuiltinDlg();
private:
    QTextEdit *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
    QPushButton *testPushBtn;
private slots:
    void doPushBth();
    void dotextcolor();
};
#endif // CBUILTIMDLG_H
