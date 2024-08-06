---
title: Circuitos lógicos
sidebar_position: 2
sidebar_class_name: autoestudo
---

import Ttable1 from '@site/static/img/ttable1.png';
import Ttable2 from '@site/static/img/ttable2.png';
import Ttable3 from '@site/static/img/ttable3.png';
import Grey from '@site/static/img/grey.png';

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
mapa de karnaugh? Beleza, boa. Mas antes disso, quero que você pratique com
mais duas tabelas verdade.

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

Criada pelo matemático George Boole no século XIX, a álgebra booleana se tornou
fundamental para a criação de circuitos lógicos que viriam a ser utilizados em
computadores digitais. Assim como a álgebra convencional, há uma série de
padrões e teoremas que ajudam a "enxugar" uma expressão booleana, chegando à
expressão mínima capaz de representar uma lógica sem nenhuma perda. É
absolutamente possível basear-se apenas nesses padrões e teoremas para
simplificar equações lógicas, mas há uma ferramenta gráfica que torna esse
processo muito mais simples e capaz de ser representado de forma algorítmica.

Essa ferramenta foi criada nos anos 50 por Edward Veich e aperfeiçoada por
Maurice Karnaugh, que dá o nome da versão que utilizamos até hoje. Estamos
falando do *mapa de Karnaugh*. Esse mapa é, no fundo, uma representação da
tabela verdade como um diagrama que busca agrupar os casos onde a saída do
circuito é 1 e, assim, identificar padrões.

**Código de Grey e a variação de bits**

Uma das ferramentas que fazem o mapa de Karnaugh funcionar é o **código de
Grey**. Honestamente, a explicação do código de Grey na Wikipedia está tão boa,
que não estou achando que posso fazer melhor do que só adicionar o trecho aqui:

> O código de Gray é um sistema de código binário inventado por Frank Gray. O
> código é não ponderado onde de um número para outro apenas um bit varia. Este
> sistema de codificação surgiu quando os circuitos lógicos digitais se
> realizavam com válvulas termoiônicas e dispositivos eletromecânicos. Os
> contadores necessitavam de potências muito elevadas e geravam ruído quando
> vários bits modificavam-se simultaneamente. O uso do código Gray garantiu que
> qualquer mudança variaria apenas um bit.[1]
> 
> Atualmente o código Gray é utilizado em sistemas sequenciais mediante o uso dos
> Mapas de Karnaugh, já que o princípio do desenho de buscar transições mais
> simples e rápidas segue vigente, apesar de que os problemas de ruído e potência
> tenham sido reduzidos.

A imagem abaixo representa o código de grey comparado com o sistema binário
convencional.

<img 
  src={Grey}
  alt="Código de grey"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 5.03 - Comparação entre o código de grey e o sistema
binário.</center></p>

Mas o que o código de grey tem a ver com o mapa de Karnaugh? Ou melhor, por quê
isso é útil? Vamos dar uma olhadinha em um mapa de Karnaugh e sua contrapartida
em tabela verdade:

<img 
  src="https://slideplayer.com/slide/5289300/17/images/60/Truth+Table+to+K-Map+Mapping.jpg"
  alt="Ttable to Kmap"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 5.04 - Transição de uma tabela verdade com quatro entradas para
um mapa de Karnaugh (ou Kmap, de forma mais simplificada). A ideia é conseguir
agrupar os casos em que a função lógica é 1 e identificar quais conjuntos de
variáveis podem ser eliminadas.</center></p>

O motivo pelo qual o código de grey é interessante no mapa de Karnaugh é que a
ideia é justamente que de uma coluna para outra e de uma linha para outra
apenas uma variável mude. Assim, conseguimos identificar agrupamentos de 1 e
verificar quais variáveis não variam nesse agrupamento. O que fazer quando
notamos que a variável não varia no agrupamento? Simples, significa que ela não
importa para aquele resultado e eliminamos ela.

A conversão do mapa de karnaugh para uma equação booleana pode ser feita a
partir de um algoritmo. Deixei a tarefa de detalhar esse algoritmo para o GPT,
mas também vou deixar um vídeo para vocês acompanharem o processo.

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

:::tip Exercício 5.06

Multiplexadores são absolutamente fundamentais para os microprocessadores. Por
quê? Onde eles são utilizados dentro de um processador? Pesquise.

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

:::tip Exercício 5.07

Baseando-se na descrição acima e nas suas proprias pesquisas, desenvolva o
circuito lógico de um *meio-somador* e um *somador completo* de 1 bit.

:::

:::tip Exercício 5.08

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

#### 3.2.1. Circuitos sequenciais síncronos (ou, a importância do clock)

Você já ouviu falar de *overclock*? Não? Ah, você já sabe o que vem aí né?

:::tip Exercício 5.09

O que significa quando fazemos *overclock* de um processador? Por que isso pode
danificar o processador? O que é *clock*?

:::

O *clock* é fundamental para os circuitos sequenciais síncronos, afinal é ele
quem *sincroniza* o circuito, dando o sinal de quando uma nova alteração deve
ser feita. Alguns dos exemplos de circuitos sequenciais síncronos:

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

:::warning Aviso

Para criar circuitos sequenciais, precisamos estudar um componente chamado
*flip flop*. Por isso que não tem nenhum exercício aqui. Calma, que já já eles
aparecem. Quando discutirmos memória, falaremos sobre o flip flop e aí você vai
fazer alguns exercícios de circuitos sequenciais.

:::
