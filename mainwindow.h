#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

#include <QTimer>    //定时器
#include <QDateTime> //获取系统时间
#include <QDebug>    //调试程序
#include <QSound>    //播放音效
#include <QUdpSocket> //网络通信 udp
#include <QCloseEvent>
#include <QSettings>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initLcdNumber();//初始化lcdNumber
    void initPushButton();//初始化按钮
    void initUdpSocket();//初始化socket
    void initIpAndPort();//初始化IP和端口号输入提示字体颜色
    void initProgessBar();//初始化进度条及报警按钮
    void initSclider();//初始化阈值滑块相关
    void initSoundTimer();//初始化音效对象和警告定时器
    void initBackGround();//初始化背景
    void initLineEdit();//初始化LineEdit
//    void readsettings(); //读取设置
//    void writesettings();//写入设置

    void closeEvent(QCloseEvent* event);//关闭窗口

private slots:
    void slotUpdateTime();//更新显示的时间

    void on_pushButtonBlue_clicked();
    void on_pushButtonBuzzer_clicked();
    void on_pushButtonGreen_clicked();
    void on_pushButtonFan_clicked();
    void on_horizontalSliderTemp_valueChanged(int value);
    void on_horizontalSliderHum_valueChanged(int value);
    void on_horizontalSliderLight_valueChanged(int value);
    void slotRecv();//接收数据的槽函数
    void slotTempWarn();
    void slotHumWarn();
    void slotLightWarn();

private:
    Ui::MainWindow *ui;
    QString lightIP;
    QString tempHumIP;
    QString fanIP;
    QString lightPort;
    QString tempHumPort;
    QString fanPort;
    QString buzzerIP;
    QString buzzerPort;
    QTimer* timer;//控制显示当前时间的定时器
    bool flagBlue; //切换开关灯的标志位
    bool flagGreen;
    bool flagYellow;
    bool flagFan;
    QUdpSocket* socket;//用于网络编程 udp通信的套接字对象
    int maxTemp;//温度阈值
    int maxHum;//湿度阈值
    int maxLight;//光照强度阈值
    QSound* soundTempWarn; //温度
    QSound* soundHumWarn;  //湿度
    QSound* soundLightWarn; //光照强度
    QTimer* timerTempWarn; //温度报警定时器
    QTimer* timerHumWarn; //湿度报警定时器
    QTimer* timerLightWarn; //光照报警定时器
    bool flagTempWarn;
    bool flagHumWarn;
    bool flagLightWarn;
};

#endif // MAINWINDOW_H
