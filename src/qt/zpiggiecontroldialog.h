// Copyright (c) 2017-2019 The piggie developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef zpiggieCONTROLDIALOG_H
#define zpiggieCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zpiggie/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class zpiggieControlDialog;
}

class CzpiggieControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CzpiggieControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CzpiggieControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CzpiggieControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class zpiggieControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit zpiggieControlDialog(QWidget *parent);
    ~zpiggieControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::zpiggieControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CzpiggieControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // zpiggieCONTROLDIALOG_H
