# 🃏 Super Trunfo - Cidades em C

Este projeto é uma implementação simples do jogo **Super Trunfo** utilizando a linguagem **C**.  
O objetivo é comparar informações entre duas cidades e determinar qual delas “vence” de acordo com critérios definidos — neste caso, a **população**.

## 📘 Descrição do Projeto

O programa solicita ao usuário os dados de **duas cidades**, incluindo:

- Estado (UF)
- Código da carta
- Nome da cidade
- População
- Área
- PIB (Produto Interno Bruto)
- Número de pontos turísticos

Com base nesses dados, ele calcula automaticamente:

- **Densidade demográfica**
- **PIB per capita**
- **Super poder da cidade** (uma métrica fictícia combinando vários valores)

Por fim, o programa compara as duas cidades e informa qual delas venceu com base na **população total**.

## ⚙️ Como Executar

### 1. Compilar o programa

No terminal, utilize o compilador `gcc`:

```bash
gcc super-trunfo.c -o super-trunfo
```

### 2. Executar o programa

```bash
./super-trunfo.exe
```

## 🧮 Exemplo de Execução

```text
Informe os dados da primeira cidade.
Estado:
BA
Código:
BA01
Nome da Cidade:
Salvador
População:
2886698
Área:
692.8
PIB:
63600000
Número de Pontos Turísticos:
45

Informe os dados da segunda cidade.
Estado:
RJ
Código:
RJ01
Nome da Cidade:
RioDeJaneiro
População:
6748000
Área:
1200.3
PIB:
430000000
Número de Pontos Turísticos:
80

Carta 1 - Salvador (BA): 2886698
Carta 2 - RioDeJaneiro (RJ): 6748000
Resultado: Carta 2 venceu
```

## 🧠 Conceitos Utilizados

- Tipos de dados primitivos (`char`, `float`, `short int`, `unsigned long long int`)
- Manipulação de **strings** em C
- Entrada e saída de dados com `scanf` e `printf`
- Cálculos matemáticos simples
- Estruturas condicionais (`if...else`)
- Organização e clareza de código

## 🛠️ Ferramentas Recomendadas

- **Code::Blocks**, **Dev-C++** ou **Visual Studio Code** para Windows
- **GCC** (GNU Compiler Collection) em Linux

## 👨‍💻 Autor

**Bruno**  
Estudante de Análise e Desenvolvimento de Sistemas  
Desenvolvedor Full Stack em formação
