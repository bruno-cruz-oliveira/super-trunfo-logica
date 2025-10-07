# 🃏 Super Trunfo - Cidades em C

Este projeto é uma implementação detalhada do jogo **Super Trunfo**, desenvolvida em **C**, que permite comparar **duas cidades** com base em múltiplos atributos — como população, área, PIB, densidade demográfica, PIB per capita e até um “super poder” calculado a partir de todos esses dados.

## 📘 Descrição do Projeto

O programa solicita ao usuário os dados de **duas cidades**, incluindo:

- País
- Estado (UF)
- Código da carta
- Nome da cidade
- População
- Área (em km²)
- PIB (Produto Interno Bruto)
- Número de pontos turísticos

Após o preenchimento dos dados, o programa:

1. Calcula automaticamente:
   - **Densidade demográfica**
   - **PIB per capita**
   - **Super poder da cidade** (valor derivado de todos os atributos principais)
2. Exibe um **menu interativo** para que o usuário escolha **dois atributos de comparação**.
3. Compara os atributos selecionados e exibe:
   - O vencedor de cada atributo
   - Um resultado final com base na **soma dos dois atributos**

Em caso de empate, o programa informa o resultado adequadamente.

## ⚙️ Atributos de Comparação Disponíveis

1. Nome do país (exibe todas as informações das cartas)
2. População
3. Área
4. PIB
5. Número de pontos turísticos
6. Densidade demográfica
7. PIB per capita
8. Super poder

Após escolher o primeiro atributo, o programa exibe uma nova lista excluindo o atributo já selecionado, garantindo que o segundo seja diferente.

## 🧮 Exemplo de Execução

```text
Informe os dados da primeira cidade.
País:
Brasil
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
País:
Brasil
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

Escolha o primeiro atributo para à comparação:
1. Nome do país (exibir informações)
2. População
3. Área
4. PIB
5. Número de pontos turísticos
6. Densidade demográfica
7. PIB per capita
8. Super poder
2

Escolha o segundo atributo para à comparação:
1. Nome do país (exibir informações)
3. Área
4. PIB
5. Número de pontos turísticos
6. Densidade demográfica
7. PIB per capita
8. Super poder
4

Populações das cartas:
Carta 1 - Salvador (BA - Brasil): 2886698
Carta 2 - RioDeJaneiro (RJ - Brasil): 6748000
Resultado: Carta 2 venceu

PIB das cartas:
Carta 1 - Salvador (BA - Brasil): 63600000.00
Carta 2 - RioDeJaneiro (RJ - Brasil): 430000000.00
Resultado: Carta 2 venceu

Soma dos atributos:
Carta 1 - Salvador (BA - Brasil): 63602886698.00
Carta 2 - RioDeJaneiro (RJ - Brasil): 436748000000.00
Resultado: Carta 2 venceu
```

## 🧠 Conceitos Utilizados

- Tipos de dados primitivos (`char`, `float`, `short int`, `long long int`)
- Manipulação de **strings** em C
- Entrada e saída de dados (`scanf`, `printf`)
- **Estruturas condicionais** (`if`, `else`, `switch-case`)
- Cálculos matemáticos e comparações numéricas
- **Prevenção de empates e somatório de atributos**
- **Organização e clareza de código**

## ⚙️ Como Executar

### 1. Compilar o programa

Use o compilador **GCC**:

```bash
gcc super-trunfo.c -o super-trunfo
```

### 2. Executar o programa

```bash
./super-trunfo
```

_(No Windows, use `super-trunfo.exe`)_

## 🧰 Ferramentas Recomendadas

- **Code::Blocks**, **Dev-C++** ou **Visual Studio Code** (Windows)
- **GCC** no Linux (instalado via `build-essential`)

## 👨‍💻 Autor

**Bruno**  
Estudante de Análise e Desenvolvimento de Sistemas  
Desenvolvedor Full Stack em formação
