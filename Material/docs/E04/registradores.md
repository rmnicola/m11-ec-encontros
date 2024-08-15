---
title: Registradores
sidebar_position: 2
sidebar_class_name: autoestudo
---

import DisplacementR from '@site/static/img/displr.png';
import SipoR from '@site/static/img/sipor.png';
import ParReg from '@site/static/img/parreg.png';
import Impedance from '@site/static/img/impedance.png';
import MemBlock from '@site/static/img/memblock.png';

# Registradores

Na seção anterior, mencionei que o flip flop tipo D é particularmente útil na
construção de registradores. Nessa seção, vou explorar mais esse conceito e
vamos ver alguns tipos de registradores.

## 1. Registrador de deslocamento (Serial in - Serial out)

O primeiro tipo de registrador que vamos ver é o registrador de deslocamento. O
circuito dele pode ser visto na figura 10.01.

<img 
  src={DisplacementR}
  alt="Displacement R"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 10.01 - Um registrador de deslocamento de 4 bits. O seu
funcionamento é exclusivamente serial, tanto na saída quanto na
entrada.</center></p>

A figura 10.02 mostra a carta de tempos deste tipo de registrador.

<img 
  src="https://www.expertsmind.com/CMSImages/2154_Explain%20the%20working%20of%20a%204-bit%20SISO%20shift%20register.png"
  alt="SISO Reg Table"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '90vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 10.02 - Carta de tempos do registrador de deslocamento (ou
SISO).</center></p>

:::tip Exercício 10.01

Para que serve este tipo de registrador? Pesquise. Para auxiliar na sua
pesquisa, pode ser útil pesquisar como SISO Register.

:::

## 2. Registrador SIPO (Serial in - Parallel out)

A imagem 10.03 exibe o circuito lógico de um registrador com entrada serial e
saída paralela. Trata-se de uma variação do registrador de deslocamento.

<img 
  src={SipoR}
  alt="Sipo R"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 10.03 - Registrador com entrada serial e saída
paralela.</center></p>

:::tip Exercício 10.02

Para que serve este tipo de registrador? Pesquise ao menos uma situação onde
ele é utilizado.

:::

## 3. Registrador PISO (Parallel in - Serial out)

Os registradores PISO são registradores que são capazes de transformar entradas
paralelas em saídas seriais. Eles são um pouco mais complexos que os outros
registradores que vimos até agora. Seu circuito lógico pode ser visto na figura
10.04.

<img 
  src="https://www.electronicsengineering.nbcafe.in/wp-content/uploads/2015/01/piso.png"
  alt="PISO"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 10.04 - Registrador PISO.</center></p>

## 4. Registrador paralelo (PIPO)

Enfim chegamos no registrador mais comum dentro de microprocessadores. Trata-se
de um registrador com entradas paralelas e saídas paralelas. A figura 10.05
exibe o circuito lógico desse tipo de registrador.

<img 
  src={ParReg}
  alt="ParReg"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 10.05 - Registrador de entrada paralela e saída
paralela.</center></p>

:::tip Exercício 10.03

No diagrama acima, há um sinal chamado *Load*. Qual a razão da sua existência?

:::

## 5. RAM estática

Todos os registradores que existem dentro de uma CPU fazem parte de um conjunto
de memória chamada de RAM (Random Access Memory) estática. A figura 10.06 exibe
um arranjo típico de memória SRAM.

<img 
  src="https://qph.cf2.quoracdn.net/main-qimg-dc9c32f3b9c7c028627c39ca8b71fd78-pjlq"
  alt="SRAM address"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 10.06 - Arranjo típico de uma memória SRAM. Por essa imagem,
percebe-se que o endereçamento de memória acontece por *linhas* e
*colunas*.</center></p>

Para endereçamento deste tipo de memória, utiliza-se um conjunto de *dois
decoders*. Um deles endereça as linhas de memória e outro endereça as colunas.
A combinação dos dois endereços acessa registradores individuais.

### 5.1. Estado de alta impedância

:::tip Exercício 10.04

E chegou! A temida seção que é só um exercício! Desta vez, eu quero que você
avalie o circuito abaixo e conclua o que acontece com a saída para todas as
combinações possíveis das entradas *Data* e *Enable*.

<img 
  src={Impedance}
  alt="Impedance"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>

:::

### 5.2. Bloco de memória

Para finalizar nossa incursão no mundo dos registradores, vamos analisar a
figura 10.07.

<img 
  src={MemBlock}
  alt="MemBlock"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 10.07 - Recorte de um pedaço de um bloco de memória RAM
estática. Aqui, podemos ver com mais detalhes como exatamente um computador
consegue endereçar bits/bytes específicos dentro de um bloco de
memória. Nem todas as conexões foram exibidas nesse diagrama para mantê-lo
legível.</center></p>

Aqui há algumas coisas para percebermos:

1. Os barramentos de *dados*, *read enable* e *write enable* são compartilhados
   por todos os blocos.
2. Para selecionar o bloco correto, devemos combinar a linha e a coluna
   adequada.
3. Para *proteger os dados da saída*, há um *driver de alta impedância*
   controlado pelo sinal *read enable*. Assim, conseguimos aproveitar o mesmo
   barramento de dados para leitura e escrita.
4. Os sinais que regem o comportamento do enable dos registradores tipo D e dos
   drivers de alta impedância vem de um circuito combinacional que considera
   também o estado da linha e da coluna referente àquele bloco.

