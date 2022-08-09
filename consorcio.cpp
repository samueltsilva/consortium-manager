#include <iostream>

class Consorcio
{
    public:
        Consorcio(int value);

        void setNomes(std::string _nomes[]);
        void setQuantidadePessoas(int _quantidadePessoas);

        int geQuantidadePessoas();
        std::string getNomes(int index);

    private:
        int quantidadePessoas;
        std::string nomes[12];
};

Consorcio::Consorcio(int value)
{
    this->quantidadePessoas = value;
}

void Consorcio::setNomes(std::string _nomes[])
{
    for (int i = 0; i < 12; i++)
        this->nomes[i] = _nomes[i];
}

std::string Consorcio::getNomes(int index)
{
    /*for (int i = 0; i < 12; i++)
        std::cout << this->nomes[i] << "\n";*/

    return this->nomes[index];

}


int main()
{
    std::string nomes[12];

    nomes[0] = "Breno Sousa";
    nomes[1] = "Jéssica Roberta";
    nomes[2] = "Samuel Trindade";
    nomes[3] = "Junio Dias";
    nomes[4] = "Renata Nogueira";
    nomes[5] = "Gisele Bárbara";
    nomes[6] = "Fernanda Martins";
    nomes[7] = "Gabriela Carnot";
    nomes[8] = "Junio Dias";
    nomes[9] = "Priscila Cardeal";
    nomes[10] = "Andréia Palucci";
    nomes[11] = "Felipe Macedo";

    /*std::cout << sizeof(nomes) << std::endl;
    std::cout << sizeof(*nomes) << std::endl;
    std::cout << sizeof(nomes[1]) << std::endl;
    std::cout << sizeof(*nomes[1]) << std::endl;
    std::cout << nomes << std::endl;
    std::cout << *nomes << std::endl;
    std::cout << nomes[1] << std::endl;
    std::cout << *nomes[1] << std::endl; */

    Consorcio object(12);
    std::string result;

    object.setNomes(nomes);
    result = object.getNomes(2);

    std::cout << result << std::endl;


	return 0;
}