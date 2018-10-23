#include "uczen.h"

void uczen::setImie(QString im)
{
    if(im==imie1)return;
    imie1=im;
    emit imieChanged();
}

void uczen::setNazwisko(QString na)
{
    if(na==nazwisko1)return;
    nazwisko1=na;
    emit nazwiskoChanged();
}

void uczen::setKlasa(int kl)
{
    if(kl==klasa1)return;
    klasa1=kl;
    emit klasaChanged();
}

uczen::uczen(QObject *parent) : QObject(parent)
{
    imie1="imie";
    nazwisko1="nazwisko";
    klasa1=0;
}

uczen::uczen(QString im, QString na, int kl, QObject *parent) : QObject(parent)
{
    imie1=im;
    nazwisko1=na;
    klasa1=kl;
}
