#include <iostream>
#include <bitset>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Teste de primeira compilacao" << endl;
    for (uint8_t i = 65; i > 33; --i)
    {
         bitset<10>   b(i);
        cout << "Valor de i: " << i <<" - "<< b <<endl;
    }

    return EXIT_SUCCESS;
}
