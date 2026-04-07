# Super-Trunfo-em-C
Um simulador de jogo Super Trunfo desenvolvido em linguagem C. O programa permite cadastrar estados e cidades, gera atributos aleatórios baseados em dados reais (como PIB e População) e permite a comparação estratégica entre duas cartas.



🚀 FuncionalidadesCadastro Dinâmico: O usuário pode definir o nome do estado e da cidade para cada uma das duas cartas.Geração Aleatória de Dados: Os atributos básicos (População, Área, PIB e Pontos Turísticos) são gerados aleatoriamente usando a função rand()


Cálculo de Atributos Derivados:

-Densidade Populacional: $\frac{\text{População}}{\text{Área}}$

-PIB per Capita: $\frac{\text{PIB}}{\text{População}}$

-Super Poder: A soma de todos os atributos (com o inverso da densidade)

-Sistema de Comparação: Um menu interativo que permite comparar atributos específicos ou ver o "Super Poder"

-Lógica de Jogo: O primeiro jogador a vencer dois rounds de comparação é declarado o vencedor do jogo.




🛠️ Tecnologias Utilizadas

-Linguagem C

-Bibliotecas Standard: stdio.h, stdlib.h

-Geração de Tempo: time.h (utilizada para o seed dos números aleatórios).



🎮 Como Jogar

1. Menu Principal: Escolha a opção A e B para "cadastrar" as suas cartas (inserir nomes de estado e cidade).

2. Iniciar Jogo: Escolha a opção C. O programa calculará automaticamente os poderes das cartas.

3. Comparação: Escolha qual atributo deseja usar para o duelo (Ex: 1 para População, 5 para Densidade, etc.).

4. Vitória: O jogo verifica as pontuações e encerra quando um vencedor definitivo é encontrado.

- Nota importante: Na comparação de Densidade Populacional, vence a carta que possuir o menor valor (seguindo as regras reais do Super Trunfo).




💻 Exemplo de Execução

_______-------Vamos jogar Super Trunfo!-------_______ 


Selecione o Jogador

A. Jogador 1

B. Jogador 2

C. Comparação de cartas

D. Sair

Opção escolhida: A

*Jogador 1 Escolhido... 

Escolha o nome do seu Estado: Alagoas

Escolha o nome da sua Cidade: Maceió





📂 Como Compilar e Rodar


Se você tiver um compilador GCC instalado (como o MinGW no Windows ou nativo no Linux/Mac):

Abra o terminal na pasta do arquivo.

Compile o código:


Bash
gcc super-trunfo.c -o supertrunfo

Execute o programa:

Bash
./supertrunfo




🧠 Conceitos de Programação Aplicados
Este projeto demonstra o uso de:

Estruturas de Repetição: while para manter o jogo rodando e menus persistentes.

Estruturas Condicionais: if/else e switch case para lógica de decisão e menus.

Manipulação de Variáveis: Uso de int, float, char[].

Entrada e Saída: printf e scanf para interação com o usuário.

Lógica Matemática: Cálculos de densidade e proporcionalidade.

Desenvolvido por Duck101X 🚀
