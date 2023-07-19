#include <iostream>

using namespace std;

int main()
{
    int umur;
    std::cout << "MENENTUKAN UMUR MEMBUAT SIM  " << std::endl;
    std::cout << "INPUT UMUR :" << std::endl;
    std::cin>>umur;
    if(umur<18)
    std::cout<<"MAAF ANDA TIDAK BISA MEMBUAT SIM"<<std::endl;
    else
    std::cout<<"SELAMAT ANDA BISA MEMBUAT SIM "<<std::endl;
    return 0;
}
