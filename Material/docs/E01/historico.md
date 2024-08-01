---
title: Pré-história computacional
sidebar_position: 2
sidebar_class_name: autoestudo
---

# Como surgiram os computadores

Quando falamos de computação, muitas vezes é importante deixarmos de lado todas
as diferentes aplicações e aplicativos que fundamentalmente só funcionam com
recursos computacionais para focar apenas **no que é a computação**. O termo
computação tem origem do latim *computatio*, que significa calcular. A
implicação disso é que um computador, por mais complexo que tenha se tornado,
fundamentalmente é uma máquina de cálculo.

Se observamos a história da computação, essa característica fica ainda mais
clara. Os primeiros computadores existentes eram apenas máquinas para calculos
simples. O vídeo abaixo mostra a operação de uma réplica de *la Pascaline*, uma
calculadora mecânica inventada por Blaise Pascal no século 17. Essa calculadora
era limitada apenas a operações de subtração e adição.

:::info Autestudo opcional

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/GX4RQK__fQc" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>
<br/>

:::tip Exercício 1.01

Pensando em dispositivos mecânicos (principalmente engrenagens), como você
fabricaria um somador mecânico similar à calculadora de Pascal?

<details> 

<summary>Resposta</summary>
<p>
Não espere respostas para os exercícios desse material =)

Mas, vai lá, não vou te deixar 100% na mão. Dê uma olhada nesse outro vídeo,
mostrando como a calculadora de Pascal funciona por dentro:
</p>

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/hSl2WFfCTD8" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

</details>

:::

Por mais engenhosa que tenha sido a calculadora de Pascal, ela não satisfez a
ambição do inventor, que era conseguir realizar operações de soma, subtração,
multiplicação e divisão. O motivo disso é que já nessa época ficou claro que,
para ser possível realizar qualquer operação mais complexa do que adições e
multiplicações simples, o mecanismo deveria ser capaz de armazenar os números
envolvidos na operação. Ficou claro, desde o século 17, que um **computador
precisa de memória**.

O problema é que construir apenas com dispositivos mecânicos algo como uma
memória de computador é uma tarefa hercúlea. Uma coisa que a história nos
ensina é que, dado um período de tempo suficientemente grande, sempre vai
aparecer um ~louco~ Hércules. Dito e feito. No século 19, um inventor chamado
Charles Babbage teorizou e projetou uma máquina extremamente complexa (e
grande; do tamanho de um vagão de trem) capaz de reproduzir esse comportamento
de memória. Essa máquina se chamava *The Analytical Engine* e ela era capaz não
só de fazer todas as operações básicas matemáticas, como contava com um
mecanismo robusto para armazenar valores numéricos. Os mais perspicazes devem
ter notado que eu não falei que Babbage **construiu** uma máquina, mas sim
projetou. Ele nunca conseguiu de fato construir a máquina, pois tratava-se de
um projeto extremamente complexo. Hoje existe uma máquina criada a partir dos
esquemáticos desenhados por Babbage, mas ela foi construída quase 100 anos
depois e está em exibição no museu da ciência de Londres. O vídeo abaixo
sintetiza a história por trás da máquina de Babbage.

:::info Autestudo opcional

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/XSkGY6LchJs" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>
<br/>

:::

Apesar de ser uma invenção genuinamente impressionante, a máquina de Babbage
nunca poderia ter sido o futuro da computação. A limitação de dificuldade de
construções e pouca escalabilidade mataria a computação ainda em sua infância.
E assim foi. A máquina de Babbage foi apenas um marco na história do que até
então eram máquinas supérfluas para fazer cálculos que humanos eram mais bem
equipados para fazer.

Tudo isso mudaria no século 20, no período da segunda guerra. Curiosamente,
algumas semanas após o final oficial da guerra, o que significa que este é um
computador lendário e vinculado à segunda guerra mundial, mas que nunca foi
utilizado de fato no decorrer da guerra. Estou falando do *Electronic Numerical
Integrator and Computer*, ou, para os íntimos, **ENIAC**.

<img 
  src="https://www.cnnbrasil.com.br/wp-content/uploads/sites/12/2021/06/26776_1798DEE935286D54.jpg?w=1024"
  alt="ENIAC"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig. 1.01 - O ENIAC foi o primeiro computador eletrônico construído, mas isso
não significa que sua operação era através de um teclado e mouse. Isso veio
muito depois. Inicialmente, os operadores (plural) do ENIAC tinham que
programar suas entradas utilizando um painel de contatores. </center></p>


O ENIAC mudou o panorama de máquinas de cálculo que hoje são lembradas com
carinho por demonstrar o percurso que nos fez chegar no computador moderno,
pois o ENIAC foi um divisor de águas já na época em que foi construído. Sua
capacidade de computação já era muito superior à de um ser humano, por mais que
ele tenha feito anos de KUMON. O segredo por trás do ENIAC? **Tubos de vácuo**.

<img 
  src="https://official.lowee.us/manga/Dr-Stone/0054-006.png"
  alt="Vacuum tubes!"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 1.02 - Se você tivesse que reconstruir a civilação do zero depois de uma
catástrofe de escala global o que você faria? Se você é o Senku, claro que é
fabricar um tubo de vácuo!</center></p>

O **tubo de vácuo** é o bisavô do transistor e já trazia consigo a importância
do componente mais importante da história da computação. Trata-se de um
componente que é capaz de:

1. Amplificar sinais elétricos, agindo como uma "engrenagem eletrônica" (by
   Senku); e
2. Agir como uma chave controlada, permitindo a passagem de corrente elétrica a
   partir de um sinal que age como um "portão".

Parece familiar? É porque é! O tubo de vácuo é o bisavô do transistor, eu já te
falei!

O que isso significa? O tubo de vácuo é capaz de reproduzir o comportamento de
**portas lógicas**. Não entende exatamente como isso seria possível? Vamos
pensar um pouquinho então?

:::tip Exercício 1.02

Vamos simplificar o funcionamento de um tubo de vácuo/transistor? Esqueça as
propriedades eletromagnéticas/atômicas que fazem com que o funcionamento desse
tipo de copmonente seja possível e finja que trata-se apenas de uma chave
mecânica.

<img 
  src="https://www.electronicshub.org/wp-content/uploads/2021/05/Single-Pole-Single-Throw-Switch-Symbol-and-Image.jpg"
  alt="Chave mecânica"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 1.03 - Uma simples chave mecânica.</center></p>

Use o símbolo da figura acima para representar de forma esquemática essa chave
e crie um circuito simples utilizando-as que represente o comportamento das
seguintes funções lógicas:

* *AND* (E); e
* *OR* (OU)

Para isso, são componentes obrigatórios que devem aparecer no seu esquemático:

1. Vcc, ou o ponto positivo da tensão de alimentação;
2. Gnd, ou o ponto onde a tensão é zero; e
3. As chaves em si.

Como um desafio adicional, pense em como seria possível representar uma porta
*NOT*. Lembre-se que você pode ter mais de um ponto de Vcc ou GND. Para este
exercício, pode ser útil representar também um nível de tensão relativo à
entrada do circuito.

:::

Com o poder dos tubos de vácuo, o ENIAC conseguiu fazer muito mais do que
qualquer calculadora mecânica da história e se tornou uma das máquinas
computacionais mais famosas da história. O vídeo abaixo apresenta um breve
histórico do ENIAC.

:::info Autestudo opcional

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/dy0wpDfnpzo" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

Após o ENIAC, a história da computação rapidamente evoluiu no sentido da
utilização de computadores com terminais, compiladores, linguagens de uso geral
e, eventualmente, sistemas operacionais. Claro, isso significa que a computação
evoluiu para muito além de meras calculadoras. De fato, o aumento da
complexidade dos sistemas computacionais fez com que fosse necessário começar a
falar sobre **paradigmas de computação**.

