# 🃏 Super Trunfo - Cidades em C

Este projeto é uma implementação completa do jogo **Super Trunfo**, desenvolvida em **C**, que compara informações entre **duas cidades** com base em diferentes atributos, como população, área, PIB, densidade demográfica e muito mais.

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

Com base nesses dados, ele calcula automaticamente:

- **Densidade demográfica**
- **PIB per capita**
- **Super poder da cidade** (uma métrica fictícia baseada em vários fatores)

Após o cadastro das duas cidades, o programa exibe um **menu interativo**, permitindo escolher o atributo de comparação.

## ⚙️ Atributos de Comparação Disponíveis

1. Nome do país (exibe todas as informações das cartas)
2. População
3. Área
4. PIB
5. Número de pontos turísticos
6. Densidade demográfica
7. PIB per capita
8. Super poder

O programa realiza a comparação e exibe o resultado indicando **qual carta venceu**.  
Em caso de empate, uma mensagem “Empate!” é exibida.

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

Escolha um atributo para à comparação:
1. Nome do país (exibir informações)
2. População
3. Área
4. PIB
5. Número de pontos turísticos
6. Densidade demográfica
7. PIB per capita
8. Super poder

2

Populações das cartas:
Carta 1 - Salvador (BA - Brasil): 2886698
Carta 2 - RioDeJaneiro (RJ - Brasil): 6748000
Resultado: Carta 2 venceu
```

## 🧠 Conceitos Utilizados

- Tipos de dados primitivos (`char`, `float`, `short int`, `long long int`)
- Manipulação de **strings** em C
- Cálculos matemáticos e conversões de tipo
- Estruturas condicionais (`if`, `else`, `switch-case`)
- Comparações numéricas e tratamento de empates
- Organização, clareza e modularidade do código

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
