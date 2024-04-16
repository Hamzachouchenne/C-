#include<iostream>
#include"avion.hpp"
#include"Vol.hpp"
#include<vector>
using namespace std;
void Avion::AjoutVols( Vol * V){
    ensembleVol.push_back(V);
};

void Avion::Affiche(){
    vector <Vol * > :: iterator It = ensembleVol.begin();
    while (It != ensembleVol.end())
    {
        (*It)->AfficheCarracVol();
        It++;
    }
    
}
void Avion::AfficheVols(){
    cout<<"le numero de l'avion est "<<NumAvion<<endl;
    Affiche();
}