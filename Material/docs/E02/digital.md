---
title: Simulador de circuitos
sidebar_position: 3
sidebar_class_name: autoestudo
---

import Ex6 from '@site/static/img/ex6.png';

# Digital - um simulador de circuitos lógicos

Esta seção não é exatamente um conteúdo convencional, mas sim a apresentação de
uma sugestão de ferramenta para simular circuitos lógicos. Estou deixando o
link aqui só porque é a ferramenta com o nome mais estúpido possível para se
pesquisar no google. O nome dela é *digital* e ela serve para simular circuitos
digitais.

Acesse o [repositório do projeto](https://github.com/hneemann/Digital) para
instruções de como baixar, instalá-la e usá-la.

A seguir, exercícios:

:::tip Exercício 6.01

Reproduza o circuito do exercício 5.03 no simulador.

:::

:::tip Exercício 6.02

Reproduza o circuito do exercício 5.04 no simulador.

:::

:::tip Exercício 6.03

Desenvolva no simulador o circuito para um multiplexador 4:1. A seguir,
transforme o multiplexador em um bloco que pode ser reutilizado posteriormente.

:::

:::tip Exercício 6.04

Crie o circuito de um somador completo de 2 bits no simulador. Transforme-o em
um bloco.

:::

:::tip Exercício 6.05

Utilizando o bloco do somador completo, crie um somador de 8 bits e
transforme-o em um bloco.

:::

:::tip Exercício 6.06

Use o mapa de karnaugh para simplificar as seguintes funções lógicas e, a
seguir, simule-as:

<img 
  src={Ex6}
  alt="Dopagem de silício"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>

:::

:::tip Exercício 6.07

Dados 4 interruptores, S1, S2, S3 e S4, dispostos nesta seqüência, operar um
dispositivo somente quando forem acionados 2 destes interruptores, desde que não
sejam consecutivos, ou quando forem acionados 3 interruptores quaisquer. Fazer a
tabela verdade, o mapa de Karnaugh para obter a equação booleana simplificada e o
diagrama de blocos lógicos correspondente.

:::

:::tip Exercício 6.08

Um display de 7 segmentos funciona como uma junção de 7 leds, representando
cada um dos segmentos de um algarismo. Geralmente, os displays de 7 segmentos
são utilizados com um circuito lógico que serve para decodificar um sinal
chamado de *binary coded decimal* para os 7 segmentos do display.

<img 
  src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/bcd.png"
  alt="Display 7 seg"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>

Sua tarefa é criar o decoder responsável por transformar um sinal de 4 bits no
formado BCD nos 7 valores dos segmentos de modo que o display exiba o valor
decimal relacionado à entrada. A imagem abaixo demonstra o formato BCD.

<img 
  src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEh0FJuHqiJmdE7kw5Zkvr4E0cDerKZ9aXks_3A7G0zYik-5F3uYEEFncBfSaIElczLsXz68skCDGwtM36U7TVRQzLxqtUdsz0zoi1L9qsfpS5mi__5rBhUYmFApoKnjgwiQIt0KSf5ah6PR/s400/T_BCD.png"
  alt="BCD"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>


:::
