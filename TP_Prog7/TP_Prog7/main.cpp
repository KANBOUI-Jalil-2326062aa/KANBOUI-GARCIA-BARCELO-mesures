#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void flux_cin()
{
    while (true)
    {
        string str;
        getline(cin,str);
        if (cin.eof()) break;
        cout << str << endl;
    }
}

void flux_cinV2()
{
    for (string str; getline(cin,str); )
        cout << str << endl;
}


void afichFich()
{
    ifstream ifs ("out.txt");
    if(!ifs.is_open())
    {
        cerr << "fichier inexistant" << endl;
        exit(1);
    }
    for (string str; getline(ifs,str); )
        cout << str << endl;
}

void nomFichAuClavier()
{
    string fileSource;
    //saisie du nom de fichier source
    cin >> fileSource;
    ifstream ifs (fileSource);
    //on verifie si le fichier existe
    if(!ifs.is_open())
    {
        cerr << "fichier inexistant" << endl;
        exit(1);
    }

    string fileDestination;
    cin >> fileDestination;
    ofstream ofs (fileDestination);
    unsigned numLigne (0);
    //on recupere les lignes du fichier source
    for (string str; getline(ifs,str); )
        //on recopie ces lignes dans le fichier destination
        ofs << setw(4) << ++numLigne << ": " << str << endl;
}

void validFichier()
{
    unsigned nbTentatives (0);
    ifstream ifs;
    do
    {
        cout << "nom du fichier en lecture : ";
        string nomFichier;
        getline(cin,nomFichier);
        ifs.open(nomFichier);
        ++nbTentatives;
    } while (!ifs && nbTentatives < 3);
    if (!ifs)
    {
        cerr << "trop de tentatives" << endl;
        exit (1);
    }

    nbTentatives = 0;
    ofstream ofs;
    do
    {
        cout << "nom du fichier en écriture : ";
        string nomFichier;
        getline(cin,nomFichier);
        ofs.open(nomFichier);
        ++nbTentatives;
    } while (!ofs && nbTentatives < 3);
    if (!ofs)
    {
        cerr << "trop de tentatives" << endl;
        exit (1);
    }
    unsigned numLigne (0);
    //on recupere les lignes du fichier source
    for (string str; getline(ifs,str); )
    {
        //on recopie ces lignes dans le fichier destination
        ofs << setw(4) << ++numLigne << ": " << str << endl;
    }
}

void fonctionGet()
{
    string nomFichier;
    cin >> nomFichier;
    ifstream ifs (nomFichier);
    if(!ifs.is_open())
    {
        cerr << "fichier inexistant" << endl;
        exit(1);
    }

    while (true)
    {
        char caract;
        ifs.get(caract);
        cout << caract;
        if (ifs.eof()) break;
    }
}

void ExtractionsMots()
{
    for (string str; cin >> str; )
        cout << str << endl;
}

void ExtractionsCars()
{
    for (char car; cin >> car; )
        cout << car << endl;
}

void extractionsEntiers()
{
    for (int entier; cin >> entier; )
        cout << entier << endl;
}

void extractionsReels()
{
    for (float reel; cin >> reel; )
        cout << reel << endl;
}

int main()
{
    cout << "Hello World!" << endl;
    //flux_cin();
    //nomFichAuClavier();
    //afichFich();
    //validFichier();
    //fonctionGet();
    //ExtractionsMots();
    //ExtractionsCars();
    //extractionsEntiers();
    extractionsReels();
    return 0;
}
