#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[]) {
    if(atoi(argv[1]) <= 0)
    {
        cout << "Usage: ./star" << endl;
        return 0;
    }
    int choix = atoi(argv[1]);

    // BOUCLE 1
    for(int i = 1; i <= choix; i++)
    {
        for(int j = 1; j <= (choix*2+1)+((choix*2)/2)-i; j++){
            cout << " ";
        }
        for(int k = 0; k <= i-1; k++){
            if(k == 0 || k == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // BOUCLE 2 a)
    for(int i = 0; i < choix*2+1;i++)
    {
        cout << "*";
    }

    // BOUCLE 2 b)
    for(int i = choix*2+1; i < (2*(choix*2+1))+(choix*2-1);i++)
    {
        if(i < (choix*2+1)+(choix*2-1))
            cout << " ";
        else if(i >= (choix*2+1)+(choix*2-1))
            cout << "*";
    }
    cout << endl;

    // BOUCLE 3 a)
    for(int i = choix; i > 0; i--)
    {
        for(int j = 1; j <= choix-i; j++){
            cout << " ";
        }
        for(int k = 0; k <= i-1; k++){
            if(k == 0)
                cout << " *";
        }
        for(int j = 0; j <= ((choix*2))+(choix*2-1)-1; j++){
            cout << " ";
        }
        for(int k = 0; k <= i-1; k++){
            if(k == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // BOUCLE 3 b)

    for(int i = 2; i <= choix; i++)
    {
        for(int j = 1; j <= choix-i; j++){
            cout << " ";
        }
        for(int k = 0; k <= i-1; k++){
            if(k == 0)
                cout << " *";
        }
        for(int j = 0; j <= ((choix*2))+(choix*2-1)-1; j++){
            cout << " ";
        }
        for(int k = 0; k <= i-1; k++){
            if(k == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // BOUCLE 4 a)
    for(int i = 0; i < choix*2+1;i++)
    {
        cout << "*";
    }

    // BOUCLE 4 b)
    for(int i = choix*2+1; i < (2*(choix*2+1))+(choix*2-1);i++)
    {
        if(i < (choix*2+1)+(choix*2-1))
            cout << " ";
        else if(i >= (choix*2+1)+(choix*2-1))
            cout << "*";
    }
    cout << endl;
    
    // BOUCLE 5
    for(int i = choix; i > 0; i--)
    {
        for(int j = 1; j <= (choix*2+1)+((choix*2)/2)-i; j++){
            cout << " ";
        }
        for(int k = 0; k <= i-1; k++){
            if(k == 0 || k == i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
