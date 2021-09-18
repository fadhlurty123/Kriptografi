/*
   Nama  : Fahrul Thariq Fadillah
   NPM   : 140810190074
   Desc  : Shift Cipher Program
*/
#include <iostream>
using namespace std;

string encrypt(string text, int s){
	string result = "";
	 for (int i=0;i<text.length();i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
    else
        result += char(int(text[i]+s-97)%26 +97);
    }
    return result;
}

int main(){
	string text;
	int s;
    cout << "Masukan Input : \n";
    cin >> text;
    cout << "Key: \n";
    cin >> s;
	cout << "\nHasil Enskripsi: " << encrypt(text,s);
    cout << "\nHasil Deskripsi: " << encrypt(encrypt(text,s),26-s) <<endl;
	return 0;
}
