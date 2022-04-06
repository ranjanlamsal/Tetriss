#ifndef TETRISWINDOW_H
#define TETRISWINDOW_H

#include "precompiledheader.h"
#include "tetrixboard.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TetrisWindow; }
QT_END_NAMESPACE

class QLCDNumber;
class QLabel;
class QPushButton;

class TetrisWindow : public QWidget
{
    Q_OBJECT

public:
    TetrisWindow(QWidget *parent = nullptr);
    ~TetrisWindow();

private:
    QLabel *createLabel(const QString &text);

    TetrixBoard *board;
    QLabel *nextPieceLabel;
    QLCDNumber *scoreLcd;
    QLCDNumber *levelLcd;
    QLCDNumber *linesLcd;
    QPushButton *startButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;
    Ui::TetrisWindow *ui;
};
#endif // TETRISWINDOW_H
