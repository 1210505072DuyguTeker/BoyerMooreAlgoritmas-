#include <iostream>
#include <string>
#include <fstream>
using namespace std;


bool bul(string dosya_yolu, string kelimeler)
{

    for(int i=0; i < dosya_yolu.size()-kelimeler.size()+1; ++i)
    {

        int check = 0;
        for(int c = 0; c<kelimeler.size(); ++c)
        {
            if(dosya_yolu[i+c] == kelimeler[c])
            {
                check++;
            }
        }

        if(check == kelimeler.size())
        {
            return true;
        }

    }
  return false;
}



int main()
{
	string dosya_yolu=("alice_in_wonderland.txt");
  
    string kelimeler[] ={ "swim","sigh","upon","Dormouse","jury-box"};

    if(bul(dosya_yolu,kelimeler[4]))

    {
        cout << "Aranilan indexli kelime bulundu" << endl;
    }else
    {
        cout << "Aranilan indexli kelime bulunamadi" << endl;
    }

    return 0;
}































