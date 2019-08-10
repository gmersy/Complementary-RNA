// Gabe Mersy
#include <iostream>
#include <string>
using namespace std;
// Returns the complementary mRNA strand for a given DNA strand
int main()
{
    string in;

    cout << "What is the DNA strand?" << endl;
    cin >> in;

for(int i = 0; i < in.length(); i++)
{
    if (in[i] == 'A')
    {
        in[i] = 'T';
    }

    else if(in[i] == 'T')
    {
         in[i] = 'A';
    }

    else if(in[i] == 'C')
    {
         in[i] = 'G';
    }

    else if(in[i] == 'G')
    {
         in[i] = 'C';
    }

}

for(int i = 0; i < in.length(); i++)
{
    if (in[i] == 'T')
    {
        in[i] = 'U';
    }

}


cout << "Complementary RNA strand" << in << endl;
return 0;
}
