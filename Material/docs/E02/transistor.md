---
title: O transistor
sidebar_position: 1
sidebar_class_name: autoestudo
---

# O transistor e sua função no computador

## 1. Como funciona um transistor

Os transistores são componentes eletrônicos fundamentais para o funcionamento
de praticamente todos os dispositivos eletrônicos modernos. Eles atuam como
interruptores que controlam o fluxo de corrente elétrica em circuitos,
permitindo ou bloqueando a passagem de elétrons. Isso é essencial para
processar e armazenar informações em sistemas digitais. Um transistor é
composto por três partes principais: o coletor, a base e o emissor. A operação
básica de um transistor envolve a aplicação de uma pequena tensão ou corrente
na base, que controla uma corrente maior entre o coletor e o emissor. 

De longe a melhor explicação que já vi sobre o funcionamento de semicondutores
foi feita em um vídeo do Veritassium. O vídeo é fantástico e conta a história
por trás do desenvolvimento do LED azul e o impacto disso na indústria, mas vou
deixar como obrigatório apenas assistir o trecho em que ele fala sobre o
diodo (o conceito apresentado é praticamente o mesmo para transistores).

:::info Autoestudo obrigatório

O trecho relevante começa em 3:49 e vai até 9:20

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/AF8d72mA41M?t=229" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

:::tip Exercício 2.01

O vídeo acima mostra como um diodo funciona no contexto de um LED. Nele, é
possível ver que um semicondutor sempre vai ter uma emissão de energia (perda)
relativa ao tamanho do *band gap*. Em diodos, essa perda se manifesta em uma
queda de tensão (valor típico é de 0,4V). Tendo isso em mente, pesquise a
resposta para as seguintes perguntas:

1. Se o diodo funciona pela aglutinação de um semicondutor tipo p com um tipo
   n, como isso funciona em um transistor?
2. Como minimizar essa perda de energia? Claramente ela não é exatamente útil
   para transistores dentro de uma CPU.

:::

## 2. CMOS vs MOSFET

Os transistores MOSFET (Metal-Oxide-Semiconductor Field-Effect Transistor) são
amplamente utilizados em circuitos integrados devido à sua eficiência e
capacidade de controle de corrente. Existem dois tipos principais de MOSFETs:
de enriquecimento e de depleção, mas na prática, os de enriquecimento são os
mais utilizados. 

Dentro dos MOSFETs, temos os transistores CMOS (Complementary
Metal-Oxide-Semiconductor), que são fundamentais na construção de circuitos
digitais. A tecnologia CMOS utiliza uma combinação de MOSFETs de canal n (nMOS)
e de canal p (pMOS) para criar circuitos que consomem muito pouca energia
quando em estado estacionário. Essa característica é essencial para a
eficiência energética de dispositivos como smartphones e laptops.

## 2.1. nMOS vs pMOS

Os transistores nMOS e pMOS são dois tipos de MOSFETs que se diferenciam
principalmente pela polaridade da tensão aplicada e pelo tipo de portador de
carga que conduzem. No nMOS, a corrente é transportada por elétrons, que são
portadores de carga negativa. Para que o nMOS conduza, é necessário aplicar uma
tensão positiva entre a porta (gate) e a fonte (source). Já no pMOS, a corrente
é transportada por lacunas, que são portadores de carga positiva. O pMOS conduz
quando uma tensão negativa é aplicada entre a porta e a fonte.

Esses dois tipos de transistores são combinados na tecnologia CMOS para formar
pares complementares que realizam operações lógicas com baixo consumo de
energia.

## 3. Portas lógicas com transistores

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/HjneAhCy2N4" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

Os transistores podem ser combinados de várias maneiras para formar portas
lógicas, que são os blocos fundamentais de circuitos digitais. Por exemplo, uma
porta NOT (inversora) pode ser criada usando um único transistor nMOS. Uma
porta AND pode ser construída usando uma combinação de transistores nMOS e
pMOS. Da mesma forma, portas OR, NAND, NOR e XOR podem ser construídas com
diferentes arranjos de transistores.

O design de portas lógicas utilizando transistores é crucial para a construção
de processadores e outros componentes de hardware, pois eles executam as
operações lógicas básicas necessárias para o processamento de dados. A
eficiência e a velocidade dos circuitos lógicos dependem da forma como esses
transistores são interconectados e gerenciados. 

TODO - Exercícios de portas lógicas com transistores
