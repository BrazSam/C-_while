
```markdown
# 🔁 Exercício com Estruturas de Repetição em C++

## 💡 Descrição

Este projeto é um **exercício simples em C++** que demonstra o uso de **laços de repetição (`while`)** para processar informações de consumo de energia elétrica de diferentes tipos de consumidores.

O programa lê os dados de cada cliente — número, quantidade de kWh consumidos e tipo de consumidor — e calcula o custo total até que seja informado o número `0`, que encerra a execução.

---

## ⚙️ Funcionalidades

- 🔢 Leitura de dados de vários consumidores  
- 💰 Cálculo do custo total de energia por cliente  
- 📊 Soma do consumo total por categoria  
- 🏆 Indicação da categoria com maior consumo  

---

## 🧠 Lógica do Programa

O algoritmo utiliza um **loop `while (true)`** que repete as entradas até o usuário digitar o número `0`.  
Com base no tipo de consumidor informado, é aplicado o valor correto por kWh:

| Tipo de Consumidor | Código | Valor por kWh (R$) |
|--------------------|:------:|:------------------:|
| Residencial        | 1 | 0,30 |
| Comercial          | 2 | 0,50 |
| Industrial         | 3 | 0,70 |

No final, o programa mostra:
- 💵 O custo total individual de cada consumidor  
- ⚡ O total de consumo por tipo  
- 🥇 A categoria que mais consumiu energia  

---

## 🧩 Exemplo de Execução

```

Informe o número do consumidor (0 para encerrar):
1

Informe a quantidade de kWh consumidos no mês:
250

Informe o tipo de consumidor (1-Residencial | 2-Comercial | 3-Industrial):
1

Custo total para este consumidor:
75

Informe o número do consumidor (0 para encerrar):
0

Total de consumo por tipo de consumidor:
Residencial: 250 kWh
Comercial: 0 kWh
Industrial: 0 kWh

Categoria com maior consumo:
Residencial

````

---

## 🧰 Tecnologias Utilizadas

- 🧮 Linguagem: **C++**  
- 💻 Compilador compatível com **C++11** ou superior  
- 🌐 Função `setlocale()` para exibir caracteres em português  

---

## 🚀 Como Executar

1. Clone este repositório:
   ```bash
   git clone https://github.com/SEU_USUARIO/nome-do-repositorio.git
````

2. Acesse a pasta do projeto:

   ```bash
   cd nome-do-repositorio
   ```
3. Compile o código:

   ```bash
   g++ main.cpp -o consumo
   ```
4. Execute o programa:

   ```bash
   ./consumo
   ```

---

## 🎯 Objetivo Educacional

Este exercício foi desenvolvido para **praticar estruturas de repetição e condicionais** em C++, reforçando o raciocínio lógico e o controle de fluxo em programas interativos.

---

## 👨‍💻 Autor

**Samuel Braz**


---

![C++ Badge](https://img.shields.io/badge/Feito_em-C++-00599C?style=for-the-badge\&logo=cplusplus\&logoColor=white)
![Status](https://img.shields.io/badge/Exerc%C3%ADcio-Conclu%C3%ADdo-brightgreen?style=for-the-badge)

```
