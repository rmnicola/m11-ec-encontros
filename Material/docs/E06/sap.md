---
title: SAP
sidebar_position: 3
sidebar_class_name: autoestudo
---

import ArchSAP from '@site/static/img/archsap.png';
import ControlWord from '@site/static/img/controlword.png';
import SapIset from '@site/static/img/sapiset.jpg';
import SapOpCodes from '@site/static/img/sapopcodes.jpg';
import RingCounter from '@site/static/img/ringcounter.jpg';
import StateT1 from '@site/static/img/statet1.jpg';
import StateT2 from '@site/static/img/statet2.jpg';
import StateT3 from '@site/static/img/statet3.jpg';
import FetchCycle from '@site/static/img/fetchcycle.jpg';
import LDACycle from '@site/static/img/ldacycle.jpg';

# Simple As Possible Architecture

Para reforçar o conhecimento adquirido sobre arquiteturas básicas de
processadores, vamos estudar uma arquitetura apresentada em um livro clássico
sobre o assunto, o *Digital Computer Electronics*, de *Albert Malvino*. Nesse
livro, Malvino apresenta a arquitetura SAP. A figura 14.01 exibe a arquitetura
proposta para o SAP I.

<img 
  src={ArchSAP}
  alt="ArchSAP"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.01 - Diagrama de blocos da arquitetura do SAP I.</center></p>

## 1. Componentes do SAP I

### 1.1. Registradores

Os registradores do SAP são o **PC**, o **AC**, o **B**, o **MAR**, o **IR** e
o **Out**. Vamos explorar a funcionalidade de cada um a seguir:

**O Program Counter (PC)**

Assim como no *IAS*, serve para guardar o endereço da próxima instrução a ser
executada. No SAP I, ele é apenas incremental. Isso significa que não há
comandos de saltos.

Sinais de controle:

* *Cp* - Sinal usado para incrementar o **PC**.
* *Ep* - Sinal de *enable* do **PC**. Assim como *todos os outros
  registradores do SAP I*, o **PC** utiliza *drivers* de alta impedância para
  controlar o fluxo de dados para o *W bus*. Quando *Ep* está em *HIGH*, o
  valor em **PC** é carregado no *W bus*.
* *NClk* - Sinal de clock. O **PC** opera em *borda de descida*.
* *NClr* - Sinal de clear. Quando *Clr* é *LOW*, o **PC** é resetado.

**O Acumulador (AC)**

Serve para armazenar operações/operandos para operações artiméticas.

Sinais de controle:

* *NLa* - Sinal usado para carregar dados do *W bus* para o **AC**. Sinal
  invertido.
* *Ea* - Sinal de *enable* do **AC**. Assim como *todos os outros
  registradores do SAP I*, o **AC** utiliza *drivers* de alta impedância para
  controlar o fluxo de dados para o *W bus*. Quando *Ep* está em *HIGH*, o
  valor em **AC** é carregado no *W bus*.
* *Clk* - Sinal de clock. O **AC** opera em *borda de subida*.

**O Memory Address Register (MAR)**

Opera em dois modos. No modo de *leitura*, ele recebe um endereço de 4 bits do
*W bus* para procurar na *RAM*. Já no seu modo de *input*, ele guarda 8 bits na
*RAM*.

Sinais de controle:

* *NLm* - Sinal usado para carregar dados do *W bus* para o **MAR**. Sinal
  invertido.
* *Clk* - Sinal de clock. O **MAR** opera em *borda de subida*.

**O registrador B**

Registrador extra utilizado para operações aritméticas.

Sinais de controle:

* *NLb* - Sinal usado para carregar dados do *W bus* para o **B**. Sinal
  invertido.
* *Clk* - Sinal de clock. O **B** opera em *borda de subida*.

**O Instruction Register (IR)**

Serve para guardar a instrução que deve ser executada no ciclo atual do
processador. As instruções de 8 bits são carregadas nele. Essas instruções são
divididas em dois *nibbles* (4 bits). Os 4 primeiros são enviados ao circuito
de controle para sequenciamento da CPU e os 4 finais dizem respeito à escolha
de operações e podem ser carregados novamente no *W bus* se necessário.

Sinais de controle:

* *NLi* - Sinal usado para carregar dados do *W bus* para o **IR**. Sinal
  invertido.
* *NEi* - Sinal de *enable* do **IR**. Assim como *todos os outros
  registradores do SAP I*, o **IR** utiliza *drivers* de alta impedância para
  controlar o fluxo de dados para o *W bus*. Quando *Ep* está em *LOW*, o
  valor em **IR** é carregado no *W bus*.
* *Clk* - Sinal de clock. O **IR** opera em *borda de subida*.
* *Clr* - Sinal de clear. Quando *Clr* é *HIGH*, o **IR** é resetado.

**O registrador de saída (Out)**

Serve como uma interface com o display (dispositivo I/O).

Sinais de controle:

* *NLo* - Sinal usado para carregar dados do *W bus* para o **Out**. Sinal
  invertido.
* *Clk* - Sinal de clock. O **Out** opera em *borda de subida*.

### 1.2. Unidade de aritmética

A unidade de aritmética do SAP I é extremamente simples e possui apenas as
operações de soma e subtração. Quando opera em modo de subtração, assume-se a
representação em complemento de dois.

Sinais de controle:

* *Su* - Sinal que controla se será feita a operação de soma ou subtração.
  Quando *Su* é *HIGH*, uma subtração é feita.
* *NEu* - Sinal de *enable* do **Add/Sub**. Assim como *todos os outros
  registradores do SAP I*, o **Add/Sub** utiliza *drivers* de alta impedância
  para controlar o fluxo de dados para o *W bus*. Quando *Ep* está em *LOW*, o
  valor em **Add/Sub** é carregado no *W bus*.

### 1.3. Circuito de controle

O circuito de controle é a unidade do SAP I responsável por enviar os sinais de
controle para cada um dos outros componentes da CPU. Para isso, ela controla
diretamente os sinais de Clk e Clr e também conta com uma **palavra de
controle**. Essa palavra de controle pode ser vista na figura 14.02.

<img 
  src={ControlWord}
  alt="ControlWord"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.02 - Palavra de controle do SAP I. Com esses 12 bits, o
circuito de controle comanda os outros componentes do SAP I.</center></p>

## 2. Instruções do SAP I

O conjunto de instruções do SAP I é bastante enxuto, consistindo em apenas 5
operações. As figuras 14.03 e 14.04 exibem essas operações possíveis.

<img 
  src={SapIset}
  alt="SapIset"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.03 - Tabela com os nomes das opearções do SAP I.</center></p>

<img 
  src={SapOpCodes}
  alt="SapOpCodes"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.04 - Tabela com os *opcodes* do SAP I.</center></p>

## 3. Ciclo de Fetch

Uma das coisas que ainda não vimos é como exatamente é possível implementar os
ciclos propostos por von Neumann. O SAP I apresenta a solução para este
problema de forma particularmente didática. O segredo por trás da implementação
dos ciclos do SAP I é a utilização de um *Ring Counter* para definir **seis
estados** distintos para a unidade de controle. A figura 14.05 exibe o ring
counter do SAP I e a carta de tempos dos seus estados.

<img 
  src={RingCounter}
  alt="RingCounter"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '70vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.05 - O Ring Counter do SAP I.</center></p>

Os três primeiros estados gerados pelo ring counter formam o *ciclo de fetch*
da CPU. São eles os estados *T1*, *T2* e *T3*. Vamos analisar cada um deles em
detalhe.

**Address State (T1)**

O *Address State* é o primeiro estado do ciclo do SAP I. Nele, o endereço que
está no *PC* é transferido para o *MAR*. A palavra de controle, nesse momento,
fica como descrito na figura 14.06:

<img 
  src={StateT1}
  alt="StateT1"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.06 - Estado da palavra de controle em T1.</center></p>


**Increment State (T2)**

O increment state existe para que o *PC* seja incrementado em uma unidade. A
figura 14.07 mostra a palavra de controle necessária para que isso aconteça.

<img 
  src={StateT2}
  alt="StateT2"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.07 - Estado da palavra de controle em T2.</center></p>

**Memory State (T3)**

O memory state marca o fim do ciclo de fetch. Nele, a instrução resgatada na
*RAM* é transferida para o *IR*. O estado da palavra de controle pode ser visto
na figura 14.08.

<img 
  src={StateT3}
  alt="StateT3"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.08 - Estado da palavra de controle em T3.</center></p>

Juntos, os estados T1, T2 e T3 formam o ciclo de fetch do SAP I. A figura 14.09
exibe o diagrama de blocos dos componentes do processador em cada um dos
estados deste ciclo.

<img 
  src={FetchCycle}
  alt="FetchCycle"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.09 - O estado do SAP I em cada etapa do ciclo de fetch. Em
a), temos o T1. Em b), temos o T2 e em c) temos o T3.</center></p>

## 4. Ciclo de Execute

O ciclo de execute é um pouco mais complexo, pois há uma configuração diferente
da palavra de controle para cada instrução do *instruction set* do SAP I. Como
um exemplo, a figura 14.10 exibe os estados T4, T5 e T6 para a instrução *LDA*.
Note que, para esta operação, o estado T6 é um estado sem nenhum tipo de
operação.

<img 
  src={LDACycle}
  alt="LDACycle"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 14.10 - As etapas T4, T5 e T6 para a operação
*LDA*.</center></p>

