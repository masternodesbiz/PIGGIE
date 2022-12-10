// Copyright (c) 2019 The piggie developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLpiggieWIDGET_H
#define COINCONTROLpiggieWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlpiggieWidget;
}

class CoinControlpiggieWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlpiggieWidget(QWidget *parent = nullptr);
    ~CoinControlpiggieWidget();

private:
    Ui::CoinControlpiggieWidget *ui;
};

#endif // COINCONTROLpiggieWIDGET_H
