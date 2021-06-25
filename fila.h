#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template <typename Tipo>

class Fila{
private:
    int fim, inicio;
    unsigned qtde;
    unsigned tamanho;
    Tipo *v;

public:
    //Fun��o inicializadora
    Fila(unsigned tam){
        fim = -1;
        inicio = 0;
        qtde = 0;
        tamanho = tam;
        v = new Tipo[tamanho];
    }

    ~Fila(){
        delete []v;
    }

    //Inserir
    void inserir(Tipo x){
        fim++;
        //Quando posi��o de Fim chegar no valor do tamanho
        if(fim == tamanho) {
            fim = 0;
        }
        v[fim] = x;
        qtde++;
    }

    //Remover
    Tipo remover(){
        Tipo temp = v[inicio]; //Guardar valor inicial na vari�vel tempor�ria
        inicio++;
        //Quando posi��o de In�cio chegar no valor do tamanho
        if(inicio == tamanho){
            inicio = 0;
        }
        qtde--;
        return temp;
    }

    //Primeiro da Fila
    Tipo primeiro(){
        return v[inicio];
    }

    bool filaCheia(){
        return qtde == tamanho; //Se Quantidade for igual ao tamanho da fila
    }

    bool filaVazia(){
        return qtde == 0; //Se Fila estiver vazia, retornar� 0
    }

    //Posi��o de Fim
    int getFim(){
        return fim;
    }

    //Posi��o de In�cio
    int getInicio(){
        return inicio;
    }

    //Quantidade
    int getQtde(){
        return qtde;
    }

    Tipo getValor(unsigned posicao){
        return v[posicao];
    }

    unsigned getTamanho(){
        return tamanho;
    }

};

#endif // FILA_H_INCLUDED
