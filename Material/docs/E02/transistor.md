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

## 1. Como funciona o transistor

### 1.1. Semicondutores e o diodo

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

#### 1.1.1. Tipo n, tipo p. Tipo, quê?

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

Por outro lado, se a tensão positiva for aplicada ao lado do tipo n, a zona de
depleção aumenta. Nesse caso, o material continua a se comportar como um
isolante. Senhoras e senhores, chegamos ao diodo, um componente que permite a
passagem de corrente apenas em um sentido.

<img 
  src="https://www.usinainfo.com.br/img/cms/fotos-categorias/simbolo-do-diodo.jpg"
  alt="O diodo"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '60vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 4.03 - O diodo é um componente que permite a passagem de
corrente elétrica apenas do ânodo em direção ao cátodo.</center></p>

:::tip Exercício 4.01

Se uma diferença de potencial positiva reduz a zona de depleção, existe algum
caso em que a tensão aplicada não seja suficiente para tornar o diodo condutor?
Pesquise. Além disso, responda se essa característica influencia a tensão
aplicada, ou seja, se provoca uma queda de tensão. Se houver uma queda de
tensão, há alguma maneira de controlar sua intensidade? O que acontece com essa
energia dissipada?
:::

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
