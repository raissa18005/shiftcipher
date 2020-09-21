#include <iostream>
#include<stdlib.h>

using namespace std;

void enkripsi(){
    string plaintext,ciphertext;
    int k,i;
    char p,text;
    cout << "=          ENKRIPSI             =" << endl;
    cout << "Ketikan pesan atau plaintext : ";
    cin.ignore(); getline (cin, plaintext);
    cout << "Masukan jumlah pergeseran : "; cin >> k;
    ciphertext = " ";

    for(i=0;i<plaintext.length();i++){
        p = plaintext[i];
        if(isalpha(plaintext[i])){
            if(isupper(p))
                p = (p+k-65)%26 + 65;
            else
                p = (p+k-97)%26 + 97;
        }
        ciphertext = ciphertext + p;
    }

    cout << "Cipherteks : " << ciphertext <<endl;

}

void dekripsi(){
    string plaintext,ciphertext;
    int k,i;
    char c,text;
    cout << "=          DEKRIPSI             =" << endl;
    cout << "Ketikan Cipherteks : ";
    cin.ignore(); getline (cin, ciphertext);
    cout << "Masukan jumlah pergeseran : "; cin >> k;
    plaintext = " ";

    for(i=0;i<ciphertext.length();i++){
        c = ciphertext[i];
        if(isalpha(ciphertext[i])){
            if(isupper(c))
                c = (c-k-65)%26 + 65;
            else
                c = (c-k-97)%26 + 97;
        }
        plaintext = plaintext+ c;
    }

    cout << "Plaintext : " << plaintext<<endl;
}

int main()
{
    int s, menu;
	do{
		system ("cls");
        cout << "==============================" << endl;
        cout << "=       SHIFT CIPHER         =" << endl;
        cout << "==============================" << endl;
        cout << "= 1. Enkripsi                =" << endl;
        cout << "= 2. Dekripsi                =" << endl;
        cout << "= 3. Exit                    =" << endl;
        cout << "==============================" << endl;
		cout << "Masukkan pilihan anda :  "; cin>>menu;
		switch(menu){
			case 1 :
				system("cls");
				enkripsi();
				system("pause");
			break;
			case 2 :
				system("cls");
				dekripsi();
				system("pause");
			break;
		}
	}while(menu!=3);

    return 0;
}
