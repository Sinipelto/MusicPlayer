#ifndef PLAYERWINDOW_HH
#define PLAYERWINDOW_HH

#include <QMainWindow>
#include <QTimer>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QMessageBox>

class PlayerWindow : public QMainWindow
{
    Q_OBJECT

public:
    PlayerWindow(QWidget *parent = 0);
    ~PlayerWindow();

private:
    void initDialog();

    QTimer* timer_;
    QDialog* dialog_;

    QHBoxLayout* hboxlayout_;

    QPushButton* closeButton_;
    QPushButton* saveButton_;

    QLabel* countLabel_;

    unsigned counter_;

private slots:
    void update();
    void openDialog();
};

#endif // PLAYERWINDOW_HH
