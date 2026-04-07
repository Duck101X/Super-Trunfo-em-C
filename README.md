# Super-Trunfo-em-C
Um simulador de jogo Super Trunfo desenvolvido em linguagem C. O programa permite cadastrar estados e cidades, gera atributos aleatórios baseados em dados reais (como PIB e População) e permite a comparação estratégica entre duas cartas.




<br><br><br>









🚀 FuncionalidadesCadastro Dinâmico: O usuário pode definir o nome do estado e da cidade para cada uma das duas cartas.Geração Aleatória de Dados: Os atributos básicos (População, Área, PIB e Pontos Turísticos) são gerados aleatoriamente usando a função rand()










<br><br><br>







<h1> Cálculo de Atributos Derivados: </h1>

-Densidade Populacional: $\frac{\text{População}}{\text{Área}}$
<br><br>
-PIB per Capita: $\frac{\text{PIB}}{\text{População}}$
<br><br>
-Super Poder: A soma de todos os atributos (com o inverso da densidade)
<br><br>
-Sistema de Comparação: Um menu interativo que permite comparar atributos específicos ou ver o "Super Poder"
<br><br>
-Lógica de Jogo: O primeiro jogador a vencer dois rounds de comparação é declarado o vencedor do jogo.

<br><br><br>


<h1>🛠️ Tecnologias Utilizadas</h1>
<br><br>
-Linguagem C
<br><br>
-Bibliotecas Standard: stdio.h, stdlib.h
<br><br>
-Geração de Tempo: time.h (utilizada para o seed dos números aleatórios).







<br><br><br>







<h1>🎮 Como Jogar</h1>
<br><br>
1. Menu Principal: Escolha a opção A e B para "cadastrar" as suas cartas (inserir nomes de estado e cidade).
<br><br>
2. Iniciar Jogo: Escolha a opção C. O programa calculará automaticamente os poderes das cartas.
<br><br>
3. Comparação: Escolha qual atributo deseja usar para o duelo (Ex: 1 para População, 5 para Densidade, etc.).
<br><br>
4. Vitória: O jogo verifica as pontuações e encerra quando um vencedor definitivo é encontrado.
<br><br>
- Nota importante: Na comparação de Densidade Populacional, vence a carta que possuir o menor valor (seguindo as regras reais do Super Trunfo).






<br><br><br>








<h1> 💻 Exemplo de Execução </h1>
<br><br>

```
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
```







<br><br><br>






<h1>📂 Como Compilar e Rodar</h1>
<br><br>

Se você tiver um compilador GCC instalado (como o MinGW no Windows ou nativo no Linux/Mac):
<br><br>
Abra o terminal na pasta do arquivo.
<br><br>
Compile o código:
<br><br>
```
Bash
gcc super-trunfo.c -o supertrunfo
```
<br><br>
Execute o programa:
<br><br>
```
Bash
./supertrunfo
```



<br><br><br>






<h1>🧠 Conceitos de Programação Aplicados</h1>
Este projeto demonstra o uso de:
<br><br>
Estruturas de Repetição: while para manter o jogo rodando e menus persistentes.
<br><br>
Estruturas Condicionais: if/else e switch case para lógica de decisão e menus.
<br><br>
Manipulação de Variáveis: Uso de int, float, char[].
<br><br>
Entrada e Saída: printf e scanf para interação com o usuário.
<br><br>
Lógica Matemática: Cálculos de densidade e proporcionalidade.
<br><br>

Desenvolvido por Duck101X 🚀
