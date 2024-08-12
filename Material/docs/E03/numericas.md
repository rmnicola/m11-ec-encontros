---
title: Representações numéricas
sidebar_position: 1
sidebar_class_name: autoestudo
---

import Comp2 from '@site/static/img/comp2.png';

# Como representar números utilizando bits

Como vimos até então, o mundo digital opera exclusivamente em base 2 (binário).
Isso significa que temos apenas os dígitos 0 e 1 disponíveis em vez dos 10
dígitos disponíveis no sistema decimal.

A conversão entre números de base 2 e base 10 é relativamente simples. A imagem
abaixo exemplifica essa operação.

<img 
  src="https://www.onlinemath4all.com/images/decimaltobinary1.png"
  alt="Conversão b2 - b10"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 7.01 - Converter números binários para base decimal envolve a
multiplicação de cada um dos dígitos por uma potência de 2. Começando em 0 e
indo até n-1, em que n é a quantidade de dígitos do número.</center></p>

Vamos treinar um pouquinho?

:::tip Exercício 7.01

Converta o número a seguir de base 2 para base 10:

0010 1010
:::

:::tip Exercício 7.02

Converta o número a seguir de base 2 para base 10:

1001 1110
:::

:::tip Exercício 7.03

Nos exercícios anteriores eu tomei o cuidado de separar um número de 8 bits em
duas partes iguais de 4 bits. Isso é uma prática comum principalmente no meio
da computação. Por quê isso é conveniente? Qual a relação disso com a maneira
como programamos computadores?

:::

## 1. Números inteiros

A conversão acima já nos indica como é possível utilizar uma representação
binária para valores inteiros, portanto não vou extender essa seção
desnecessariamente. O que resta para nós? Bom, como podemos representar números
negativos? Existem duas formas; utilizando *sinal e magnitude* ou utilizando
*complemento de dois*.

### 1.1. Representação em sinal-magnitude

A representação por sinal-magnitude é talvez a mais intuitiva possível.
Basicamente separamos o bit mais significativo do número inteiro para
representar o *sinal* do número (se é negativo ou positivo). O restante do
número é a *magnitude* dele. A figura abaixo demonstra essa forma de
representação.

<img 
  src="https://media.geeksforgeeks.org/wp-content/uploads/20200427140428/signed-1.png"
  alt="sinal-magnitude"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 7.02 - Representação de números inteiros com sinal utilizando um
bit de sinal e o resto para magnitude.</center></p>

:::tip Exercício 7.04

Considerando números inteiros com sinal em representação de sinal-magnitude,
converta o número abaixo para a base decimal:

1010 1100

:::

Quando utilizamos essa forma de representação, a disposição dos números
possíveis com 4 algarismos fica como disposto na figura abaixo.

<img 
  src="https://miro.medium.com/v2/resize:fit:1200/1*oG66gGQ_-8CpHG7g7XWAXw.png"
  alt="Tabela sinal-magnitude 4 bits"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 7.03 - A disposição dos números inteiros possíveis utilizando a
representação sinal-magnitude para 4 algarismos.</center></p>

Apesar dessa representação ser bastante intuitiva, há dois principais problemas
com ela:

1. Para operações de adição e subtração, precisamos primeiro verificar o bit de
   sinal **sempre**. Isso faz com que os circuitos combinacionais fiquem mais
   complexos.
2. Há *duas* formas distintas de representar o número *0*. Uma das operações
   mais comuns na computação é justamente verificar se um número (ou resultado
   de operação) é 0. Ter duas representações distintas para este valor é
   bastante inconveniente.

Não por acaso, a representação sinal-magnitude não costuma ser utilizada na
computação. Prefere-se utilizar a representação por **complemento de dois**.

### 1.2. Representação em complemento de dois

A representação por complemento de dois é muito parecida com a de
sinal-magnitude. Começamos pelo bit mais significativo, que *também indica o
sinal do número*. Onde está a diferença, então? Bom, vamos olhar novamente a
Fig. 7.03. Notou que tem uma coluna lá chamada *2's*? Pois bem, aquela é a
coluna que mostra o valor em decimal para a representação em complemento de 2.

Perceba que o *range* de valores muda um pouco. Antes, tínhamos uma
representação possível **de -7 a 7**. Com *complemento de dois*, podemos
representar números de **-8 a 7**. O motivo disso é que eliminamos a
possibilidade de representar *-0*. Além disso, é possível notar que a
distribuição do *complemento de dois* está simétrica. Na representação
*sinal-magnitude*, passamos direto do 7 para -0. Enquanto isso, na
representação por *complemento de dois*, passamos de 7 para -8. Essa simetria é
uma consequência de uma característica dessa representação que é muito útil
para operações aritméticas. A figura 7.04 representa a distribuição de valores
de uma forma em que essa simetria fica mais evidente.

<img 
  src="https://electricalengineering123.com/wp-content/uploads/2019/12/Number-Circle-for-4-bit-Twos-Complement-Numbers.gif"
  alt="Rosa dos ventos do complemento de dois."
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 7.04 - A distribuição de valores de um número de 4 algarismos em
complemento de 2. Há uma simetria que permite com que os valores da
distribuição sejam contínuos.</center></p>

A característica ao qual me referia é uma particularidade na conversão entre
números binários em *complemento de dois* para decimal. Vimos anteriormente que
tipicamente a conversão binário-decimal envolve a soma de números dois com
expoente referente à posição do algarismo (Figura 7.01). A figura 7.05
apresenta a versão atualizada da conversão, considerando a representação em
complemento de dois.

<img 
  src={Comp2}
  alt="Comp 2 conversion"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '15vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 7.05 - Diagrama de conversão de binário em complemento de 2 para
base decimal. O bit mais significativo passa a valer como um número a ser
subtraído do total.</center></p>

:::tip Exercício 7.05

Converta o número binário acima em decimal. Considere que o número está
representado utilizando complemento de dois.

:::

A vantagem de usar a representação em complemento de dois fica mais evidente
quando consideramos a operação artimética de **subtração** e **adição**. O que
ocorre é que essa representação permite que a subtração seja o mesmo que a soma
com um número negativo, simplificando os circuitos combinacionais necessários
para implementar as operações artiméticas.

:::tip Exercício 7.06

Para que seja possível utilizar o complemento de dois na subtração, é
importante ser capaz de *inverter* um número. Isso significa transformar um
número positivo em sua contrapartida negativa e vice versa. O valor de 7 em
binário, por exemplo, é 0111 e sua contrapartida negativa (-7) é 1001 em
complemento de dois. 

Existe uma sequência de operações relativamente simples para fazer essa
conversão para qualquer número. Pesquise-a e teste-a com os seguintes números
(use 8 bits):

* 24
* 123
* 0

:::


## 2. Números de pontos flutuantes
