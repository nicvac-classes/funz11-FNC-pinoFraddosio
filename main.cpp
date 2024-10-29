#include <iostream>
#include <string>
#include <ctime>
using namespace std;

string InputSegno(){
    string cond;
    do{
        cout<<"Seleziona l'operazione \n -R : Raccolta fondi \n -P : Previsone del budget \n -S : Per spesa imprevista \n -X : Per uscire \n Input: ";
        cin>>cond;
    }while(cond  == "R" && cond == "P" && cond == "S" && cond == "X");
    return cond;
}

void RaccoltaFondi(float & budget){
    int add;
    do{
        cout<<"Inserire importo per la raccolta fondi: ";
        cin>>add;
        if(add <= 0){
            cout<<"Inserire un numero diverso o maggiore di 0";
        }
    }while(add <= 0);
    budget = budget + add;
}

void PrevisioneBugdget(float budget){
    srand(time(NULL));
    int perc;
    perc = random() % 31 - 10;
    perc = (budget * perc)/100;
    budget = budget + perc;
    cout<<"La previsione del budget è: "<< budget<<endl;
}

float SpesaImprevista(float budget){
    float budget_nuovo;
    cout<<"Inserire il valore della spesa imprevista: ";
    cin>>budget_nuovo;
    return budget_nuovo = budget - budget_nuovo;
}

int main() {
    srand(time(NULL));
    float budget_attule;
    string cond = "";
    budget_attule = random () % 901 + 100;
    do{
        cout<<"\nBudget: "<<budget_attule<<endl;
        cond = InputSegno();
        if(cond == "R"){
            RaccoltaFondi(budget_attule);
        }
        if(cond == "P"){
            PrevisioneBugdget(budget_attule);
        }
        if(cond == "S"){
            budget_attule = SpesaImprevista(budget_attule);
        }
    }while(cond != "X");
    
    cout<<"Programma finito"<<endl;
    return 0;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
