#include <iostream>
#include <cmath>
#include <list>
#include <stdio.h>

using namespace std;

typedef struct Amigos
{
    string nome;
    string opcao;
    int posChegada;
}TAmigos;

// Função para usar no sort com list & struct
bool compare(const TAmigos& first, const TAmigos& second){
  if (first.nome < second.nome)
    return true;
  else
    return false;
}

int main(){
    list <TAmigos> participantesYes;
    list <TAmigos> participantesNo;
    list <TAmigos>::iterator it;
    TAmigos amigos;

    string ganhador;
    int posGanhador;
    int tamGanhador = 0;

    int cont;
    int i = 0;
    while (1>0)
    {
        cont = 0;
        cin >> amigos.nome;

        if(amigos.nome == "FIM")
            break;

        cin >> amigos.opcao;

        if(amigos.opcao == "YES"){
            it = participantesYes.begin();

            while(it != participantesYes.end()){
                if(amigos.nome == it->nome){
                    cont++;
                    amigos.posChegada = it -> posChegada;
                }
                it++;
            }


            if (cont == 0)
            {
                amigos.posChegada == i;
                participantesYes.push_back(amigos);
                i++;
            }



            if ((amigos.nome.size()>tamGanhador) && (amigos.nome != ganhador))
            {
                tamGanhador = amigos.nome.size();
                ganhador = amigos.nome;
                posGanhador = amigos.posChegada;
            }


            else if ((amigos.nome.size() == tamGanhador) && (amigos.nome != ganhador)){
                if (amigos.posChegada < posGanhador)
                {
                    tamGanhador = amigos.nome.size();
                    ganhador = amigos.nome;
                    posGanhador = amigos.posChegada;
                }
            }
        }
        else
        {
            participantesNo.push_back(amigos);
        }
    }
    participantesYes.sort(compare);
    participantesNo.sort(compare);

    it = participantesYes.begin();
    while(it != participantesYes.end())
    {
        cout << it->nome << endl;
        it++;
    }

    it = participantesNo.begin();
    while(it != participantesNo.end())
    {
        cout << it->nome << endl;
        it++;
    }

    cout << "\nAmigo do Habay:" << endl;
    cout << ganhador << endl;
    return 0;
}
