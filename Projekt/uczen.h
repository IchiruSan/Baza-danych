#ifndef UCZEN_H
#define UCZEN_H

#include <QObject>
#include <QString>


class uczen : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString imie READ imie WRITE setImie NOTIFY imieChanged)
    Q_PROPERTY(QString nazwisko READ nazwisko WRITE setNazwisko NOTIFY nazwiskoChanged)
    Q_PROPERTY(int klasa READ klasa WRITE setKlasa NOTIFY klasaChanged)


    QString imie1;
    QString nazwisko1;
    int klasa1;
public:

    QString imie(){return imie1;}
    QString nazwisko(){return nazwisko1;}
    int klasa(){return klasa1;}
    void setImie(QString im);
    void setNazwisko(QString na);
    void setKlasa(int kl);

    explicit uczen(QObject *parent = nullptr);
    explicit uczen(QString im, QString na, int kl, QObject *parent = nullptr);


signals:
    void imieChanged();
    void nazwiskoChanged();
    void klasaChanged();


public slots:
};

#endif // UCZEN_H
