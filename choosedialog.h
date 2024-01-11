#pragma once

#include <QDialog>
#include <QHash>

#include <cmd.h>

namespace Ui
{
class chooseDialog;
}

class chooseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit chooseDialog(QWidget *parent = nullptr);
    ~chooseDialog();

    QString selection();

private slots:
    void textSearch_textChanged();

private:
    Ui::chooseDialog *ui;
    Cmd *cmd;
    QHash<QString, QString> localeLib;
    QStringList localeList;

    void setup();
    void buildLocaleList();
};
