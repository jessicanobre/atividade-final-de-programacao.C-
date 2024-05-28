#include <iostream>
#include <string>
 using namespace std;

 int id[20];
 string titulo[20];
 string descricao[20];
 string dataVencimento[20];
 string status[20];

int controle = 0;
  

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

   if (opcao == 1)
   {
    cout << "Adicionar Tarefa" << endl;
   }
   if (opcao == 2)
   {
    cout << "Visualizar Tarefas" << endl;
   }
   if (opcao == 3)
   {
    cout << "Editar Tarefa" << endl;
   }
   if (opcao == 4)
   {
    cout << "Remover Tarefa" << endl;
   }
   if (opcao == 5)
   {
    cout << "Buscar Tarefa" << endl;
   }
   if (opcao == 6)
   {
    cout << "Filtrar Tarefas por Status" << endl;
   }
  
    } while (opcao != 0);
    
 }