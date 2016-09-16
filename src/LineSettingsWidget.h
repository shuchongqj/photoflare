#ifndef LINESETTINGSWIDGET_H
#define LINESETTINGSWIDGET_H

/*

  Widget for paintbrush settings.

*/

#include <QWidget>

namespace Ui {
class LineSettingsWidget;
}

class LineSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LineSettingsWidget(QWidget *parent = 0);
    ~LineSettingsWidget();

    int width();
    int opacity();
    bool antialias();
    int style();
signals:
    void settingsChanged();

private slots:

private:

    Ui::LineSettingsWidget *ui;
};

#endif // LINESETTINGSWIDGET_H