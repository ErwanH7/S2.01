#ifndef TIROIRCD_H
#define TIROIRCD_H

class TiroirCD {
private:
    bool estOuvert;

public:
    TiroirCD();
    ~TiroirCD();

    void ouvrirTiroir();
    void fermerTiroir();
    bool tiroirEstOuvert() const;
};

#endif // TIROIRCD_H


