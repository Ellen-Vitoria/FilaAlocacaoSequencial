#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include "fila.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    unsigned tamanho;

    cout << "\t ___                                                 ___" << endl;
    cout << "\t|                                                       |" << endl;
    cout << "\t|                                                       |" << endl;
    cout << "\t|   F I L A    A L O C A Ç Ã O    S E Q U E N C I A L   |" << endl;
    cout << "\t|                                                       |" << endl;
    cout << "\t|___                                                 ___|" << endl;

    cout << "\n\t Digite o Nº da Fila: ";
    cin >> tamanho;

    Fila<int> fl(tamanho);
    system("cls");
    int opc, num;

    //Menu
    do{
        cout << "\t ___                                                 ___" << endl;
        cout << "\t|                                                       |" << endl;
        cout << "\t|                                                       |" << endl;
        cout << "\t|   F I L A    A L O C A Ç Ã O    S E Q U E N C I A L   |" << endl;
        cout << "\t|                                                       |" << endl;
        cout << "\t|___                                                 ___|\n" << endl;
        cout << "\t\t     1    -    Inserir" << endl;
        cout << "\t\t     2    -    Remover" << endl;
        cout << "\t\t     3    -    Mostrar 1º da Fila" << endl;
        cout << "\t\t     4    -    Exibir Fila" << endl;
        cout << "\t\t     5    -    Sair\n\t________________________________________________________" << endl;

        cout << "\n\n\t\t\tSelecione: ";
        cin >> opc;

        system("cls");

        switch(opc){
            //Inserir na Fila:
            case 1:
                cout << "\t     ___                                          ___" << endl;
                cout << "\t    |                                                |" << endl;
                cout << "\t    |       I N S E R I R     N A     F I L A        |" << endl;
                cout << "\t    |___                                          ___|\n" << endl;

                //Se fila estiver Cheia
                if(fl.filaCheia())
                {
                    cout << "\n\t\t          Fila está Cheia!....\n\n\t      ";
                    system("pause");
                }
                else{
                    cout << "\n\t\t      Digite um Número: ";
                    cin >> num;

                    //Inserindo
                    fl.inserir(num);
                }
                break;
            /****************************************************************************************************/

            //Remover da Fila:
            case 2:
                cout << "\t     ___                                          ___" << endl;
                cout << "\t    |                                                |" << endl;
                cout << "\t    |       R E M O V E R     D A     F I L A        |" << endl;
                cout << "\t    |___                                          ___|\n" << endl;

                //Se fila estiver Vazia
                if(fl.filaVazia())
                {
                    cout << "\n\t\t          Fila está Vazia!....\n\n\t      ";
                    system("pause");
                }
                else{
                    num = fl.remover();
                    cout << "\n\t\t          Número Removido: " << num;

                    cout << "\n\n\t     ________________________________________________\n\n\t      ";
                    system("pause");
                }
                break;
            /****************************************************************************************************/

            //Mostrar 1º da Fila:
            case 3:
                cout << "\t     ___                                          ___" << endl;
                cout << "\t    |                                                |" << endl;
                cout << "\t    |      P R I M E I R O     D A     F I L A       |" << endl;
                cout << "\t    |___                                          ___|\n" << endl;

                //Se fila estiver Vazia
                if(fl.filaVazia())
                {
                    cout << "\n\t\t          Fila está Vazia!....\n\n\t      ";
                    system("pause");
                }
                else{
                    cout << "\n\t\t          Número Inicial: " << fl.primeiro();

                    cout << "\n\n\t     ________________________________________________\n\n\t      ";
                    system("pause");
                }
                break;
            /****************************************************************************************************/

            //Exibir Fila:
            case 4:
                cout << "\t     ___                                        ___" << endl;
                cout << "\t    |                                              |" << endl;
                cout << "\t    |      E X I B I N D O     A     F I L A       |" << endl;
                cout << "\t    |___                                        ___|\n" << endl;

                //Se fila estiver Vazia
                if(fl.filaVazia())
                {
                    cout << "\n\t\t          Fila está Vazia!....\n\n\t      ";
                    system("pause");
                }
                else{

                    //Se a Posição de "Início" do Vetor é menor que a Posição de "Fim"
                    cout << "\n\n\t     |";
                    if(fl.getInicio() < fl.getFim())
                    {
                        for(int i=fl.getInicio(); i<=fl.getFim(); i++)
                        {
                            cout << "   " << fl.getValor(i) << "   |";
                        }
                    }
                    else{

                        for(int i=fl.getInicio(); i<=tamanho-1; i++)
                        {

                            cout << "   " << fl.getValor(i) << "   |";

                            //Se a Posição de "Início" é a última (tamanho-1) do Vetor
                            if(i == tamanho-1)
                            {
                                for(int x=0; x<=fl.getFim(); x++)
                                {
                                    cout<< "   " << fl.getValor(x) << "   |";
                                }
                            }
                        }

                    }

                    cout << "\n\n\n\t     ______________________________________________\n\n\t      ";
                    system("pause");
                }
                break;
            /****************************************************************************************************/

            //Sair:
            case 5:
                cout << "\t ___                                                 ___" << endl;
                cout << "\t|                                                       |" << endl;
                cout << "\t|                                                       |" << endl;
                cout << "\t|   F I L A    A L O C A Ç Ã O    S E Q U E N C I A L   |" << endl;
                cout << "\t|                                                       |" << endl;
                cout << "\t|___                                                 ___|" << endl;
                cout << "\n\t\t\t         Fim...." << endl;
                cout << "\n\t________________________________________________________\n\n";

                return 0;
                break;
            /****************************************************************************************************/

            //Se for digitado outro Valor:
            default:
                continue;
                break;
        }
        system("cls");
    }
    while(opc != 5);
}
