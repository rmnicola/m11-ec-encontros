---
title: Ula ula
sidebar_position: 1
sidebar_class_name: autoestudo
---

# A ULA explicada

A Unidade Lógica e Aritmética (ULA), também conhecida como ALU (Arithmetic
Logic Unit), é um componente fundamental de uma CPU (Unidade Central de
Processamento). Ela realiza operações aritméticas e lógicas sobre dados
binários. A ULA é essencial para a execução de instruções e manipulação de
dados em sistemas de computação, sendo responsável por operações como adição,
subtração, comparação e manipulação de bits.

## 1. Adder

Um adder, ou somador, é um circuito digital que realiza a operação de adição de
números binários. Existem dois tipos principais de adders usados na ULA:

### 1.1. Half adder

O half adder é o circuito mais simples de adição, capaz de somar dois bits e
produzir uma soma e um carry (vai-um). Ele possui duas entradas (os bits a
serem somados) e duas saídas: a soma (S) e o carry (C). A saída de soma indica
o resultado da adição dos dois bits, enquanto a saída de carry indica se houve
um "vai-um" para o próximo dígito. O half adder é limitado porque não pode
somar três bits (dois bits mais um carry-in).

### 1.2. Full adder

O full adder é uma extensão do half adder, capaz de somar três bits (dois bits
de entrada e um carry-in de uma operação anterior). Ele possui três entradas
(A, B e carry-in) e duas saídas (Soma e carry-out). O full adder é usado em
cadeias para formar somadores de múltiplos bits, permitindo a adição de números
binários de tamanho arbitrário. Ele é um componente essencial para a construção
de operações aritméticas mais complexas na ULA.

## 2. Subtractor

Um subtractor, ou subtrator, é um circuito que realiza a operação de subtração
de números binários. Semelhante aos adders, existem half subtractors e full
subtractors. O half subtractor é capaz de subtrair dois bits, fornecendo uma
diferença e um borrow (empréstimo). O full subtractor expande essa função para
incluir um borrow-in de uma operação anterior. A ULA pode usar adders e
subtractors combinados com circuitos adicionais para realizar subtração, muitas
vezes implementando o complemento de dois para transformar a subtração em
adição.

## 3. Comparador

Um comparador é um circuito que compara dois números binários e determina a
relação entre eles (igual, maior ou menor). Ele é utilizado em operações de
decisão, como aquelas encontradas em instruções de salto condicional.
Comparadores simples podem determinar se dois números são iguais, enquanto
comparadores mais complexos podem determinar a magnitude relativa. Na ULA, os
comparadores são essenciais para operações lógicas e controle de fluxo.

## 4. Shifter e rotator

Shifters (deslocadores) e rotators (rotacionadores) são circuitos que manipulam
os bits em uma palavra binária, movendo-os para a esquerda ou para a direita. 

- **Shifter**: Um shifter pode deslocar os bits de uma palavra para a esquerda
  ou direita, preenchendo as posições vazias com zeros (ou outro bit de
  preenchimento). Operações de deslocamento são utilizadas para multiplicação e
  divisão rápida por potências de dois.

- **Rotator**: Um rotator é semelhante a um shifter, mas, em vez de preencher
  as posições vazias, ele rotaciona os bits que "saem" para o outro lado da
  palavra. Isso é útil para operações que envolvem circularidade de dados, como
  em criptografia ou certas operações aritméticas.

Essas operações são básicas, mas extremamente úteis em manipulação de dados e
são frequentemente aceleradas em hardware para eficiência.

## 5. ALU Design (vídeo)

Para uma demonstração prática de como uma ULA é implementada, o vídeo do Ben
Eater sobre a criação de uma ALU de 8 bits em uma CPU de protoboard é uma
excelente referência. Ele mostra como combinar componentes como adders,
subtractors, comparadores e shifters para construir uma ALU funcional. Este
vídeo é uma ferramenta educativa valiosa para entender o design e a operação de
uma ULA.

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/mOVOS9AjgFs" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::
