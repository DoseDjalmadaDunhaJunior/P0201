#include <iostream>
#define num 100
using namespace std;
// espaco == 32
/*transdutor que reconhece numeros inteiros e variaveis
alem de construir uma matriz char em que cada linha
 devera ter a ocorrencia de cada variavel A saida sera:
 */

char vars[num][num];
int vl = 0;
int vc = 0;
char temps[num];
int resp[num];
int tempn;
char v;
int cg = 0;

bool buscaRepeteco(char* vet){
    int k = 0; // é o tamanho de vet
    int c = 0;
    for (k = 0; vet[k] != '\0'; k++) {

    }
    for (int i = 0; i < vl; i++) {
        for (int j = 0; vet[j] != '\0' ; j++) {
            if(vars[i][j] == vet[j]){
                c++;
            }
        }
    }
    if(c == k){
        return false;
    }
    else {
        return true;
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
    v[1] = 'b';
    v[2] = '7';
    v[3] = ' ';
    v[4] = 'b';
    v[5] = '3';
    v[6] = '4';
    v[7] = ' ';
    v[8] = 'c';
    v[9] = '7';
    v[10] = '8';
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

    int k = 0;
    int l = 0;
    for (k = 0; (vet[k] != 0) && (vet[k] != 32); k++) {

    }
    if(vet[0] <= '9' && vet[0] >= '0'){
        for (l; ((vet[l] <= '9') && (vet[l] >= '0')) ; l++) {

        }
    }
    c = l;

    for (j = 0; j < k; j++) {
        vars[i][j] = vet[c];
        c++;

    }
    i++;
    vl = vl +1;
    *a = i;
}

void imprimeMatriz(){
    int i = 0;
    int j = 0;
    for (i = 0; i < vl ; i++) {
        for (j = 0; vars[i][j] != '\0' ; j++) {
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
    puts("insira as variavies e numeros (conjuntos separados por espaço)");
    char vet[num];
    char ver[num];
    int i = 0;
    vetorExemplo(vet);
    //scanf("%[^\n]", vet);
    //fflush(stdin);
    pegaParcela(vet,ver,0,0);
    if(buscaRepeteco(ver)) {
        populaMatriz(ver, &i);
    }
    pegaParcela(vet,ver,0,3);
    if(buscaRepeteco(ver)) {
        populaMatriz(ver, &i);
    }
    pegaParcela(vet,ver,0,7);
    if(buscaRepeteco(ver)) {
        populaMatriz(ver, &i);
    }

    imprimeMatriz();


    return 0;
}