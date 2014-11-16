#include "textfinder.h"
#include "ui_textfinder.h"
#include <QtCore/QFile>
#include <QtCore/QTextStream>

TextFinder::TextFinder(QWidget *parent) : QMainWindow(parent), ui(new Ui::TextFinder) {
    ui->setupUi(this);
    getTextFile();
}

TextFinder::~TextFinder() {
    delete ui;
}

void TextFinder::on_FindWord_clicked() {
  QString word = ui->lineEdit->text();
  ui->textEdit->find(word, QTextDocument::FindWholeWords);
}

void TextFinder::getTextFile() {
  QFile myFile(":/inputFile.txt");
  myFile.open(QIODevice::ReadOnly);

  QTextStream textStream(&myFile);
  QString line = textStream.readAll();
  myFile.close();

  ui->textEdit->setPlainText(line);
  QTextCursor textCursor = ui->textEdit->textCursor();
  textCursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
