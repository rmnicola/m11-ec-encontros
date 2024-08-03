---
title: O transistor
sidebar_position: 1
sidebar_class_name: autoestudo
---

# O transistor e sua função no computador

Vamos voltar um pouco no tempo, para 1947. Estamos nos Estados Unidos, no Bell
Laboratories, em Nova Jersey. Foi lá que um grupo de cientistas fez uma
descoberta que abriu os mares para a computação digital. Estamos falando da
criação do primeiro transistor.

No início da nossa jornada pela computação, falamos sobre os tubos de vácuo e
sua importância para o primeiro computador digital da história, o ENIAC. Quando
mencionei os tubos de vácuo, destaquei suas duas principais características que
os tornaram essenciais para a criação de computadores digitais: a capacidade de
*amplificar sinais eletrônicos* e de serem usados para representar *funções
lógicas* como chave. Pois bem, o transistor tem exatamente essas mesmas
características.

Então, por que o transistor foi um divisor de águas? Simples: os tubos de vácuo
eram **grandes**, **caros** e tinham problemas de **durabilidade**. O
transistor surgiu como uma alternativa mais *barata*, mais *confiável*, podendo
ser *miniaturizado* e oferecendo uma transição de estados *muito mais rápida*
que os tubos de vácuo. Embora sirva para a mesma função, o transistor é tão
superior em todos os aspectos que abriu o caminho para um novo mundo da
computação digital.

A próxima pergunta interessante a ser feita é **como funciona o transistor**.

## 1. Semicondutores e o diodo

Por trás do funcionamento do transistor está um tipo de material com uma
característica muito peculiar. Se você era um bom aluno, pode se lembrar de ter
visto no ensino médio uma divisão entre materiais que são *condutores*
elétricos e aqueles que são *isolantes*. Pois bem, os semicondutores são
materiais que não são nem um, nem outro.

Os semicondutores, como o silício, possuem uma capacidade interessante: eles
podem conduzir eletricidade, mas não tão bem quanto os condutores, e podem agir
como isolantes, mas não de forma tão eficiente quanto os isolantes
tradicionais. A "magia" dos semicondutores ocorre porque sua condutividade
elétrica pode ser ajustada adicionando impurezas em um processo chamado
"dopagem". Por exemplo, o silício puro é um semicondutor que, quando dopado com
pequenas quantidades de fósforo, aumenta sua capacidade de conduzir
eletricidade. Esse controle sobre a condutividade é essencial para o
funcionamento dos transistores, permitindo que eles atuem como chaves ou
amplificadores em circuitos eletrônicos.

<img 
  src="https://www.researchgate.net/publication/332530564/figure/fig2/AS:749477560348679@1555700783530/Example-of-doping-in-Silicon-a-intrinsic-Silicon-giving-rise-to-intrinsic-carrier.png"
  alt="Dopagem de silício"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.01 - O processo de dopagem do silício. Em a), temos o silício
"puro". Nessa configuração, ele age como um isolante. Em b), temos silício com
dopagem com átomos fósforo, criando um semicondutor *tipo n*. Por fim, em c)
temos uma dopagem com átomos de Boro, criando um semicondutor *tipo
p*.</center></p>

Até hoje eu não vi um recurso tão bom para explicar como funcionam os materiais
semicondutores especificamente para a criação de diodos do que o vídeo do
Veritasium em que ele conta a história e importância do *led azul*.

:::info Autoestudo obrigatório

O trecho relevante começa em 3:49 e vai até 9:20, mas o vídeo é fantástico. Se
tiver meia horinha sobrando aí, assita ele inteiro!

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

### 1.1. Tipo n, tipo p. Tipo, quê?

A imagem acima ilustra dois tipos de semicondutores: tipo n e tipo p. A
diferença entre eles é simples: os semicondutores tipo n são dopados com átomos
que fazem com que haja um excesso de elétrons na ligação. Esses elétrons ficam
em um estado que permite que eles mudem de camada de valência e se movam pela
estrutura do semicondutor quando expostos a uma diferença de potencial. Em
outras palavras, eles se comportam como condutores. Já os semicondutores tipo p
são dopados com átomos que criam uma deficiência de elétrons, ou seja,
"buracos" positivos. Esses buracos também permitem a condução elétrica sob uma
diferença de potencial, tornando-os condutores também.

Então, qual é a diferença? A diferença está na polaridade dos portadores de
carga. Essa distinção pode parecer irrelevante até que combinamos um
semicondutor tipo n com um tipo p, momento em que a mágica acontece.

<img 
  src="https://cdn1.byjus.com/wp-content/uploads/2020/01/unbiased-P-N-junction.png"
  alt="Junção pn"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.02 - A junção pn ocorre quando um semicondutor do tipo n e um
do tipo p são colocados em contato um com o outro. Quando isso acontece, temos
    uma situação em que a polaridade no geral tende à neutralidade e gera-se
    uma *zona de depleção*.</center></p>

Quando os "buracos" (cargas positivas) encontram os elétrons livres (cargas
negativas) na junção pn, ocorre uma neutralização das cargas, criando uma zona
de depleção onde os elétrons do tipo n preenchem os "buracos" do tipo p. Esse
processo resulta em um material que pode se comportar tanto como condutor
quanto como isolante, dependendo da polaridade da tensão aplicada.

Se uma tensão positiva for aplicada ao lado do tipo p, temos uma polarização
direta. Nesse cenário, a diferença de potencial reduz a zona de depleção.
Quando essa zona desaparece, a junção pn permite a passagem de corrente
elétrica, funcionando como um condutor.

<img 
  src="https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEgxXlMiF9EZmT55ODF__uVaTgrgaOp7JGrCgh3OVYUtsfaa676h2ylJt6z6nbASUJVmwaodmgGAewQpTHu_53BbYog8hLUdHupc6DFgnXXCMOTSdOYTSG-LQ8H5QdnBLfDQy_xaP3nqwYk/s1600/pndiode.gif"
  alt="Polarização direta"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '20vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.03 - Polarização direta de uma junção PN. A região de depleção
diminui até deixar de existir.</center></p>

Por outro lado, se a tensão positiva for aplicada ao lado do tipo n, a zona de
depleção aumenta. Nesse caso, o material continua a se comportar como um
isolante. Senhoras e senhores, chegamos ao diodo, um componente que permite a
passagem de corrente apenas em um sentido.

<img 
  src="https://circuitdigest.com/sites/default/files/inlineimages/u/Diode-Reverse-biased-working.gif"
  alt="Polarização reversa"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '90vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.04 - Polarização reversa de junção pn. A região de depleção
aumenta.</center></p>

<img 
  src="https://www.usinainfo.com.br/img/cms/fotos-categorias/simbolo-do-diodo.jpg"
  alt="O diodo"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.05 - O diodo é um componente que permite a passagem de
corrente elétrica apenas do ânodo em direção ao cátodo.</center></p>

:::tip Exercício 4.01

Se uma diferença de potencial positiva reduz a zona de depleção, existe algum
caso em que a tensão aplicada não seja suficiente para tornar o diodo condutor?
Pesquise. Além disso, responda se essa característica influencia a tensão
aplicada, ou seja, se provoca uma queda de tensão. Se houver uma queda de
tensão, há alguma maneira de controlar sua intensidade? O que acontece com essa
energia dissipada?
:::

## 2. O transistor

Para partir do diodo para o transistor, precisamos adicionar um mecanismo que
permita controlar *quando* o componente vai conduzir. Essa adição faz com que
seja possível o componente funcionar tanto como uma chave como um amplificador
de tensão/corrente.

### 2.1. Transistor de junção bipolar

<img 
  src="https://www.allaboutelectronics.org/wp-content/uploads/2020/04/BJT_WB_1.png"
  alt="npn BJT"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.06 - O transistor de junção bipolar npn tem três zonas de
material semicondutor, sendo uma tipo p sanduíchada entre duas regiões tipo
n.</center></p>

A resposta? Adicionar três zonas polarizadas, o que faz com que exista duas
zonas de depleção. Aqui, vale à pena também falar sobre a nomenclatura das três
entradas de um transistor bjt:

* A base (B) é onde entra o sinal utilizado como *chave* para fazer com que o
  transistor conduza;
* O coletor (C) é onde tipicamente conecta-se uma fonte de tensão de alta
  potência. Quando o transistor está em condução, a corrente elétrica corre do
  coletor para;
* O emissor (B), que tipicamente é conectado ao restante do circuito (assumindo
  o uso de um transistor como amplificador).

Para entender como o transistor BJT npn funciona é conveniente represetar as
duas junções como diodos, como na figura abaixo.

<img 
  src="https://www.circuitcrush.com/wp-content/uploads/Transistors-as-Diodes-600x338.jpg"
  alt="npn BJT como diodos"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.07 - Transistor npn BJT com suas regiões bipolares como
diodos.</center></p>

Se aplicarmos uma tensão positiva na direção CE, nada acontece, pois as regiões
BE e BC continuam em polarização reversa (de agora em diante chamaremos de
corte). Agora, se houver uma tensão positiva na direção de BE, o transistor
começa a conduzir pois a região de depleção BE diminui e os elétrons do emissor
começam a ir em direção à base, que é positiva.

Ok, mas isso ainda não explicou muita coisa. A próxima informação é
fundamental: as regiões do BJT **não são dopadas da mesma forma**. A base tem
uma dopagem **muito leve** e *fina*, já o emissor tem uma dopagem **pesada** e
o coletor tem uma dopagem **intermediária**. Por que isso é fundamental? Pois
os elétrons que saem do emissor quando BE está conduzindo acabam sendo
capturados pelo coletor, que tem uma dopagem muito mais forte que a base. Isso
faz com que alguns poucos elétrons passem pela base, mas a esmagadora maioria
se move de acordo com a tensão aplicada em CE e vai em direção ao pólo
positivo, no coletor. A imagem abaixo mostra esse fluxo de elétrons.


<img 
  src="https://www.circuitcrush.com/wp-content/uploads/How-BJT-Works.jpg"
  alt="Fluxo de elétrons em um transistor npn"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.08 - Fluxo de elétrons em um transistor npn em região de
condução. Note que esse diagrama não mostra o fluxo de corrente elétrica, mas
sim o fluxo de elétrons.</center></p>

O efeito disso é que a base fica praticamente isolada do circuito de
*potência*, que tem fluxo de corrente de C para E. Essa característica garante
que o transistor consegue funcionar como um **amplificador** e também como uma
**chave** eletrônicamente controlada.

O último detalhe do transistor BJT que vou deixar aqui é a maneira como ele de
fato se parece.

<img 
  src="https://www.circuitcrush.com/wp-content/uploads/BJT-Cross-Section.jpg"
  alt="Fluxo de elétrons em um transistor npn"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.09 - Vista de seção de um transistor BJT npn.</center></p>

:::tip Exercício 4.02

Toda a explicação sobre o transistor BJT foi feita com base no transistor npn.
Se as regiões tiverem as polaridades trocadas, com a base virando negativa e
tanto coletor como emissor virando positivas, o que muda na prática?

:::

### 2.2. O MOSFET


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
