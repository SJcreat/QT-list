#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QList>

typedef struct{

   int i;
   QString str;

}St;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QList<int> list;

    list.append(1); // list 배열에 추가
    list<<2;        // list 배열에 추가
    qDebug()<<list.at(0)<<list.at(1);  //출력값 1 2

    qDebug()<<list.size(); // list 사이즈 출력 : 2

    list.clear();  // list 초기화
    qDebug()<<list.count(); // list 사이즈 출력 : 0

    list<<1<<2;

    qDebug()<<list.indexOf(2); //2의 인덱스 반환 출력 : 1;

    qDebug()<<list.contains(1)<<list.contains(3); // 리스트에 포함여부 확인 출력: true false

    QList<St> struct_list; // 구조체 리스트

    St a1; // 구조체 변수선언
    St a2;

    a1.i=1;
    a1.str="first";

    a2.i=2;
    a2.str="second";

    struct_list.append(a1);

    struct_list<<a2;

    qDebug()<<struct_list[0].i<<struct_list[0].str<<struct_list[1].i<<struct_list[1].str; //인덱스 0과1의 구조체 리스트 원소 출력 : 1 first 2 second

}

MainWindow::~MainWindow()
{
    delete ui;
}

