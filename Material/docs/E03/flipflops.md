---
title: O transistor (como memória)
sidebar_position: 1
sidebar_class_name: autoestudo
---

# O transistor como memória

## 1. Como usar um transistor para armazenar informação

Os transistores podem ser usados para armazenar informações em circuitos
digitais, atuando como a base para a criação de memórias voláteis. O princípio
básico envolve o uso de transistores para controlar o fluxo de corrente em um
circuito, o que pode ser configurado para representar os estados lógicos 0 e 1.
Uma maneira comum de implementar isso é através de latches, que são circuitos
que podem manter um estado binário (0 ou 1) até que uma entrada de controle
mude. Latches podem ser criados utilizando portas lógicas e transistores, sendo
fundamentais para a construção de flip-flops e outros tipos de memória.

Para uma explicação detalhada sobre como um transistor pode ser utilizado como
memória, veja o vídeo do canal Core Dumped que explora esse conceito através de
latches e portas lógicas.

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/rM9BjciBLmg" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

## 2. Flip flops

Flip-flops são circuitos digitais básicos que servem como blocos de construção
fundamentais para a memória em eletrônica digital. Eles são usados para
armazenar um único bit de dados e são controlados por sinais de clock.
Flip-flops são uma evolução dos latches, oferecendo controle mais preciso sobre
a mudança de estados, sincronizando essas mudanças com um sinal de clock.
Existem vários tipos de flip-flops, cada um com características e aplicações
específicas.

### 2.1. Tipo RS

O flip-flop RS (Reset-Set) é o tipo mais simples de flip-flop. Ele possui duas
entradas, R (Reset) e S (Set), e duas saídas, Q e Q̅ (Q negado). Quando S é
ativado (S=1) e R é desativado (R=0), o flip-flop RS configura a saída Q para
1. Quando R é ativado (R=1) e S é desativado (S=0), a saída Q é definida para
0. Se ambos os sinais R e S são 0, o estado do flip-flop permanece inalterado.
No entanto, a condição R=1 e S=1 é indesejada, pois coloca o flip-flop em um
estado indeterminado.

### 2.2. Tipo D

O flip-flop tipo D (Data ou Delay) é uma forma modificada do flip-flop RS, com
a vantagem de eliminar o estado indeterminado. Ele possui uma única entrada de
dados (D) e uma entrada de clock (CLK). No momento de uma borda ativa do sinal
de clock (ascendente ou descendente, dependendo do design), o valor da entrada
D é capturado e transferido para a saída Q. Isso torna o flip-flop D útil para
sincronização de dados e armazenamento de valores temporários, uma vez que ele
atua como um registrador de 1 bit.

### 2.3. Tipo JK

O flip-flop JK é uma versão melhorada do flip-flop RS, que resolve o problema
do estado indeterminado. Ele possui duas entradas, J e K, e um clock. Se J e K
    são ambos 1 na borda ativa do clock, o flip-flop JK troca o estado atual de
    sua saída (Q). Se J=1 e K=0, a saída Q é definida para 1; se J=0 e K=1, a
    saída Q é definida para 0; se J=0 e K=0, o estado de Q permanece
    inalterado. O flip-flop JK é versátil e frequentemente utilizado em
    contadores e divisores de frequência.

## 3. Uma opção mais barata

Para aplicações onde o custo é uma preocupação e a precisão temporal estrita
não é necessária, pode-se usar diodos ou transistores em configurações simples
para criar memória. Essas soluções podem não ter a robustez ou a capacidade de
controle que os flip-flops oferecem, mas são eficientes em termos de custo e
simplicidade. Um exemplo é o uso de diodos em conjunto com capacitores para
armazenar cargas elétricas, representando estados lógicos. Outra opção é o uso
de células de memória DRAM, que utilizam um único transistor e um capacitor por
bit, oferecendo uma densidade de armazenamento muito maior a um custo mais
baixo do que flip-flops.

Essas opções mais econômicas são amplamente utilizadas em dispositivos de
consumo, onde a redução de custo é essencial e o desempenho de alta precisão
dos flip-flops não é necessário.
