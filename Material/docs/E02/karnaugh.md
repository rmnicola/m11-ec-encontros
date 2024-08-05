---
title: Circuitos lógicos
sidebar_position: 2
sidebar_class_name: autoestudo
---

import Ttable1 from '@site/static/img/ttable1.png';
import Ttable2 from '@site/static/img/ttable2.png';
import Ttable3 from '@site/static/img/ttable3.png';

# Como criar (praticamente) qualquer circuito lógico

Criar circuitos lógicos é uma tarefa fundamental no projeto de
microprocessadores. Sendo assim, vamos conversar sobre como fazer isso? A má
notícia é que não existe atalhos para criar circuitos lógicos. A boa é que
existe uma ferramenta que gera (quase) sempre o circuito lógico mais otimizado
possível. O nome dessa ferramenta é o mapa de Karnaugh, mas, para entendê-lo
precisamos primeiro entender a tabela verdade.

## 1. A tabela verdade

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/C4MdUQJIhSE" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

As tabelas verdade são uma ferramenta muito simples em sua essência: a sua
razão de existir é mapear todas as combinações de entrada possíveis de um
circuito lógico e obter a saída para cada uma delas. Para entender melhor como
isso pode ser feito, vamos olhar uma das tabelas verdades mais simples
possíveis, a do *XOR*:

<img 
  src="https://www.build-electronic-circuits.com/wp-content/uploads/2022/09/Truth-table-XOR-gate.png"
  alt="XOR"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 5.01 - A porta lógica *XOR* e sua tabela verdade.</center></p>

A primeira coisa que precisamos notar é a *quantidade de linhas* da tabela
verdade. Isso tem uma relação direta com a *quantidade de entradas do
circuito*. Essa relação se dá pela equação 2^n, onde n é a quantidade de
entradas do sistema.

A seguir, preenchemos essas linhas com todas as comutações possíveis das
entradas do circuito e, para cada uma dessas comutações, anotamos também se a
saída é 1 ou 0. Vamos ver a tabela verdade de um exemplo *um pouco* mais
complexo.

<img 
  src={Ttable1}
  alt="Tabela verdade 1"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 5.02 - Tabela verdade de um circuito lógico.</center></p>

Logo de cara, é muito difícil dizer qual é esse circuito lógico. A maneira como
você vai interagir com tabelas verdades é muito mais parecida com esse segundo
exemplo do que com o primeiro, pois essa é uma ferramenta geralmente utilizada
para a criação de circuitos lógicos que representam a lógica descrita pela
tabela verdade.

Beleza, mas como fazer isso? É **muito** simples. Está vendo todas as linhas em
que F3 é 1? Pegamos todas elas e "somamos" (leia-se, juntamos com portas *OR*).
Dá uma olhada como isso fica:

$$

F_3 = \bar{X} \cdot \bar{Y} \cdot Z + \bar{X} \cdot Y \cdot Z + X \cdot \bar{Y}
\cdot \bar{Z}

$$

:::info

Sim, eu notei que a equação está aparecendo duas vezes. É algum bug do katex
que eu ainda não consegui resolver. Se algum de vocês souber o que é, por favor
me avise.

:::

Pronto, temos nossa equação lógica. Olha, eu sei que ela não parece muito
otimizada e sei que você provavelmente já percebeu alguma forma de
simplificá-la, mas vamos praticar o desapego até que a gente aprenda a usar o
mapa de karnaugh? Beleza, boa. Mas antes disso, pratica com mais duas tabelas
verdade aí:

:::tip Exercício 5.01

Baseando-se na tabela verdade abaixo, crie uma equação lógica que a represente.

<img 
  src={Ttable2}
  alt="Tabela verdade 2"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>

:::

:::tip Exercício 5.02

Baseando-se na tabela verdade abaixo, crie uma equação lógica que a represente.

<img 
  src={Ttable3}
  alt="Tabela verdade 3"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>

:::

## 2. Mapas de Karnaugh

Os mapas de Karnaugh são uma técnica gráfica utilizada para simplificar
expressões booleanas e minimizar o número de portas lógicas necessárias para
implementar um circuito. Eles são particularmente eficazes para funções lógicas
com até quatro ou cinco variáveis, facilitando a identificação visual de termos
comuns que podem ser combinados e simplificados. A organização dos valores da
tabela verdade em uma grade específica permite que os projetistas identifiquem
rapidamente padrões de agrupamento de 1s (para simplificação em forma
disjuntiva) ou 0s (para simplificação em forma conjuntiva), que são essenciais
para reduzir a complexidade dos circuitos. A conversão do mapa de karnaugh para
uma equação booleana pode ser feita a partir de um algoritmo. Deixei a tarefa
de detalhar esse algoritmo para o GPT, mas também vou deixar um vídeo para
vocês acompanharem o processo.

### 2.1. Algoritmo para Utilizar Mapas de Karnaugh (by GPT)

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/CwnfYzYnsuA" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

1. **Construção do Mapa:**
   - Identifique o número de variáveis da função booleana a ser simplificada.
     Para n variáveis, o mapa terá 2^n células.
   - Rotule as colunas e linhas do mapa com combinações de variáveis de forma
     que os estados adjacentes diferem por apenas um bit (Código de Gray).
   - Transcreva os valores da tabela verdade para o mapa, colocando 1s nas
     células correspondentes às combinações de entrada que resultam em uma
     saída 1, e 0s para combinações que resultam em saída 0.

2. **Identificação de Grupos:**
   - Procure por grupos de 1s (ou 0s, dependendo da simplificação desejada)
     adjacentes. As células podem ser agrupadas em potências de dois (1, 2, 4,
     8, etc.). O objetivo é formar o menor número possível de grupos cobrindo
     todos os 1s (ou 0s).
   - Os grupos podem se estender em linha reta ou envolver o mapa de uma borda
     a outra, pois o mapa de Karnaugh é considerado cíclico.

3. **Derivação das Expressões Simplificadas:**
   - Para cada grupo de 1s, escreva o termo correspondente da expressão
     booleana simplificada. Para isso, observe as variáveis que permanecem
     constantes dentro do grupo:
     - Se uma variável é 1 para todas as células no grupo, ela aparece na
       expressão como ela mesma.
     - Se uma variável é 0 para todas as células no grupo, ela aparece na
       expressão como o seu complemento.
     - Se uma variável muda de 0 para 1 (ou vice-versa) dentro do grupo, ela é
       ignorada no termo simplificado.

4. **Construção da Expressão Final:**
   - Combine todos os termos obtidos de cada grupo utilizando a operação OR
     (para forma disjuntiva normal) ou AND (para forma conjuntiva normal).

5. **Verificação e Ajustes:**
   - Certifique-se de que todos os 1s (ou 0s) estão cobertos pelos grupos
     formados. Caso contrário, revise os grupos para incluir todas as
     ocorrências necessárias.
   - Revise a expressão final para garantir que está na forma mais simplificada
     possível.

Beleza. Agora que você viu como se usa um mapa de Karnaugh, vamos treinar um
pouquinho?

:::tip Exercício 5.03

Baseando-se na tabela verdade abaixo, crie um mapa de karnaugh para ela e
extraia a equação lógica simplificada.

<img 
  src={Ttable1}
  alt="Tabela verdade 1"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>

:::

:::tip Exercício 5.04

Baseando-se na tabela verdade abaixo, crie um mapa de karnaugh para ela e
extraia a equação lógica simplificada.

<img 
  src={Ttable3}
  alt="Tabela verdade 3"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>

:::

## 3. Circuitos lógicos

Quando falamos de circuitos lógicos, há dois tipos de circuitos distintos:

1. Circuitos combinacionais
2. Circuitos sequenciais

Ambos tem a sua importância para a computação. A seguir, vamos ver as
definições dos dois tipos de circuitos e resolver alguns exercícios de
ambos.

### 3.1. Circuitos combinacionais

Circuitos combinacionais são aqueles em que suas saídas dependem apenas da
combinação de entradas atuais, sem qualquer tipo de temporalidade. Eles são
utilizados em diversas aplicações, como aritmética, decodificação de sinais e
roteamento de dados. Aqui estão alguns exemplos importantes:

- **Encoder (Codificador)**: Um encoder é um circuito que converte informações
  de formato de entrada para um formato de saída codificado. Ele aceita várias
  entradas e gera uma saída binária que representa qual entrada está ativa. Um
  bom exemplo de circuito codificador é um **multiplexador**. O papel do
  multiplexador (ou mux, para os íntimos) é chavear sinais, utilizando uma
  entrada codificada para escolher qual dos sinais será "carregado" no
  circuito. Esse tipo de codificador é *essencial* para o funcionamento de
  microprocessadores. Abaixo, podemos ver um exemplo de multiplexador 4:1.
  Nele, temos as entradas X0 a X3, a saída M e os seletores C0 e C1.

<img 
  src="https://www.researchgate.net/publication/257799438/figure/fig1/AS:341731565424653@1458486562832/MUX-graphical-symbol-a-truth-table-b.png"
  alt="Multiplexador"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 5.03 - Multiplexador 4:1.</center></p>

:::tip Exercício 5.05

Desenvolva o circuito lógico para o multiplexador acima.

:::

- **Decoder (Decodificador)**: Um decoder realiza a operação inversa de um
  encoder, convertendo uma entrada binária em um único sinal de saída ativado.
  Eles são amplamente utilizados em circuitos de memória para selecionar
  células de memória específicas, em displays de sete segmentos para mostrar
  números e em multiplexadores para determinar qual linha de dados deve ser
  conectada à saída.

- **Somador**: Os somadores são circuitos combinacionais que realizam a adição
  de números binários. Existem dois tipos principais: o somador completo (full
  adder) e o meio-somador (half adder). Um meio-somador pode adicionar dois
  bits e produzir uma soma e um carry, enquanto um somador completo pode
  adicionar três bits (dois bits de entrada mais um carry-in). Somadores são
  componentes essenciais em processadores para realizar operações aritméticas.

:::tip Exercício 5.06

Baseando-se na descrição acima e nas suas proprias pesquisas, desenvolva o
circuito lógico de um *meio-somador* e um *somador completo* de 1 bit.

:::

:::tip Exercício 5.07

Extrapole o conhecimento adquirido sobre somadores e sua experiência resolvendo
o exercício 5.06 para criar um *somador de 4 bits*.

:::

Esses circuitos são utilizados em várias aplicações, como unidades aritméticas
e lógicas (ALUs), sistemas de comunicação e em dispositivos de processamento de
dados.

### 3.2. Circuitos sequenciais

Os circuitos sequenciais são caracterizados pela dependência de estados
anteriores além das entradas atuais. Eles possuem elementos de memória que
armazenam informações sobre o passado do sistema, permitindo operações mais
complexas e comportamentos temporais.

#### 3.2.1. Circuitos sequenciais síncronos

Nos circuitos sequenciais síncronos, as transições de estado são coordenadas
por um sinal de clock. Este clock define momentos específicos em que o estado
do circuito pode mudar, garantindo sincronismo e previsibilidade. Exemplos
    incluem:

- **Contadores**: São circuitos que incrementam ou decrementam contagens em
  resposta a pulsos de clock. Contadores síncronos mudam de estado
  simultaneamente com o clock, o que reduz problemas de timing. Eles são usados
  em temporizadores, medidores de frequência, e como divisores de frequência em
  circuitos digitais.

- **Flip-Flops**: São os blocos básicos de memória em circuitos digitais,
  capazes de armazenar um bit de informação. Flip-flops são usados em
  registradores para armazenar dados temporários e em máquinas de estado
  finitas para controlar a sequência de operações em um sistema digital.

#### 3.2.2. Circuitos sequenciais assíncronos

Diferentemente dos síncronos, os circuitos sequenciais assíncronos não dependem
de um clock para controlar as transições de estado. As mudanças ocorrem
imediatamente em resposta às mudanças nas entradas, o que pode tornar o sistema
mais rápido, mas também mais complexo de projetar. 

- **Contadores Assíncronos (ou Ripple Counters)**: São contadores onde cada
  flip-flop é acionado pela transição do flip-flop anterior. Embora sejam
  simples de implementar, eles sofrem com atrasos de propagação, o que pode
  limitar sua velocidade em aplicações de alta frequência.

Os circuitos assíncronos são utilizados em sistemas onde a resposta rápida a
mudanças de entrada é crítica, como em sistemas de controle de comunicação e
dispositivos de interface homem-máquina.
