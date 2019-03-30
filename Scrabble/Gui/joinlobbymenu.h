#ifndef JOINLOBBYMENU_H
#define JOINLOBBYMENU_H

#include <QWizardPage>

namespace Ui {
class JoinLobbyMenu;
}

class JoinLobbyMenu : public QWizardPage
{
    Q_OBJECT

public:
    explicit JoinLobbyMenu(QWidget *parent = 0);
    ~JoinLobbyMenu();

private slots:
    void on_lineEdit_editingFinished();

private:
    Ui::JoinLobbyMenu *ui;
};

#endif // JOINLOBBYMENU_H