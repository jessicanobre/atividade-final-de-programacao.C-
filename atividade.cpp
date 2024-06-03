#include <iostream>
#include <string>
 using namespace std;

 int id[20];
 string titulo[20];
 string descricao[20];
 string dataVencimento[20];
 string status[20];

int controle = 0;
int editar = 0;
int remover = 0; 
  int main () {
    
    int opcao;
    do{
   cout << "1.Adicionar Tarefa" << endl;
   cout << "2.Visualizar Tarefas" << endl;
   cout << "3.Editar Tarefa" << endl;
   cout << "4. Remover Tarefa" << endl;
   cout << "5.Buscar Tarefa" << endl;
   cout << "6.Filtrar Tarefas por Status" << endl;
   cout << "0.Sair" << endl;
   cout << "Escolha uma opção: " << endl;
   cin >> opcao;

   if (opcao == 1) {
    id[controle] = controle;
    cout << "Digite o titulo: " << endl;
    cin >> titulo[controle];
    cout << "Digite a descrição: " << endl;
    cin >> descricao [controle];
    cout << "Digite a data de vencimento: " << endl;
    cin >> dataVencimento [controle];
    cout << "Digite o status da tarefa: " << endl;
    cin >> status [controle];
    controle ++;
   }
   else if (opcao == 2){
    
    for(int i = 0; i < controle; i++) {
     
      cout << "titulo: " << titulo[i] << endl;
      cout << "descrição: " << descricao[i] << endl;
      cout << "data de vencimemto: " << dataVencimento[i] << endl;
      cout << "status da tarefa: " << status[i] << endl;

    } 
    }if (opcao == 3){
      id [editar] = editar;
      
       cout << "ID da tarefa a editar: " << endl;
       cin >> id[editar];
       cout << "titulo: " << titulo << endl;
       cin >> titulo[editar];
       cout << "descrição: " << descricao << endl;
       cin >> descricao[editar];
       cout << "data de vencimento: " << dataVencimento << endl;
       cin >> dataVencimento[editar];
       cout << "status: " << status << endl;
       cin >> status[editar];
      
    } else
    {
      for(int i = 0; i < controle; i++) {
     
      cout << "titulo: " << titulo[i] << endl;
      cout << "descrição: " << descricao[i] << endl;
      cout << "data de vencimemto: " << dataVencimento[i] << endl;
      cout << "status da tarefa: " << status[i] << endl;

    }
    
     
    }
    } while (opcao != 0);

    return 0;
    }