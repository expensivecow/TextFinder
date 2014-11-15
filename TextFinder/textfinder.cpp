#include "textfinder.h"
#include "ui_textfinder.h"

TextFinder::TextFinder(QWidget *parent) : QMainWindow(parent), ui(new Ui::TextFinder) {
    ui->setupUi(this);
}

TextFinder::~TextFinder() {
    delete ui;
}

void TextFinder::on_FindWord_clicked() {
  //TODO
}

void TextFinder::getTextFile() {
  //TODO
}
