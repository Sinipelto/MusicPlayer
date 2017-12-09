#include "playerwindow.hh"
#include <QDialog>

PlayerWindow::PlayerWindow(QWidget *parent)
    : QMainWindow(parent),
      timer_(new QTimer),
      dialog_(new QDialog),
      hboxlayout_(new QHBoxLayout),
      closeButton_(new QPushButton),
      saveButton_(new QPushButton),
      countLabel_(new QLabel),
      counter_(0)
{   
    setCentralWidget(new QWidget(this));

    hboxlayout_->addWidget(closeButton_);
    hboxlayout_->addWidget(saveButton_);

    closeButton_->setText("Close Window");
    saveButton_->setText("Test");

    centralWidget()->setLayout(hboxlayout_);

    connect(this->closeButton_, &QPushButton::clicked, this, &PlayerWindow::close);
    connect(this->timer_, &QTimer::timeout, this, &PlayerWindow::update);
    connect(this->saveButton_, &QPushButton::clicked, this, &PlayerWindow::openDialog);

    initDialog();

    timer_->start(1000);
}

PlayerWindow::~PlayerWindow()
{
    delete timer_;
    delete dialog_;
    delete closeButton_;
    delete saveButton_;
    delete hboxlayout_;
    delete countLabel_;
}

void PlayerWindow::initDialog()
{
    dialog_->setFixedSize(QSize(200, 300));
}

void PlayerWindow::update()
{
    countLabel_->setText(QString::number(counter_));
    counter_++;
}

void PlayerWindow::openDialog()
{
    QMessageBox* box = new QMessageBox(this);

    box->setText("Question");
    box->setStandardButtons(QMessageBox::Cancel | QMessageBox::Ok);
    box->setButtonText(QMessageBox::Ok, "Bad button");
    box->setDefaultButton(QMessageBox::Cancel);

    int res = box->exec();

    if (res == QMessageBox::Ok) {
        delete box;
        close();
    }
    else {
        delete box;
    }
}
