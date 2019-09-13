#include <iostream>
#define num 100
using namespace std;
// espaco == 32

/*transdutor que reconhece numeros inteiros e variaveis
alem de construir uma matriz char em que cada linha
 devera ter a ocorrencia de cada variavel A saida sera:
 */


char vars[num][num];
char temps[num];
int tempn;
char v;
int cg = 0;

int dica() {
    for (int i = 0; i <= 2; i++) { // 2 == p
        if (temps[i], vars[i]) {
            return i;
        }
        else{
            vars[i][0] = temps[i];
            return i;
        }
        {

        }
    }
}

//converte char para int
int converte(char* n, int tam){
    int s;
    s = 0;
    int c = 1;
    for (int j = 0; j < (tam-1); j++) {
        c = 10 * c;
    }
    int ver;
    for (int i = 0; i < tam; i++) {
        ver = (n[i] - 48) * c;
        s = ((n[i] - 48) * c) + s;
        c = c/10;
    }
    return s;
}

//pega apenas a parcela do numero
int pegaN(char* n){
    char aux[num];
    int i = 0;
    for (i = 0 ; (n[i] <= '9' && n[i] >= '0' ); i++) {
        aux[i] = n[i];
    }
    return converte(aux,i);
}

//pega a parcela a12 ate o espaco, depois le o resto, dividindo
void pegaParcela(char* vet,char* temp,int j, int i){
    //int j = 0;
    int c = 0;
    if(vet[i] == 32){
        i++;
    }
    for (i; vet[i] != '\0'; i++) {
        if (vet[i] == 32) {
            c = (i+1);
            temp[j] = '\0';
            return;
        }
        else{
            temp[(j-c)] = vet[i];
        }
        j++;
    }
    //cout<<temp<<endl;
}

// a funcao abaixo tem que ser analizada
void repeteco(char* vet){
    char aux[num];
    scanf("%[^\n]", vet);
    fflush(stdin);
    int rep = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

        }
        if(vars[i] == vet){
            rep++;
        }
    }
    cout<<rep<<endl;
}

//para facilitar a programação
void populaExemplo(){
    vars[0][0] = 'a';
    vars[0][1] = '1';
    vars[0][2] = '2';
    vars[0][3] = '\n';
    vars[1][0] = 'b';
    vars[1][1] = '3';
    vars[1][2] = '4';
    vars[1][3] = '\n';
    vars[2][0] = 'c';
    vars[2][1] = '5';
    vars[2][2] = '6';
    vars[2][3] = '\n';
}

//para facilitar a programação
void vetorExemplo(char* v) {
    v[0] = 'a';
    v[1] = '1';
    v[2] = '2';
    v[3] = ' ';
    v[4] = ' ';
    v[5] = '3';
    v[6] = '4';
    v[7] = ' ';
    v[8] = 'c';
    v[9] = '5';
    v[10] = '6';
    v[11] = '\0';
}

void pegarNumerosVetor(){
    char txt[num];
    char resp[num];
    vetorExemplo(txt);
    int cont = 1, c = 0;
    for (int i = 0; txt[i] != '\0'; i++) {
        if ((cont != 0) && ((txt[i] == ' '))) {
            cont = 1;
        } else if ((txt[i] == ' ')) {
            cont = i;
        } else if ((txt[i] > '9') || (txt)[i] < '0') {
            cont = 0;
            c = 0;
        } else if ((cont != 0) && (txt[i] <= '9') && (txt[i] >= '0')) {
            resp[c] = txt[i];
            c++;
        }
    }
    //cout<<pegaN(resp)<<endl;
    temps[0] = pegaN(resp);
    //cout<<temps[0]<<endl;
    printf("%i\n", temps[0]);
}

void populaMatriz(char* vet,int* a) {
    int c = 0;
    int i = *a, j = 0;
    for (j = 0; j < 3; j++) {
        vars[i][j] = vet[c];
        c++;

    }
    i++;
    *a = i;
}

void imprimeMatriz(){
    int i = 0;
    int j = 0;
    for (i = 0; i < 3 ; i++) {
        for (j = 0; j < 3 ; j++) {
            cout<<vars[i][j];
        }
        puts("");
    }
}

//sera copiado ao main mais tarde
void logicaParaSalvarNaMatriz(){
    puts("insira as variavies e numeros (conjuntos separados por espaço)");
    char vet[num];
    char ver[num];
    int i = 0;
    vetorExemplo(vet);
    //scanf("%[^\n]", vet);
    //fflush(stdin);
    pegaParcela(vet,ver,0,0);
    populaMatriz(ver,&i);

    pegaParcela(vet,ver,0,3);
    populaMatriz(ver,&i);

    pegaParcela(vet,ver,0,7);
    populaMatriz(ver,&i);

    imprimeMatriz();
}

int main() {

    return 0;
}