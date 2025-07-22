#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    flagBlue(false),
    flagGreen(false),
    flagYellow(false),
    flagFan(false),
    maxTemp(100),
    maxHum(100),
    maxLight(100),
    flagTempWarn(true),
    flagHumWarn(true),
    flagLightWarn(true)
{
    ui->setupUi(this);
    initLineEdit();//初始化LineEdit
    initLcdNumber();//调用LcdNumber初始化函数
//    initPushButton();//调用初始化按钮函数
    initUdpSocket();//调用初始化socket函数
//    initIpAndPort();//调用初始化IP地址和端口号
    initProgessBar();//调用初始化进度条和按钮等
//    initSclider();//初始化阈值滑块相关的
    initSoundTimer();//初始化音效和定时器
    initBackGround();//初始化背景

}
MainWindow::~MainWindow()
{
    delete ui;
}
////读取设置
//void MainWindow::readsettings()
//{
//    QSettings* settings = new QSettings("HQYJ","current",this);
//    lightIP = settings->value("curLightIP","192.168.1.1").toString();
//    tempHumIP = settings->value("curTempHumIP","192.168.1.1").toString();
//    fanIP = settings->value("curFanIP","192.168.1.1").toString();
//    lightPort = settings->value("curLightPort","20000").toString();
//    tempHumPort = settings->value("curTempHumPort","20000").toString();
//    fanPort = settings->value("curFanPort","20000").toString();
//    maxTemp = settings->value("curMaxTemp",100).toInt();
//    maxHum = settings->value("curMaxHum",100).toInt();
//    maxLight = settings->value("curMaxLight",100).toInt();
//}

//写入设置
//void MainWindow::writesettings()
//{
//    QSettings* settings = new QSettings("HQYJ","current",this);
//    settings->setValue("curLightIP",ui->lineEditLightIP->text());
//    settings->setValue("curTempHumIP",ui->lineEditTempHumIP->text());
//    settings->setValue("curFanIP",ui->lineEditFanIP->text());
//    settings->setValue("curLightPort",ui->lineEditLightPort->text());
//    settings->setValue("curTempHumPort",ui->lineEditTempHumPort->text());
//    settings->setValue("curFanPort",ui->lineEditFanPort->text());
//    settings->setValue("curMaxTemp",ui->horizontalSliderTemp->value());
//    settings->setValue("curMaxHum",ui->horizontalSliderHum->value());
//    settings->setValue("curMaxLight",ui->horizontalSliderLight->value());
//}
void MainWindow::closeEvent(QCloseEvent* event)//关闭窗口
{
//    writesettings();
}

//初始化lcdNumber
void MainWindow::initLcdNumber()
{
    //设置lcdNumber显示的位数 20位
    ui->lcdNumber->setDigitCount(20);
    //获取当前的系统时间
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    //显示在LCDNumber上
    ui->lcdNumber->display(time);
    //设置字体颜色
//    ui->lcdNumber->setStyleSheet("color: rgb(34,100,100);");

    //创建定时器对象
    timer = new QTimer();
    timer->start(1000);//启动定时器，间隔1s，产生timeout()
    connect(timer, SIGNAL(timeout()),this,SLOT(slotUpdateTime()));
}
//初始化按钮
void MainWindow::initPushButton()
{
    //初始化按钮的字体颜色和背景颜色
    ui->pushButtonBlue->setStyleSheet("color: blue; border-image: url(:/images/bulb_off.png);");
    ui->pushButtonGreen->setStyleSheet("color: green; border-image: url(:/images/bulb_off.png);");
    ui->pushButtonBuzzer->setStyleSheet("color: yellow; border-image: url(:/images/bulb_off.png);");
    ui->pushButtonFan->setStyleSheet("color: orange; border-image: url(:/images/fan_off.png);");
}

//初始化socket
void MainWindow::initUdpSocket()
{
    //创建一个对象
    socket = new QUdpSocket;
    //绑定自己的IP地址和端口号 IP 192.168.31.109  端口号 8080
//    socket->bind(QHostAddress("192.168.31.213"),8080);
    socket->bind(8080,QUdpSocket::ShareAddress|QAbstractSocket::ReuseAddressHint);

    //将信号与槽绑定
    connect(socket, SIGNAL(readyRead()),this,SLOT(slotRecv()));
}

//初始化IP和端口号
void MainWindow::initIpAndPort()
{
    //设置IP和端口号提示文字的字体颜色

    ui->labelBuzzerIP->setStyleSheet("color: green");
    ui->labelFanIP->setStyleSheet("color: orange");
}

//初始化进度条及报警按钮
void MainWindow::initProgessBar()
{
    //设置温度一行的控件显示
//    ui->labelTemp->setStyleSheet("color: yellow");
    ui->progressBarTemp->setStyleSheet(
                               "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                               "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
    ui->pushButtonTemp->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
    //设置湿度一行的控件显示
//    ui->labelHum->setStyleSheet("color: green");
    ui->progressBarHum->setStyleSheet(
                               "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                               "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
    ui->pushButtonHum->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
    //设置光照强度一行的控件显示
//    ui->labelLight->setStyleSheet("color: orange");
    ui->progressBarLight->setStyleSheet(
                               "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                               "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
    ui->pushButtonLight->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
}
//初始化阈值滑块相关
void MainWindow::initSclider()
{
    QString str = QString("温度阈值:%1").arg(maxTemp);
    ui->labelMaxTemp->setText(str);//设置显示的内容
    ui->labelMaxTemp->setStyleSheet("color:blue");//显示阈值字体颜色
    ui->horizontalSliderTemp->setValue(maxTemp);//设置滑块的初始位置

    str = QString("湿度阈值:%1").arg(maxHum);
    ui->labelMaxHum->setText(str);//设置显示的内容
    ui->labelMaxHum->setStyleSheet("color:green");//显示阈值字体颜色
    ui->horizontalSliderHum->setValue(maxHum);//设置滑块的初始位置

    str = QString("光照阈值:%1").arg(maxLight);
    ui->labelMaxLight->setText(str);//设置显示的内容
    ui->labelMaxLight->setStyleSheet("color:orange");//显示阈值字体颜色
    ui->horizontalSliderLight->setValue(maxLight);//设置滑块的初始位置
}

void MainWindow::initSoundTimer()
{
    //创建音效对象，并设置循环播放
    soundTempWarn = new QSound(":sound/tempwarn.wav",this);
    soundHumWarn = new QSound(":sound/humwarn.wav",this);
    soundLightWarn = new QSound(":sound/lightwarn.wav",this);
    soundTempWarn->setLoops(-1);//-1 循环播放
    soundHumWarn->setLoops(-1);
    soundLightWarn->setLoops(-1);
    //创建定时器对象
    timerTempWarn = new QTimer;
    timerHumWarn = new QTimer;
    timerLightWarn = new QTimer;
    //将信号与槽绑定
    connect(timerTempWarn, SIGNAL(timeout()),this, SLOT(slotTempWarn()));
    connect(timerHumWarn, SIGNAL(timeout()),this,SLOT(slotHumWarn()));
    connect(timerLightWarn,SIGNAL(timeout()),this,SLOT(slotLightWarn()));

}

//初始化背景
void MainWindow::initBackGround()
{
//    this->setFixedSize(500,740);
//    ui->labelBackground->resize(QSize(this->width(),this->height()));
//    ui->labelBackground->lower();//置于底层
//    ui->labelBackground->setPixmap(QPixmap(":images/background.jpg"));
//    ui->labelBackground->setScaledContents(true);//自适应空间大小
//    ui->labelBackground->setGeometry(QRect(0,0,this->width(),this->height()));//设置label的起始位置下标
}
//初始化LineEdit
void MainWindow::initLineEdit()
{
//    readsettings();//读取设置
     ui->lineEditFanIP->setStyleSheet("QLineEdit {"
                            "border-radius: 5px;" // 设置圆角的半径
                            "border: 1px solid #000000;" // 设置边框
                            "padding: 2px;" // 内边距
                            "}"
                            "QLineEdit:focus {"
                            "border: 2px solid #0000FF;" // 获得焦点时的边框样式
                            "}");
     ui->lineEditBuzzerIP->setStyleSheet("QLineEdit {"
                            "border-radius: 5px;" // 设置圆角的半径
                            "border: 1px solid #000000;" // 设置边框
                            "padding: 2px;" // 内边距
                            "}"
                            "QLineEdit:focus {"
                            "border: 2px solid #0000FF;" // 获得焦点时的边框样式
                            "}");
    ui->lineEditFanIP->setText(fanIP);
    ui->lineEditBuzzerIP->setText(buzzerIP);
}

//当定时器timer，每隔1s发送一个timeout信号，绑定的槽函数
void MainWindow::slotUpdateTime()
{
    QSound::play(":sound/time.wav");
    //获取当前的系统时间
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    //显示在LCDNumber上
    ui->lcdNumber->display(time);
}
//点击蓝灯，绑定槽函数
void MainWindow::on_pushButtonBlue_clicked()
{
    QSound::play(":sound/clicked.wav");//播放点击音效
    if(!flagBlue)
    {
         ui->pushButtonBlue->setStyleSheet("color: blue; border-image: url(:/images/ledblue.png);");
         //给STM32，发送一个开LED蓝的命令,我们需要知道STM32的IP地址和端口号
         //LED 控制LED  B blue 蓝  1 开灯 0关灯
         //单片机的IP地址是  192.168.31.56 单片机绑定的端口号是 20000
         socket->writeDatagram("LEDB1", QHostAddress(ui->lineEditFanIP->text()),8081);
    }
    else
    {
         ui->pushButtonBlue->setStyleSheet("color: blue; border-image: url(:/images/ledblack.png);");
         socket->writeDatagram("LEDB0", QHostAddress(ui->lineEditFanIP->text()),8081);
    }
    flagBlue = !flagBlue;//切换开关的标志位
}

void MainWindow::on_pushButtonBuzzer_clicked()
{
     QSound::play(":sound/clicked.wav");//播放点击音效
    if(!flagYellow)
    {
         ui->pushButtonBuzzer->setStyleSheet("color: yellow; border-image: url(:/images/buzzeron.png);");
         socket->writeDatagram("LEDY1", QHostAddress(ui->lineEditBuzzerIP->text()),8081);
    }
    else
    {
         ui->pushButtonBuzzer->setStyleSheet("color: yellow; border-image: url(:/images/buzzeroff.png);");
          socket->writeDatagram("LEDY0", QHostAddress(ui->lineEditBuzzerIP->text()),8081);
    }
    flagYellow = !flagYellow;//切换开关的标志位
}

void MainWindow::on_pushButtonGreen_clicked()
{
     QSound::play(":sound/clicked.wav");
    if(!flagGreen)
    {
         ui->pushButtonGreen->setStyleSheet("color: green; border-image: url(:/images/ledgreen.png);");
         socket->writeDatagram("LEDG1", QHostAddress(ui->lineEditFanIP->text()),8081);
    }
    else
    {
         ui->pushButtonGreen->setStyleSheet("color: green; border-image: url(:/images/ledblack.png);");
         socket->writeDatagram("LEDG0", QHostAddress(ui->lineEditFanIP->text()),8081);
    }
    flagGreen = !flagGreen;//切换开关的标志位
}

//"ht,30,40"  ht 温湿度 30温度 湿度40
//"light,70" 光照强度


void MainWindow::on_pushButtonFan_clicked()
{
     QSound::play(":sound/clicked.wav");
    if(!flagFan)
    {
         ui->pushButtonFan->setStyleSheet("color: orange; border-image: url(:/images/fanon.png);");
         socket->writeDatagram("FAN1", QHostAddress(ui->lineEditFanIP->text()),8081);
    }
    else
    {
         ui->pushButtonFan->setStyleSheet("color: orange; border-image: url(:/images/fanoff.png);");
         socket->writeDatagram("FAN0",QHostAddress(ui->lineEditFanIP->text()),8081);
    }
    flagFan = !flagFan;//切换开关的标志位
}
//温度阈值发生变化，对应执行的槽函数
void MainWindow::on_horizontalSliderTemp_valueChanged(int value)
{
    QSound::play(":sound/move.wav");
    maxTemp = value; //将滑块的值，存储到保存温度阈值的变量中
    QString str = QString("温度阈值:%1").arg(maxTemp);
    ui->labelMaxTemp->setText(str);//设置显示的内容
}
//温度阈值发生变化，对应执行的槽函数
void MainWindow::on_horizontalSliderHum_valueChanged(int value)
{
    QSound::play(":sound/move.wav");
    maxHum = value; //将滑块的值，存储到保存湿度阈值的变量中
    QString str = QString("湿度阈值:%1").arg(maxHum);
    ui->labelMaxHum->setText(str);//设置显示的内容
}
//光照阈值发生变化，对应执行的槽函数
void MainWindow::on_horizontalSliderLight_valueChanged(int value)
{
    QSound::play(":sound/move.wav");
    maxLight = value; //将滑块的值，存储到保存湿度阈值的变量中
    QString str = QString("光照阈值:%1").arg(maxLight);
    ui->labelMaxLight->setText(str);//设置显示的内容
}
//接收数据的槽函数
void MainWindow::slotRecv()
{
    QString s;
    QByteArray data;//用来保存接收到的数据
    QHostAddress client_Addr;
    quint16 port;
    while(socket->hasPendingDatagrams())//有未接收的数据
    {
        //重置data大小和数据报大小一样
        data.resize(socket->pendingDatagramSize());
        //读取数据
        socket->readDatagram(data.data(), data.size(),&client_Addr,&port);

        //将字节数组转换成字符串
        s = QVariant(data).toString();
        //调试，打印接收到的数据
        //"ht,35.5,67.72" 或者 "light,9.4"
        qDebug()<< s;
        //s "ht,35.5,67.72"" 将s字符串以,为分隔，分隔成3个字符串
        // 0    1    2
        //"ht" "35.5" "67.72"
        QStringList list = s.split(",");
        if(s.startsWith("th"))//如果上传上来的数据以ht开头说明是温湿度
        {
            tempHumIP = client_Addr.toString();
            tempHumPort = QString("%1").arg(port);
            //qDebug() << list[0] << list[1] << list[2];
            //将温度字符串 和 湿度字符串数值，转换为对应的浮点数
            int temp = list[1].toDouble();
            int hum = list[2].toDouble();
            //将温度和湿度显示在进度条上
            ui->progressBarTemp->setValue(temp);
            ui->progressBarHum->setValue(hum);
            //让温湿度和阈值做比较
            if(temp > maxTemp)
            {
                timerTempWarn->start(30);//启动定时器
                soundTempWarn->play();//播放报警音效
//                ui->labelTemp->setStyleSheet("color: red");
                ui->progressBarTemp->setStyleSheet(
                                           "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                           "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");
                ui->pushButtonTemp->setStyleSheet("border-image: url(:images/buttonsred.png)");

            }
            else
            {
                timerTempWarn->stop();//暂停定时器
                soundTempWarn->stop();//停止播放报警音效
//                ui->labelTemp->setStyleSheet("color: yellow");
                ui->progressBarTemp->setStyleSheet(
                                           "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                           "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
                ui->pushButtonTemp->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
            }
            if(hum > maxHum)
            {
                timerHumWarn->start(30);
                soundHumWarn->play();
//                ui->labelHum->setStyleSheet("color: red");
                ui->progressBarHum->setStyleSheet(
                                           "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                           "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");
                ui->pushButtonHum->setStyleSheet("border-image: url(:images/buttonsred.png)");

            }
            else
            {
                timerHumWarn->stop();
                soundHumWarn->stop();
//                ui->labelHum->setStyleSheet("color: green");
                ui->progressBarHum->setStyleSheet(
                                           "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                           "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
                ui->pushButtonHum->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
            }
        }
        else if(s.startsWith("light"))//以light开头，说明是光照强度
        {
            lightIP = client_Addr.toString();
            lightPort = QString("%1").arg(port);
            // "light,100" ,用split函数分隔字符串之后变为 "light" "100"  对应的下标 0  1
            int light =  list[1].toDouble();
            //将光照强度显示在光照进度条上
            ui->progressBarLight->setValue(light);
            if(light > maxLight)
            {
                timerLightWarn->start(30);
                soundLightWarn->play();
//                ui->labelLight->setStyleSheet("color: red");
                ui->progressBarLight->setStyleSheet(
                                           "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                           "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");
                ui->pushButtonLight->setStyleSheet("border-image: url(:images/buttonsred.png)");
            }
            else
            {
                timerLightWarn->stop();
                soundLightWarn->stop();
                //定时器暂停之后，进度条的颜色恢复到原来的状态
//                ui->labelLight->setStyleSheet("color: orange");
                ui->progressBarLight->setStyleSheet(
                                           "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                           "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
                ui->pushButtonLight->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
            }
        }
        else if(s.startsWith("fan"))
        {
            fanIP = client_Addr.toString();
            fanPort = QString("%1").arg(port);
        }
        else if(s.startsWith("buzzer"))
        {
            buzzerIP = client_Addr.toString();
            buzzerPort = QString("%1").arg(port);
        }
    }
    initLineEdit();
}

//温度警告
void MainWindow::slotTempWarn()
{
    if(flagTempWarn)
    {
//        ui->labelTemp->setStyleSheet("color: red");
        ui->progressBarTemp->setStyleSheet(
                                   "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                   "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
        ui->pushButtonTemp->setStyleSheet("border-image: url(:images/buttonsred.png)");
    }
    else
    {
//        ui->labelTemp->setStyleSheet("color: yellow");
        ui->progressBarTemp->setStyleSheet(
                                   "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                   "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");
        ui->pushButtonTemp->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
    }
    //切换标志位
    flagTempWarn = !flagTempWarn;
}
//湿度警告
void MainWindow::slotHumWarn()
{
    if(flagHumWarn)
    {
//        ui->labelHum->setStyleSheet("color: red");
        ui->progressBarHum->setStyleSheet(
                                   "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                   "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
        ui->pushButtonHum->setStyleSheet("border-image: url(:images/buttonsred.png)");
    }
    else
    {
//        ui->labelHum->setStyleSheet("color: green");
        ui->progressBarHum->setStyleSheet(
                                   "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                   "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");
        ui->pushButtonHum->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
    }
    flagHumWarn = !flagHumWarn;
}
//光照强度警告
void MainWindow::slotLightWarn()
{
    if(flagLightWarn)
    {
//        ui->labelLight->setStyleSheet("color: red");
        ui->progressBarLight->setStyleSheet(
                                   "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                   "QProgressBar:chunk{border-radius:5px;background-color:#1ABC9C;}");
        ui->pushButtonLight->setStyleSheet("border-image: url(:images/buttonsred.png)");
    }
    else
    {
//        ui->labelLight->setStyleSheet("color: orange");
        ui->progressBarLight->setStyleSheet(
                                   "QProgressBar{font:14pt;border-radius:5px;text-align:center;border:1px solid #E8EDF2;background-color: rgb(255, 255, 255);border-color: rgb(180, 180, 180);}"
                                   "QProgressBar:chunk{border-radius:5px;background-color:#FF0000;}");
        ui->pushButtonLight->setStyleSheet("border-image: url(:images/buttonsgreen.png)");
    }
    flagLightWarn = !flagLightWarn;
}









