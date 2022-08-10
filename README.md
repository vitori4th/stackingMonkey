# Empilhamento-por-Macacos

## Sobre o programa

A ideia é:

_"Você tem um conjunto M de macacos empilhadores, identificados de 0 até |M|-1. Você vai
recebendo uma sequência de blocos de alturas distintas e precisa dar cada bloco que
chega a um dos macacos empilhadores. Quando os blocos acabarem, cada macaco terá
empilhado vários blocos, quanto maior a altura da pilha, maior o risco de que eles caiam e
tudo se espatife no chão."_   
<br/>Esse jogo tem a seguinte característica:
- Você não sabe quantos blocos vão aparecer e nem qual a altura deles;
- Quando chegar um “bloco” com número -1 e altura -1 você saberá que os blocos
acabaram;
- Quando você atribui um bloco a um macaco você não pode tomar de volta;
- Existe um algoritmo simples, que costuma dar bons resultados, que é o seguinte:
Você sempre dá o bloco ao macaco com a menor altura no momento (se houver
empate, dentre os macacos com menor altura você dá para aquele com menor
índice).

## Porque?

Este jogo foi proposto pelo professor Hokama durante a aula de estrutura de dados, do curso Sistemas da Informação, para praticar Lista Ligada. 

## Algumas observações sobre o programa
1 - Ainda não existe intstruções para o usuário, pretendo adicionar em breve.
<br/>2 - O programa lê, da entrada padrão do sistema, a quantidade de macacos, e
depois uma lista de blocos identificados por 2 inteiros, um id e sua altura.
<br/>3 - Na saída é impresso uma identificação de cada macaco, a altura total de sua pilha
e a lista com os id e alturas de cada bloco. 

## Começando

### Pré requisitos

Para rodar esse programa você precisa de um compilador C.

### Instalando

**Clonando o Repositório**

```
$ git clone git@github.com:vitori4th/Empilhamento-por-Macacos.git

$ cd Empilhamento-por-Macacos
```

### Rodando

Com o compilador instalado, você pode rodar o programa.

## Feito com

- C

## Contribuindo

Ficarei feliz em receber qualquer feedback sobre alguma coisa que eu tenha que refazer. Se tiver alguma dúvida...

Você também pode me encontrar em: vitoriathdasilva@gmail.com

Obrigada!
