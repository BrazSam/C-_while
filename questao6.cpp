/*Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de
consumo. Para cada consumidor são digitados os seguintes dados: número do consumidor,
quantidade de kwh consumidos durante o mês e o tipo (código) do consumidor (1-
residencial, 2-comercial, 3-industrial)
Residencial - preço em reais por kwh = 0,3
Comercial - preço em reais por kwh = 0,5
Industrial - preço em reais por kWh = 0,7
Os dados devem ser lidos até que seja encontrado um consumidor com número 0 (zero).
Calcular e imprimir:
a) O custo total para cada consumidor
b) O total de consumo para os três tipos de consumidor
c) Qual categoria consome mais?*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero, tipo;
    double kwh, custo, total_residencial = 0, total_comercial = 0, total_industrial = 0;

    while (true)
    {
        cout << "Informe o número do consumidor (0 para encerrar): " << endl;
        cin >> numero;
        cout << endl;

        if (numero == 0)
        {
            break;
        }

        cout << "Informe a quantidade de kWh consumidos no mês: " << endl;
        cin >> kwh;
        cout << endl;

        cout << "Informe o tipo de consumidor (1-Residencial | 2-Comercial | 3-Industrial): " << endl;
        cin >> tipo;
        cout << endl;

        if (tipo == 1)
        {
            custo = kwh * 0.3;
            total_residencial += kwh;
        }
        else if (tipo == 2)
        {
            custo = kwh * 0.5;
            total_comercial += kwh;
        }
        else if (tipo == 3)
        {
            custo = kwh * 0.7;
            total_industrial += kwh;
        }
        else
        {
            cout << "Tipo de consumidor inválido." << endl;
            continue;
        }

        cout << "Custo total para este consumidor: " << endl;
        cout << custo << endl;
        cout << endl;
    }

    cout << "\nTotal de consumo por tipo de consumidor:" << endl;
    cout << "Residencial: " << total_residencial << " kWh" << endl;
    cout << "Comercial: " << total_comercial << " kWh" << endl;
    cout << "Industrial: " << total_industrial << " kWh" << endl;
    cout << endl;

    cout << "Categoria com maior consumo: " << endl;
    if (total_residencial > total_comercial && total_residencial > total_industrial)
    {
        cout << "Residencial" << endl;
    }
    else if (total_comercial > total_residencial && total_comercial > total_industrial)
    {
        cout << "Comercial" << endl;
    }
    else if (total_industrial > total_residencial && total_industrial > total_comercial)
    {
        cout << "Industrial" << endl;
    }
    else
    {
        cout << "Houve empate entre categorias." << endl;
    }

    return 0;
}
