#include <iostream>
#include <string>
#define MDM 10   // Max dimensione matrice
#define MIVM -10 // Min valore matrice
#define MAVM 10  // Max valore matrice
struct punto
{
    int x;
    int y;
    int v;
};
void stampa(int mx[MDM][MDM], int righe, int colonne);
void riempi(int mx[MDM][MDM], int righe, int colonne);
void trova_min_max(int mx[MDM][MDM], struct punto *pmin, struct punto *pmax, int righe, int colonne);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int i = (rand() % 9) + 2;
    int j = (rand() % 9) + 2;
    int mx[MDM][MDM];
    riempi(mx, i, j); // riempi dall'utente
    stampa(mx, i, j); // stampa a video
    struct punto pmin, pmax;
    trova_min_max(mx, &pmin, &pmax, i, j); // trova valore minimo e massimo

    // stampa vmax, vmin e posizioni
    std::cout << "Il valore minimo e'  " << pmin.v << " e si trova nel punto (" << pmin.x + 1 << "," << pmin.y + 1 << ")" << std::endl;
    std::cout << "Il valore massimo e' " << pmax.v << " e si trova nel punto (" << pmax.x + 1 << "," << pmax.y + 1 << ")" << std::endl;
    return 0; // fine
}
int ottieni(std::string messaggio, int min, int max)
{
    int x;
    do
    {
        std::cout << messaggio;
        std::cin >> x;
    } while (x < min || x > max);
    return x;
}
void riempi(int mx[MDM][MDM], int righe, int colonne)
{
    for (int i = 0; i < righe; i++)
        for (int j = 0; j < colonne; j++)
        {
            mx[i][j] = ottieni("Cella [" + std::to_string(i) + "," + std::to_string(j) + "]",MIVM,MAVM);
        }
};
void stampa(int mx[MDM][MDM], int righe, int colonne)
{
    for (int i = 0; i < righe; i++)
    {
        std::cout << "|";
        for (int j = 0; j < colonne; j++)
        {
            std::cout << mx[i][j] << "\t|";
        }
        std::cout << std::endl;
    }
}
void trova_min_max(int mx[MDM][MDM], struct punto *pmin, struct punto *pmax, int righe, int colonne)
{
    pmin->v = 10;
    pmax->v = -10;
    for (int i = 0; i < righe; i++)
        for (int j = 0; j < colonne; j++)
        {
            if (mx[i][j] < pmin->v)
            {
                pmin->v = mx[i][j];
                pmin->x = i;
                pmin->y = j;
            };
            if (mx[i][j] > pmax->v)
            {
                pmax->v = mx[i][j];
                pmax->x = i;
                pmax->y = j;
            };
        }
}