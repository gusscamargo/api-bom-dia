/********************************************************************************
** Form generated from reading UI file 'interface_santistacPZnxv.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef INTERFACE_SANTISTACPZNXV_H
#define INTERFACE_SANTISTACPZNXV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Aplicacao {
 public:
  QWidget *central_widget;
  QStackedWidget *paginacao_widget;
  QWidget *ligar_cameras_page;
  QFrame *ligar_cameras_frame;
  QPushButton *ligar_cameras_button;
  QLabel *cameras_detectadas_label;
  QListView *lista_cameras_listView;
  QWidget *inserir_dados_page;
  QFrame *inserir_dados_frame;
  QFrame *formulario_dados_frame;
  QVBoxLayout *verticalLayout;
  QLabel *titulo;
  QLabel *codigo_produto_label;
  QLineEdit *codigo_produto_line;
  QLabel *codigo_peca_label;
  QLineEdit *codigo_peca_line;
  QStackedWidget *validacao_campos_stackedWidget;
  QWidget *erros_page;
  QFrame *erros_frame;
  QVBoxLayout *verticalLayout_2;
  QLabel *erros_label;
  QListView *erros_listView;
  QWidget *botao_confirmar_page;
  QPushButton *pushButton;
  QWidget *visualizacao_page;
  QOpenGLWidget *camera_1_openGLWidget;
  QOpenGLWidget *camera_2_openGLWidget;
  QLabel *camera_1_label;
  QLabel *camera_2_label;
  QLabel *encoder_label;
  QLCDNumber *encoder_lcd;
  QFrame *codigo_peca_frame;
  QHBoxLayout *horizontalLayout_2;
  QLabel *codigo_peca_label_2;
  QLabel *codigo_peca_content;
  QFrame *codigo_produto_frame;
  QHBoxLayout *horizontalLayout;
  QLabel *codigo_produto_label_2;
  QLabel *codigo_produto_content;
  QFrame *data_frame;
  QHBoxLayout *horizontalLayout_3;
  QLabel *data_inicio_label;
  QLabel *data_inicio_content;
  QOpenGLWidget *ultimo_defeito_openGLWidget;
  QFrame *ultimo_defeito_coletado_frame;
  QVBoxLayout *verticalLayout_3;
  QLabel *ultimo_defeito_coletado_label;
  QLabel *data_hora_label;
  QLabel *data_hora_content;
  QFrame *buttons_frame;
  QVBoxLayout *verticalLayout_4;
  QPushButton *reiniciar_cameras_button;
  QPushButton *proximo_tecido_button;

  void setupUi(QMainWindow *Aplicacao) {
    if (Aplicacao->objectName().isEmpty()) Aplicacao->setObjectName(QString::fromUtf8("Aplicacao"));
    Aplicacao->resize(1300, 720);
    Aplicacao->setStyleSheet(
        QString::fromUtf8("QWidget { \n"
                          "	background-color: white; \n"
                          "}"));
    central_widget = new QWidget(Aplicacao);
    central_widget->setObjectName(QString::fromUtf8("central_widget"));
    paginacao_widget = new QStackedWidget(central_widget);
    paginacao_widget->setObjectName(QString::fromUtf8("paginacao_widget"));
    paginacao_widget->setGeometry(QRect(0, 70, 1301, 651));
    ligar_cameras_page = new QWidget();
    ligar_cameras_page->setObjectName(QString::fromUtf8("ligar_cameras_page"));
    ligar_cameras_frame = new QFrame(ligar_cameras_page);
    ligar_cameras_frame->setObjectName(QString::fromUtf8("ligar_cameras_frame"));
    ligar_cameras_frame->setGeometry(QRect(444, 150, 411, 501));
    ligar_cameras_frame->setFrameShape(QFrame::StyledPanel);
    ligar_cameras_frame->setFrameShadow(QFrame::Raised);
    ligar_cameras_button = new QPushButton(ligar_cameras_frame);
    ligar_cameras_button->setObjectName(QString::fromUtf8("ligar_cameras_button"));
    ligar_cameras_button->setGeometry(QRect(95, 30, 221, 51));
    ligar_cameras_button->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    background-color: #198754;\n"
                          "    color: white;\n"
                          "    border: none;\n"
                          "    padding: 10px;\n"
                          "    text-align: center;\n"
                          "    text-decoration: none;\n"
                          "    display: inline-block;\n"
                          "    font-size: 14px;\n"
                          "    margin: 4px 2px;\n"
                          "    cursor: pointer;\n"
                          "    border-radius: 4px;\n"
                          "}\n"
                          "\n"
                          "QPushButton:hover {\n"
                          "    background-color: #218838;\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color: #1e7e34;\n"
                          "}\n"
                          ""));
    cameras_detectadas_label = new QLabel(ligar_cameras_frame);
    cameras_detectadas_label->setObjectName(QString::fromUtf8("cameras_detectadas_label"));
    cameras_detectadas_label->setGeometry(QRect(75, 110, 261, 41));
    QFont font;
    font.setPointSize(14);
    cameras_detectadas_label->setFont(font);
    cameras_detectadas_label->setAlignment(Qt::AlignCenter);
    lista_cameras_listView = new QListView(ligar_cameras_frame);
    lista_cameras_listView->setObjectName(QString::fromUtf8("lista_cameras_listView"));
    lista_cameras_listView->setGeometry(QRect(60, 160, 291, 331));
    lista_cameras_listView->setFont(font);
    lista_cameras_listView->setLayoutDirection(Qt::LeftToRight);
    lista_cameras_listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    paginacao_widget->addWidget(ligar_cameras_page);
    inserir_dados_page = new QWidget();
    inserir_dados_page->setObjectName(QString::fromUtf8("inserir_dados_page"));
    inserir_dados_frame = new QFrame(inserir_dados_page);
    inserir_dados_frame->setObjectName(QString::fromUtf8("inserir_dados_frame"));
    inserir_dados_frame->setGeometry(QRect(370, 0, 551, 641));
    inserir_dados_frame->setFrameShape(QFrame::StyledPanel);
    inserir_dados_frame->setFrameShadow(QFrame::Raised);
    formulario_dados_frame = new QFrame(inserir_dados_frame);
    formulario_dados_frame->setObjectName(QString::fromUtf8("formulario_dados_frame"));
    formulario_dados_frame->setGeometry(QRect(80, 0, 381, 311));
    formulario_dados_frame->setFont(font);
    formulario_dados_frame->setFrameShape(QFrame::StyledPanel);
    formulario_dados_frame->setFrameShadow(QFrame::Raised);
    verticalLayout = new QVBoxLayout(formulario_dados_frame);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    titulo = new QLabel(formulario_dados_frame);
    titulo->setObjectName(QString::fromUtf8("titulo"));
    QFont font1;
    font1.setPointSize(20);
    titulo->setFont(font1);
    titulo->setAlignment(Qt::AlignCenter);

    verticalLayout->addWidget(titulo);

    codigo_produto_label = new QLabel(formulario_dados_frame);
    codigo_produto_label->setObjectName(QString::fromUtf8("codigo_produto_label"));
    codigo_produto_label->setFont(font);

    verticalLayout->addWidget(codigo_produto_label);

    codigo_produto_line = new QLineEdit(formulario_dados_frame);
    codigo_produto_line->setObjectName(QString::fromUtf8("codigo_produto_line"));
    codigo_produto_line->setFont(font);

    verticalLayout->addWidget(codigo_produto_line);

    codigo_peca_label = new QLabel(formulario_dados_frame);
    codigo_peca_label->setObjectName(QString::fromUtf8("codigo_peca_label"));
    codigo_peca_label->setFont(font);

    verticalLayout->addWidget(codigo_peca_label);

    codigo_peca_line = new QLineEdit(formulario_dados_frame);
    codigo_peca_line->setObjectName(QString::fromUtf8("codigo_peca_line"));

    verticalLayout->addWidget(codigo_peca_line);

    validacao_campos_stackedWidget = new QStackedWidget(inserir_dados_frame);
    validacao_campos_stackedWidget->setObjectName(QString::fromUtf8("validacao_campos_stackedWidget"));
    validacao_campos_stackedWidget->setGeometry(QRect(80, 320, 381, 311));
    erros_page = new QWidget();
    erros_page->setObjectName(QString::fromUtf8("erros_page"));
    erros_frame = new QFrame(erros_page);
    erros_frame->setObjectName(QString::fromUtf8("erros_frame"));
    erros_frame->setGeometry(QRect(0, 0, 381, 311));
    erros_frame->setFrameShape(QFrame::StyledPanel);
    erros_frame->setFrameShadow(QFrame::Raised);
    verticalLayout_2 = new QVBoxLayout(erros_frame);
    verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
    erros_label = new QLabel(erros_frame);
    erros_label->setObjectName(QString::fromUtf8("erros_label"));
    erros_label->setFont(font);
    erros_label->setAlignment(Qt::AlignCenter);

    verticalLayout_2->addWidget(erros_label);

    erros_listView = new QListView(erros_frame);
    erros_listView->setObjectName(QString::fromUtf8("erros_listView"));
    erros_listView->setFont(font);

    verticalLayout_2->addWidget(erros_listView);

    validacao_campos_stackedWidget->addWidget(erros_page);
    botao_confirmar_page = new QWidget();
    botao_confirmar_page->setObjectName(QString::fromUtf8("botao_confirmar_page"));
    pushButton = new QPushButton(botao_confirmar_page);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    pushButton->setGeometry(QRect(70, 10, 251, 51));
    pushButton->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    background-color: #28a745;\n"
                          "    color: white;\n"
                          "    border: none;\n"
                          "    padding: 10px;\n"
                          "    text-align: center;\n"
                          "    text-decoration: none;\n"
                          "    display: inline-block;\n"
                          "    font-size: 14px;\n"
                          "    margin: 4px 2px;\n"
                          "    cursor: pointer;\n"
                          "    border-radius: 4px;\n"
                          "}\n"
                          "\n"
                          "QPushButton:hover {\n"
                          "    background-color: #218838;\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color: #1e7e34;\n"
                          "}\n"
                          ""));
    validacao_campos_stackedWidget->addWidget(botao_confirmar_page);
    paginacao_widget->addWidget(inserir_dados_page);
    visualizacao_page = new QWidget();
    visualizacao_page->setObjectName(QString::fromUtf8("visualizacao_page"));
    camera_1_openGLWidget = new QOpenGLWidget(visualizacao_page);
    camera_1_openGLWidget->setObjectName(QString::fromUtf8("camera_1_openGLWidget"));
    camera_1_openGLWidget->setGeometry(QRect(10, 250, 499, 378));
    camera_2_openGLWidget = new QOpenGLWidget(visualizacao_page);
    camera_2_openGLWidget->setObjectName(QString::fromUtf8("camera_2_openGLWidget"));
    camera_2_openGLWidget->setGeometry(QRect(520, 250, 499, 378));
    camera_1_label = new QLabel(visualizacao_page);
    camera_1_label->setObjectName(QString::fromUtf8("camera_1_label"));
    camera_1_label->setGeometry(QRect(200, 220, 91, 21));
    camera_1_label->setFont(font);
    camera_2_label = new QLabel(visualizacao_page);
    camera_2_label->setObjectName(QString::fromUtf8("camera_2_label"));
    camera_2_label->setGeometry(QRect(730, 220, 71, 21));
    camera_2_label->setFont(font);
    encoder_label = new QLabel(visualizacao_page);
    encoder_label->setObjectName(QString::fromUtf8("encoder_label"));
    encoder_label->setGeometry(QRect(30, 160, 81, 21));
    encoder_label->setFont(font);
    encoder_lcd = new QLCDNumber(visualizacao_page);
    encoder_lcd->setObjectName(QString::fromUtf8("encoder_lcd"));
    encoder_lcd->setGeometry(QRect(120, 150, 301, 41));
    encoder_lcd->setFont(font);
    codigo_peca_frame = new QFrame(visualizacao_page);
    codigo_peca_frame->setObjectName(QString::fromUtf8("codigo_peca_frame"));
    codigo_peca_frame->setGeometry(QRect(30, 50, 391, 51));
    codigo_peca_frame->setFrameShape(QFrame::StyledPanel);
    codigo_peca_frame->setFrameShadow(QFrame::Raised);
    horizontalLayout_2 = new QHBoxLayout(codigo_peca_frame);
    horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
    codigo_peca_label_2 = new QLabel(codigo_peca_frame);
    codigo_peca_label_2->setObjectName(QString::fromUtf8("codigo_peca_label_2"));
    codigo_peca_label_2->setFont(font);

    horizontalLayout_2->addWidget(codigo_peca_label_2);

    codigo_peca_content = new QLabel(codigo_peca_frame);
    codigo_peca_content->setObjectName(QString::fromUtf8("codigo_peca_content"));
    codigo_peca_content->setFont(font);

    horizontalLayout_2->addWidget(codigo_peca_content);

    codigo_produto_frame = new QFrame(visualizacao_page);
    codigo_produto_frame->setObjectName(QString::fromUtf8("codigo_produto_frame"));
    codigo_produto_frame->setGeometry(QRect(30, 0, 391, 51));
    codigo_produto_frame->setFrameShape(QFrame::StyledPanel);
    codigo_produto_frame->setFrameShadow(QFrame::Raised);
    horizontalLayout = new QHBoxLayout(codigo_produto_frame);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    codigo_produto_label_2 = new QLabel(codigo_produto_frame);
    codigo_produto_label_2->setObjectName(QString::fromUtf8("codigo_produto_label_2"));
    codigo_produto_label_2->setFont(font);

    horizontalLayout->addWidget(codigo_produto_label_2);

    codigo_produto_content = new QLabel(codigo_produto_frame);
    codigo_produto_content->setObjectName(QString::fromUtf8("codigo_produto_content"));
    codigo_produto_content->setFont(font);

    horizontalLayout->addWidget(codigo_produto_content);

    data_frame = new QFrame(visualizacao_page);
    data_frame->setObjectName(QString::fromUtf8("data_frame"));
    data_frame->setGeometry(QRect(30, 100, 391, 51));
    data_frame->setFrameShape(QFrame::StyledPanel);
    data_frame->setFrameShadow(QFrame::Raised);
    horizontalLayout_3 = new QHBoxLayout(data_frame);
    horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
    data_inicio_label = new QLabel(data_frame);
    data_inicio_label->setObjectName(QString::fromUtf8("data_inicio_label"));
    data_inicio_label->setFont(font);

    horizontalLayout_3->addWidget(data_inicio_label);

    data_inicio_content = new QLabel(data_frame);
    data_inicio_content->setObjectName(QString::fromUtf8("data_inicio_content"));
    data_inicio_content->setFont(font);

    horizontalLayout_3->addWidget(data_inicio_content);

    ultimo_defeito_openGLWidget = new QOpenGLWidget(visualizacao_page);
    ultimo_defeito_openGLWidget->setObjectName(QString::fromUtf8("ultimo_defeito_openGLWidget"));
    ultimo_defeito_openGLWidget->setGeometry(QRect(1010, 0, 287, 217));
    ultimo_defeito_coletado_frame = new QFrame(visualizacao_page);
    ultimo_defeito_coletado_frame->setObjectName(QString::fromUtf8("ultimo_defeito_coletado_frame"));
    ultimo_defeito_coletado_frame->setGeometry(QRect(779, 0, 231, 217));
    ultimo_defeito_coletado_frame->setFrameShape(QFrame::StyledPanel);
    ultimo_defeito_coletado_frame->setFrameShadow(QFrame::Raised);
    verticalLayout_3 = new QVBoxLayout(ultimo_defeito_coletado_frame);
    verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
    ultimo_defeito_coletado_label = new QLabel(ultimo_defeito_coletado_frame);
    ultimo_defeito_coletado_label->setObjectName(QString::fromUtf8("ultimo_defeito_coletado_label"));
    ultimo_defeito_coletado_label->setFont(font);
    ultimo_defeito_coletado_label->setAlignment(Qt::AlignCenter);

    verticalLayout_3->addWidget(ultimo_defeito_coletado_label);

    data_hora_label = new QLabel(ultimo_defeito_coletado_frame);
    data_hora_label->setObjectName(QString::fromUtf8("data_hora_label"));
    data_hora_label->setFont(font);
    data_hora_label->setAlignment(Qt::AlignCenter);

    verticalLayout_3->addWidget(data_hora_label);

    data_hora_content = new QLabel(ultimo_defeito_coletado_frame);
    data_hora_content->setObjectName(QString::fromUtf8("data_hora_content"));
    data_hora_content->setFont(font);
    data_hora_content->setAlignment(Qt::AlignCenter);

    verticalLayout_3->addWidget(data_hora_content);

    buttons_frame = new QFrame(visualizacao_page);
    buttons_frame->setObjectName(QString::fromUtf8("buttons_frame"));
    buttons_frame->setGeometry(QRect(1030, 490, 261, 141));
    buttons_frame->setFrameShape(QFrame::StyledPanel);
    buttons_frame->setFrameShadow(QFrame::Raised);
    verticalLayout_4 = new QVBoxLayout(buttons_frame);
    verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
    reiniciar_cameras_button = new QPushButton(buttons_frame);
    reiniciar_cameras_button->setObjectName(QString::fromUtf8("reiniciar_cameras_button"));
    reiniciar_cameras_button->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    background-color: #ffc107;  /* Amarelo */\n"
                          "    color: black;\n"
                          "    border: none;\n"
                          "    padding: 10px;\n"
                          "    text-align: center;\n"
                          "    text-decoration: none;\n"
                          "    display: inline-block;\n"
                          "    font-size: 14px;\n"
                          "    margin: 4px 2px;\n"
                          "    cursor: pointer;\n"
                          "    border-radius: 4px;\n"
                          "}\n"
                          "\n"
                          "QPushButton:hover {\n"
                          "    background-color: #cccc00;  /* Amarelo mais escuro */\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color: #999900;  /* Amarelo ainda mais escuro */\n"
                          "}\n"
                          ""));

    verticalLayout_4->addWidget(reiniciar_cameras_button);

    proximo_tecido_button = new QPushButton(buttons_frame);
    proximo_tecido_button->setObjectName(QString::fromUtf8("proximo_tecido_button"));
    proximo_tecido_button->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    background-color: #dc3545;  /* Vermelho */\n"
                          "    color: white;\n"
                          "    border: none;\n"
                          "    padding: 10px;\n"
                          "    text-align: center;\n"
                          "    text-decoration: none;\n"
                          "    display: inline-block;\n"
                          "    font-size: 14px;\n"
                          "    margin: 4px 2px;\n"
                          "    cursor: pointer;\n"
                          "    border-radius: 4px;\n"
                          "}\n"
                          "\n"
                          "QPushButton:hover {\n"
                          "    background-color: #cc0000;  /* Vermelho mais escuro */\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color: #990000;  /* Vermelho ainda mais escuro */\n"
                          "}\n"
                          ""));

    verticalLayout_4->addWidget(proximo_tecido_button);

    paginacao_widget->addWidget(visualizacao_page);
    Aplicacao->setCentralWidget(central_widget);

    retranslateUi(Aplicacao);

    paginacao_widget->setCurrentIndex(2);
    validacao_campos_stackedWidget->setCurrentIndex(1);

    QMetaObject::connectSlotsByName(Aplicacao);
  }  // setupUi

  void retranslateUi(QMainWindow *Aplicacao) {
    Aplicacao->setWindowTitle(QCoreApplication::translate("Aplicacao", "MainWindow", nullptr));
    ligar_cameras_button->setText(QCoreApplication::translate("Aplicacao", "Ligar as cameras", nullptr));
    cameras_detectadas_label->setText(QCoreApplication::translate("Aplicacao", "Cameras detectadas:", nullptr));
    titulo->setText(QCoreApplication::translate("Aplicacao", "Escreva os campos:", nullptr));
    codigo_produto_label->setText(QCoreApplication::translate("Aplicacao", "C\303\263digo do produto:", nullptr));
    codigo_peca_label->setText(QCoreApplication::translate("Aplicacao", "C\303\263digo da pe\303\247a:", nullptr));
    erros_label->setText(QCoreApplication::translate("Aplicacao", "Erros encontrados:", nullptr));
    pushButton->setText(QCoreApplication::translate("Aplicacao", "Confirmar", nullptr));
    camera_1_label->setText(QCoreApplication::translate("Aplicacao", "Esquerda", nullptr));
    camera_2_label->setText(QCoreApplication::translate("Aplicacao", "Direita", nullptr));
    encoder_label->setText(QCoreApplication::translate("Aplicacao", "Encoder:", nullptr));
    codigo_peca_label_2->setText(QCoreApplication::translate("Aplicacao", "Codigo da pe\303\247a:", nullptr));
    codigo_peca_content->setText(QString());
    codigo_produto_label_2->setText(QCoreApplication::translate("Aplicacao", "Codigo do produto:", nullptr));
    codigo_produto_content->setText(QString());
    data_inicio_label->setText(QCoreApplication::translate("Aplicacao", "Data de inicio:", nullptr));
    data_inicio_content->setText(QString());
    ultimo_defeito_coletado_label->setText(QCoreApplication::translate("Aplicacao", "Ultimo defeito coletado", nullptr));
    data_hora_label->setText(QCoreApplication::translate("Aplicacao", "Data e Hora:", nullptr));
    data_hora_content->setText(QCoreApplication::translate("Aplicacao", "dd/mm/yyyy hh:mm:ss", nullptr));
    reiniciar_cameras_button->setText(QCoreApplication::translate("Aplicacao", "Reiniciar cameras", nullptr));
    proximo_tecido_button->setText(QCoreApplication::translate("Aplicacao", "Proximo Tecido", nullptr));
  }  // retranslateUi
};

namespace Ui {
class Aplicacao : public Ui_Aplicacao {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // INTERFACE_SANTISTACPZNXV_H
