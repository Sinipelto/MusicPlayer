#ifndef PLAYERWINDOW_HH
#define PLAYERWINDOW_HH

#include <QMainWindow>

class PlayerWindow : public QMainWindow
{
    Q_OBJECT

public:
    PlayerWindow(QWidget *parent = 0);
    ~PlayerWindow();
};

#endif // PLAYERWINDOW_HH
