#ifndef CELLULE_H
#define CELLULE_H

class Cellule {
private:
    bool moteurActif;
    int tempsDiffusion;

public:
    Cellule();
    ~Cellule();

    void lancerMoteur();
    void arreterMoteur();
    int getTempsDeDiffusion() const;
};


#endif // CELLULE_H
