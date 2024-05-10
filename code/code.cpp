#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    cout << "Enter the message:\n";
    char msg[1000];
    cin.getline(msg, 1000); // lấy 1000 ký tự của thông điệp
    int i, j, length, choice, key;
    cout << "Enter key: ";
    cin >> key; // Nhập số key để mã hóa
    length = strlen(msg);
    cout << "Enter your choice \n1. Encryption \n2. Decryption \n";
    cin >> choice;
    if (choice == 1) // Chọn giải mã hoặc mã hóa
    {
        char ch;
        for (int i = 0; msg[i] != '\0'; ++i)
        {
            ch = msg[i];
            if (ch >= 'a' && ch <= 'z') // Nếu chữ cái ko nằm đầu hoặc cuối bảng chữ cái
            {
                ch = ch + key;
                if (ch > 'z')
                {
                    ch = ch - 'z' + 'a' - 1;
                }
                msg[i] = ch;
            }

            else if (ch >= 'A' && ch <= 'Z') // Nếu chữ cái ko nằm đầu hoặc cuối bảng chữ cái(set up cho chữ hoa)
            {
                ch = ch + key;
                if (ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }
                msg[i] = ch;
            }
        }
        cout << "Encrypted message: " << msg;
    }
    else if (choice == 2) // nếu lựa chọn giải mã
    {
        char ch;
        for (int i = 0; msg[i] != '\0'; ++i)
        {
            ch = msg[i];
            if (ch >= 'a' && ch <= 'z') // Nếu chữ cái ko nằm đầu hoặc cuối bảng chữ cái
            {
                ch = ch - key;
                if (ch < 'a')
                {
                    ch = ch + 'z' - 'a' + 1;
                }
                msg[i] = ch;
            }

            else if (ch >= 'A' && ch <= 'Z') // Nếu chữ cái ko nằm đầu hoặc cuối bảng chữ cái(set up cho chữ hoa)
            {
                ch = ch - key;
                if (ch < 'A')
                {
                    ch = ch + 'Z' - 'A' + 1;
                }
                msg[i] = ch;
            }
        }
        cout << "Decrypted message: " << msg;
    }
}
