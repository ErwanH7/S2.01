#ifndef TITRE_H
#define TITRE_H

#include <string>
using namespace std;

class Titre
{
public:
    Titre();
    Titre(const string& pIntitule, unsigned short int pDuree, const string& pUrl);
    ~Titre();

    // getters
    string getIntitule();
    unsigned short int getDuree();
    string getUrl();


    // setters
    void setIntitule(const string& pIntitule);
    void setDuree(unsigned short int pDuree);
    void setUrl(const string& pUrl);

private:
    string intitule ;   // intitulé du titre
    unsigned short int duree ;  // durée du titre, en secondes
    string url ;        // chemin d'accès vers la ressource média
};

#endif // TITRE_H
