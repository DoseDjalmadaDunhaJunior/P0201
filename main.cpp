#include <iostream>
#define num 100
using namespace std;
// espaco == 32

/*transdutor que reconhece numeros inteiros e variaveis
alem de construir uma matriz char em que cada linha
 devera ter a ocorrencia de cada variavel A saida sera:
 */


char vars[100][100];
char temps[100];
int tempn;
char v;
int temp;
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
        cout<<ver<<endl;
        s = ((n[i] - 48) * c) + s;
        c = c/10;
    }
    return s;
}

//pega apenas a parcela do numero
int pegaN(char* vet){
    char n[num];
    char aux[num];
    int i = 0;
    cin>>n;
    for (i = 0 ; (n[i] <= '9' && n[i] >= '0' ); i++) {
        aux[i] = n[i];
    }
    cout<<i<<endl;
    cout<<aux<<endl;
    return converte(aux,i);
}

void coisa(char ent){

}

int main() {
    puts("insira as variavies e numeros (conjuntos separados por espaço)");
    char vet[num];
    char temp[num];
    int j = 0;
    int c = 0;
    //cin >> vet;
    scanf("%[^\n]", vet);
    fflush(stdin);

    for (int i = 0; i < 9; i++) {
        if (vet[i] == 32) {
            c = i;
            temp[j] = '\0';
        }
        else{
            temp[(j-c)] = vet[i];
        }
        j++;
    }
    cout<<temp<<endl;
    return 0;
}