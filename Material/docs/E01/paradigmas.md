---
title: Paradigmas de computação
sidebar_position: 3
sidebar_class_name: autoestudo
---

# Paradigmas de computação

Na seção antrior estabelecemos que, após a construção do ENIAC, começamos uma
era da computação em que os avanços eram exponenciais. Se você fizer um recorte
de cada uma das décadas desde os anos 40 até os anos 2020, a computação vai ter
uma cara radicalmente diferente em cada uma dessas décadas. Em alguns casos, há
mais de uma revolução dentro da mesma década.

Seres humanos adoram esconder conceitos complexos por trás de abstrações. É por
isso que temos a tendência a categorizar tudo. É natural que um assunto tão
complexo e com uma história tão rica quanto a computação também seja dividido
em seções. Onde quero chegar com isso? Quero chegar em uma das maneiras mais
comuns de se dividir/seccionar a computação é pensando em diferentes
**paradigmas**.

## 1. Computação sequencial

Essa seção pode começar e acabar bem rápido com: é o paradigma mais antigo e o
que você está acostumado a fazer desde que fez o seu primeiro programa. Uma
sequência de passos traduzida em uma série de comandos que são executados
sequencialmente e em um núcleo computacional apenas. Por mais que hoje existam
paradigmas muito mais complexos, a maioria esmagadora das soluções
computacionais vive aqui. E tem um bom motivo: funciona, e funciona bem. Se
você não esbarrou em uma das limitações da programação sequencial, in loco e em
um único núcleo, então deveria ficar onde está. É fácil, sem confusão e tem
bolo.

<img 
  src="https://bitismyth.wordpress.com/wp-content/uploads/2012/07/portal-cake.png"
  alt="Bolo"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.01 - O bolo.</center></p>

Eu disse que a seção *pode* começar e acabar bem rápido, não que *vai*. Vou
aproveitar aqui para contar um pouco mais de história, afinal esse paradigma é
tão intuitivo, mas **tão** intuitivo que ele surgiu antes mesmo do primeiro
computador.

Na seção anterior eu mencionei o projeto de Charles Babbage, o motor analítico. 
O que eu não mencionei é que o projeto de Babbage era tão complexo que foi
necessário documentar claramente como operar o equipamento em termos de input e
operações possíveis. Efetivamente Charles Babbage criou o primeiro conjunto de
*microcode* da história. Claro, era um microcode puramente mecânico e bastante
limitado. Está confuso? Não sabe o que é microcode? Tá na hora de você
trabalhar um pouquinho...

:::tip Exercício 2.01

Pesquise o que é microcode e qual a diferença do microcode para a
microarquitetura e o *instruction set* de um processador. Considere a afirmação
(minha) de que a diferença entre os dois é fundamental para que seja possível
programar uma quantidade enorme de dispositivos computacionais de forma
homogênea. Por que eu fiz essa afirmação? Apoie-se na diferença entre
microarquitetura, instruction set e microcode para fazer sua resposta.

:::

Ok, mas o que isso tem a ver com a computação sequencial? Bom, em 1843, uma
colega matemática de Babbage escreveu em suas anotações uma sequência de
instruções para o motor analítico para que ele calculasse a série de Bernoulli.
Essas instruções hoje são reconhecidas como o primeiro algoritmo da história e
sua autora, Ada Byron, a condessa de Lovelace, entrou para a história
como a primeira programadora. O vídeo abaixo é um resumo da história dessa
figura histórica da computação.

:::info Autoestudo opcional

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/wnHHzBY1SPQ" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

Não há muito o que falar sobre a computação sequencial que já não é algo
internalizado por qualquer um que programa há mais do que alguns dias; uma
sequência de instruções é coletada, interpretada e executada por uma CPU de
forma síncrona. Se você estava ligado em alguma das aulas em que falei de
arquitetura de computadores, pode ter percebido que a escolha de palavras aqui
traça um paralelo perfeito com **fetch, decode, execute**. Esse paradigma virou
o padrão para aqueles que queriam explorar os novos computadores dos anos 60,
que já utilizavam quase exclusivamente o que hoje conhecemos como **arquitetura
de von neumann**.

<img 
  src="https://computerscience.gcse.guru/wp-content/uploads/2016/04/Von-Neumann-Architecture-Diagram.jpg"
  alt="Von Neumann arch"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.02 - John Von Neumann foi um dos cientistas da computação mais
famosos e influentes da história. Muitos dos conceitos que hoje são
fundamentais para a computação moderna surgiram de definições propostas por
ele. Uma delas é a arquitetura básica de um microprocessador.</center></p>

Junto com essa arquitetura e o paradigma sequencial, surge também a **Lei de
Moore**. A lei de Moore vem de uma observação feita por Gordon Moore em seu
artigo de 1965, *Cramming more components onto integrated circuits*. Moore
notou que havia uma tendência em que a densidade de transistores em
processadores dobrava a cada 1.5 anos.


<img 
  src="https://www.tf.uni-kiel.de/matwis/amat/semitech_en/kap_5/illustr/moore_law.png"
  alt="Lei de Moore"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.03 - A Lei de Moore no mundo real, com processadore da
*Intel*. Décadas após a observação de Gordon Moore, o mundo continuava vendo o
crescimento exponencial de densidade de transistores. Até que...</center></p>

A figura que estou pintando aqui é de um mundo novo e em franca expansão; as
possibilidades eram quase infindáveis e quase nenhuma havia sido explorada.
Havia uma arquitetura nova que fazia com que programar computadores deixasse de
ser uma tarefa exclusiva para os matemáticos envolvidos na criação das
primeiras máquinas. Havia até uma tendência de aproximadamente dobrar o poder
computacional a cada 2 anos, fazendo com que novas possibilidades surgissem
mais rápido do que os entusiastas e pesquisadores conseguiam explorá-las.
Basicamente, o que houve a partir dos anos 60 foi uma era de ouro da
computação.

Todos sabemos como termina a era de ouro, certo?

<img 
  src="https://i.pinimg.com/736x/39/78/d8/3978d8389d879d2b78c914f4e049c1dc.jpg"
  alt="I sacrifice"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.04 - I sacricife.</center></p>

## 2. Computação paralela

Não, não estou falando dessa era de ouro ~graças a Deus~.

Quase tão famosa quanto a lei de Moore em si é a frase: *A lei de Moore está
morta*. Essa frase foi dita incontáveis vezes sempre que a evolução do
processador esbarrava em alguma dificuldade técnica. A primeira vez que essa
frase realmente ganhou tração foi no começo dos anos 2000 (detalhe inútil: eu
já estava usando/montando computadores nessa época com meus 10 anos de idade e
meus 13 disquetes para instalar o Windows 95 =D).

<img 
  src="https://media.licdn.com/dms/image/D5622AQGklQBRU3EyAA/feedshare-shrink_800/0/1708009270479?e=2147483647&v=beta&t=j9tnEopwWM3pi3DHiQdD6nFJc431ooMxkzK96tbBT7U"
  alt="Moore's Law is Dead"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '70vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.05 - O fim da Lei de Moore "acontecendo" em vários momentos da
história.</center></p>

De fato parecia que finalmente o ritmo frenético de evolução das CPUs iria
frear um pouco. Tudo indicava que o ritmo frenético de evolução dos últimos 40
anos finalmente estava chegando em um plateau. Acabou, vamos todos respirar
agora e tirar o máximo desses dispositivos que agora, finalmente, vão parar de
evoluir tão rápido. Certo? Errado! Se tem uma coisa que a história da ciência
nos ensina é que ~não sabemos nada sobre a infindável malícia dentro do coração
humano~ nunca se deve duvidar da nossa capacidade de inovação. 

**Entra a computação paralela**. Em meados dos anos 2000 surgiu a resposta para o
problema; se não dá mais para dobrar a densidade de transistores a cada 2 anos,
que tal dobrar a quantidade de processadores por chip? E foi assim que surgiram
duas CPUs muito importantes para um novo paradigma de computação:

1. Intel Pentium Extreme 840 (chip da família de workstations - Xeon - que
   depois teve sua contrapartida para o consumidor final, o Pentium
   D~isastre~); e
2. Atlhon 64 x2.

Assim como curiosamente acontece hoje, naquela época a AMD ficou muito à frente
da Intel por ter utilizado uma estratégia mais inteligente para a criação do
seu chip dual core. Basicamente, o Atlhon 64 x2 contava com dois núcleos que
tinham acesso a uma memória de alta performance para a comunicação entre os
dois núcleos. Essa memória ficava logo após o cache L2. A imagem abaixo exibe
de forma simplificada essa escolha de arquitetura da AMD. 

<img 
  src="https://www.hardware.com.br/static/books/hardware/cap2-31_html_m49239a8f.png"
  alt="Cache L3 baby"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.06 - Arquitetura simplificada do lendário Atlhon 64 x2, chip
fabricado pela AMD.</center></p>

Enquanto isso, a Intel contava com um Bus de relativa baixa performance para a
comunicação entre dois núcleos totalmente separados. A imagem abaixo
exemplifica essa escolha.

<img 
  src="https://img.hexus.net/v2/processors/intel/lga775/840XE/Block.jpg"
  alt="Intel Pentium D"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '70vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.07 - Enquanto isso, no lado azul tinhamos o Pentium D. Esse
chip era o mais próximo possível de simplesmente dois Pentium 4 colocados um em
cima do outro. O problema? O Pentium 4 já era notóriamente **quente**. Com 130W
de TDP, o Pentium D era uma boa alternativa para as casas norte americanas sem
calefação central.</center></p>

:::tip Exercício 2.02

Eu deixei bem claro que considero que a AMD tomou a decisão mais acertada, mas
você como bom estudante sabe que deve confiar no seu professor, mas verificar o
que ele fala. Pesquise diagramas de arquitetura de CPUs mais modernas e compare
com as arquiteturas apresentadas nas figuras acima. O que é possível notar em
comum, principalmente se focarmos no acesso à memória por cada núcleo? Na sua
opinião, os chips modernos tem mais em comum com o Atlhon 64 x2 ou com o
Pentium D 840?

:::

:::tip Exercício 2.03

Vamos de ciências térmicas? O que significa TDP? Pesquise o termo e responda
qual é a diferença entre o TDP e a potência de consumo de um componente
eletrônico. Como se calcula TDP?

:::


Por quê entrei nessa tangente para falar do paradigma de computação paralela?
Pois acesso compartilhado a memória é **O** assunto mais importante quando
falamos de paralelismo (ou sistemas distribuídos).

### 2.1. Taxonomia de Flynn

Para esta seção, permitam-me ~roubar~ citar um conteúdo diretamente da
Wikipedia:

> Taxonomia (do grego antigo τάξις, táxis, "arranjo" e νομία, nomia, "método")
> é a disciplina biológica que define os grupos de organismos biológicos com base
> em características comuns e dá nomes a esses grupos. Para cada grupo, é dada
> uma nota. Os grupos podem ser agregados para formar um supergrupo de maior
> pontuação, criando uma classificação hierárquica.

A pergunta que deve estar na sua cabeça agora é: quem é Flynn e por que ele tem
uma taxonomia. Ou, talvez: o que diabos grupos de organismos biológicos tem a
ver com computação. Ou, possivelmente: quem é o *mesmo* que a plaquinha do
elevador fica ameaçando de estar no mesmo andar que eu?

Se você teve alguma dessas dúvidas, relaxa que eu vou te ajudar agora!

Michal J. Flynn é um professor emérito de Stanford que foi membro fundador e
primeiro *chairman* do comitê técnico sobre arquitetura computacional da *IEE
Computer Society*. Em 1966, Flynn propos um método para classificar a
computação digital paralela. Esse método ficou conhecido como a Taxonomia de
Flynn.

Beleza, mas por quê *taxonomia*? Pegue a definição de taxonomia e omita os
termos "biológica" ou "biológicos". Pronto, tá aí.

E o *mesmo*? Sei lá, melhor continuar tomando cuidado.

Legal, mas o que diz a **Taxonomia de Flynn**?

Ela divide os tipos de tarefa de computação digital em quatro tipos:

1. Single instruction stream, single data stream (SISD)
2. Single instruction stream, multiple data stream (SIMD)
3. Multiple instruction stream, single data stream (MISD) e
4. Mulitple instruction stream, multiple data stream (MIMD)

Vamos explorar individualmente cada uma delas? 

Foi uma pergunta retórica. Vamos.

**Single instruction, single data (SISD)**

<img 
  src="https://upload.wikimedia.org/wikipedia/commons/thumb/a/ae/SISD.svg/1024px-SISD.svg.png"
  alt="SISD"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '27vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.08 - Uma arquitetura SISD é marcada por ter apenas um conjunto
de instruções para serem executadas em apenas um fluxo de entrada de
dados.</center></p>

Vendo a imagem acima e a sua descrição já deve deixar claro que o SISD nada
mais é do que a denominação da computação sequencial dentro da taxonomia de
Flynn. O que vou aproveitar para ressaltar aqui é que essa taxonomia foca em
duas coisas:

1. Quantos fluxos de entrada de dados o sistema tem?
2. Quantas instruções distintas em paralelo o sistema é capaz de executar?

Essas são as duas perguntas essenciais para essa taxonomia.

:::tip Exercício 2.04 

Considerando a arquitetura SISD disposta acima, cite um exemplo de arquitetura
computacional/dispositivo que exemplifica esse tipo de arquitetura.

:::

**Single instruction, multiple data (SIMD)**

<img 
  src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/ce/SIMD2.svg/220px-SIMD2.svg.png"
  alt="SIMD"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '70vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.09 - A arquitetura SIMD é marcada por continuar com um único
fluxo de instruções, mas agora contamos com múltiplos fluxo de
dados.</center></p>

Este é o primeiro exemplo de arquitetura paralela possível. Temos uma única
instrução que pode ser aplicada para diversos fluxos de dados heterogêneos.
Quando pensamos onde esse tipo de situação pode existir, caímos imediatamente
no mundo da álgebra linear com vetores, matrizes e tensores. Tendo isso em
vista, vamos para mais um exercício?

:::tip Exercício 2.05

Considerando a arquitetura SIMD disposta acima, cite um exemplo de arquitetura
computacional/dispositivo que exemplifica esse tipo de arquitetura. Além disso,
cite uma aplicação que se beneficia amplamente deste tipo de arquitetura.

:::


**Multiple instruction, single data (MISD)**

<img 
  src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/97/MISD.svg/1024px-MISD.svg.png"
  alt="MISD"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '25vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 2.10 - A arquitetura MISD é menos usual. Nela, há apenas um
fluxo de dados para múltiplos fluxos de instruções.</center></p>

O MISD é um pokémon mais difícil de encontrar em campo. Tesmo apenas uma
entrada de dados e mais de uma operação com instruções distintas em unidades
computacionais diferentes. Esse tipo de paralelismo obviamente não tem ganho
algum de performance. O que isso significa? Que você vai ter que pesquisar
agora por que diabos essa arquitetura existe =D

:::tip Exercício 2.06

Qual é a razão de existir da arquitetura MISD? Em que tipo de situação ela é
vantajosa? Cite exemplos.

:::

**Multiple instruction, multiple data (MIMD)**

Por fim, chegamos no tipo de paralelismo comum às CPUs (e, portanto, o tipo de
paralelismo mais acessível e comum para a maioria dos desenvolvedores). Aqui
temos várias unidades computacionais independentes, executando instruções
diferentes com dados diferentes. De fato, se pensarmos nos núcleos de uma CPU,
é exatamente assim que funciona. Esse tipo de paralelismo é **extremamente
influenciado** pelo tipo de **compartilhamento de memória**. Mesmo que cada
núcleo funcione como uma unidade separada, é muito comum precisar consolidar
todos os dados processados para finalizar o programa. Aqui chegamos ao conceito
de **sistemas com memória compartilhada** e **sistemas com memória
distribuída**.

<img 
  src="https://upload.wikimedia.org/wikipedia/commons/thumb/c/c6/MIMD.svg/1024px-MIMD.svg.png"
  alt="MIMD"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '25vh',
    marginRight: 'auto'
  }} 
/>
<br/>

### 2.2. Sistemas com memória compartilhada

Sistemas com memória compartilhada são arquiteturas de computadores onde
múltiplos processadores acessam um espaço de memória comum. Eles são amplamente
utilizados para facilitar o paralelismo, permitindo que diferentes partes de um
programa sejam executadas simultaneamente em diferentes processadores. Duas
arquiteturas principais de memória compartilhada são UMA (Uniform Memory
Access) e NUMA (Non-Uniform Memory Access). No sistema UMA, todos os
processadores têm tempos de acesso idênticos à memória, o que simplifica a
programação, mas pode levar a gargalos devido à competição pelo mesmo recurso
de memória. Em contraste, sistemas NUMA distribuem a memória fisicamente em
várias localidades próximas a diferentes processadores. Embora isso melhore a
escalabilidade e reduza a contenção, o tempo de acesso à memória varia
dependendo da localização do processador e do bloco de memória em questão,
introduzindo complexidade na otimização do desempenho. Uma das ferramentas mais
importantes para o desenvolvimento de algoritmos em sistemas com memória
compartilhada é o OpenMP.

O OpenMP (Open Multi-Processing) é uma API amplamente utilizada para
programação paralela em sistemas com memória compartilhada, como UMA e NUMA.
Com o OpenMP, desenvolvedores podem adicionar diretivas ao código em C, C++ e
Fortran para especificar quais partes do programa devem ser executadas em
paralelo. Em sistemas UMA, o OpenMP permite uma implementação relativamente
direta de paralelismo, já que todos os processadores têm acesso igual à
memória. No entanto, em sistemas NUMA, a eficiência do OpenMP depende de uma
boa gestão da afinidade do processador e da localização da memória, para
minimizar o impacto dos tempos de acesso variáveis. Assim, o OpenMP oferece
ferramentas para controlar a distribuição de tarefas e dados, permitindo que
programadores tirem vantagem da arquitetura subjacente e maximizem a
performance do sistema.

<img 
  src="https://ars.els-cdn.com/content/image/1-s2.0-B9780124080898000033-f03-04-9780124080898.jpg"
  alt="UMANUMANUMAEH"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>

### 2.3. Sistemas com memória distribuída

Sistemas com memória distribuída são arquiteturas de computadores onde cada
processador possui sua própria memória local e os processadores se comunicam
entre si através de uma rede de interconexão. Essa abordagem é comum em
clusters de computadores e supercomputadores, onde a escalabilidade é uma
necessidade crítica. Em contraste com sistemas de memória compartilhada, onde
todos os processadores acessam o mesmo espaço de memória, em sistemas de
memória distribuída, os processadores não compartilham a memória física, o que
elimina a contenção por recursos de memória. No entanto, isso requer que os
dados sejam explicitamente passados entre processadores, geralmente através de
operações de envio e recebimento de mensagens, introduzindo desafios na
programação e na coordenação de tarefas.

O MPI (Message Passing Interface) é a API padrão para programação paralela em
sistemas com memória distribuída. MPI permite que desenvolvedores escrevam
programas paralelos onde os processadores comunicam-se através de troca de
mensagens, coordenando a execução e o compartilhamento de dados. Com MPI, os
programadores têm controle explícito sobre a comunicação entre processos,
permitindo a otimização fina do desempenho do sistema. As funções MPI incluem
envio e recepção de mensagens, operações coletivas como broadcast e redução, e
sincronização de processos. Embora a programação com MPI possa ser mais
complexa do que com APIs para memória compartilhada como OpenMP, ela oferece a
flexibilidade necessária para maximizar a eficiência em arquiteturas
distribuídas. Essa abordagem é particularmente eficaz em ambientes de alto
desempenho, onde a latência da comunicação e a banda larga da rede são fatores
críticos para o desempenho geral do sistema.

<img 
  src="https://www.researchgate.net/publication/309652802/figure/fig7/AS:669409957904393@1536611179704/Uniform-left-vs-non-uniform-right-memory-access-models.png"
  alt="Distributed memory system"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>

## 3. Computação distribuída

A computação distribuída é uma área da informática que se concentra na
utilização de múltiplos sistemas de computação para trabalhar em conjunto em
uma única tarefa ou conjunto de tarefas. Esta abordagem permite a resolução de
problemas complexos de forma mais rápida e eficiente ao distribuir a carga de
trabalho entre vários computadores. Em vez de depender de um único
supercomputador poderoso, a computação distribuída aproveita a capacidade
combinada de vários sistemas menores, interconectados através de redes. Esta
arquitetura não apenas melhora o desempenho e a escalabilidade, mas também
proporciona maior resiliência e flexibilidade, pois os recursos podem ser
gerenciados e alocados conforme necessário.

Dentro do campo da computação distribuída, duas áreas específicas se destacam:
Clusters e High-Performance Computing (HPC). 

### 3.1. Clusters

Clusters são conjuntos de computadores interconectados que trabalham em
conjunto como se fossem um único sistema. Cada nó de um cluster possui seus
próprios recursos de processamento e memória, e a comunicação entre os nós é
feita através de redes de alta velocidade. Clusters são amplamente utilizados
em aplicações que requerem grande capacidade de processamento e armazenamento,
como em simulações científicas, análise de grandes volumes de dados e serviços
de hospedagem web. A configuração de um cluster pode variar desde alguns
computadores conectados em rede local até milhares de nós espalhados por data
centers, permitindo uma escalabilidade significativa.

### 3.2. HPC

High-Performance Computing (HPC), por sua vez, refere-se ao uso de
supercomputadores e clusters de alta capacidade para resolver problemas
extremamente complexos e computacionalmente intensivos. HPC é essencial em
campos como modelagem climática, bioinformática, física de partículas e
engenharia, onde as simulações e análises exigem poder de processamento que vai
além das capacidades dos computadores comuns. Sistemas HPC são projetados para
maximizar o desempenho e a eficiência, utilizando tecnologias avançadas de
hardware e software, como processadores de múltiplos núcleos, redes de alta
velocidade e algoritmos paralelos. Além disso, a infraestrutura HPC
frequentemente emprega técnicas sofisticadas de gerenciamento de recursos e
otimização para garantir que o poder de computação seja utilizado de maneira
eficaz e eficiente. Em resumo, a computação distribuída, com ênfase em clusters
e HPC, continua a ser uma área vital para a ciência, a indústria e a inovação
tecnológica, permitindo avanços significativos em diversas disciplinas.

## 4. Computação em nuvem

A computação em nuvem é um paradigma que permite o acesso sob demanda a um pool
compartilhado de recursos computacionais, como servidores, armazenamento, redes
e aplicativos, através da internet. Esse modelo revolucionou a maneira como as
empresas e indivíduos utilizam a tecnologia, oferecendo flexibilidade,
escalabilidade e economia de custos. Em vez de investir em infraestrutura
física e gerenciar hardware localmente, os usuários podem alocar recursos de
acordo com suas necessidades específicas, pagando apenas pelo que utilizam.
Isso não só reduz o capital inicial necessário para novos projetos, mas também
permite que organizações escalem suas operações rapidamente para atender a
picos de demanda ou ajustem-se a condições variáveis do mercado.

A computação em nuvem é geralmente categorizada em três modelos de serviço
principais: Infraestrutura como Serviço (IaaS), Plataforma como Serviço (PaaS)
e Software como Serviço (SaaS). No modelo IaaS, os provedores de nuvem oferecem
componentes de infraestrutura básica, como máquinas virtuais, redes e
armazenamento, permitindo que os clientes construam suas próprias plataformas
de TI sobre essa base. O PaaS fornece um ambiente de desenvolvimento completo,
incluindo ferramentas e frameworks, facilitando a criação e implementação de
aplicativos sem a necessidade de gerenciar a infraestrutura subjacente. O SaaS,
por sua vez, entrega aplicativos prontos para uso que são hospedados e mantidos
pelos provedores, como software de gerenciamento de relacionamento com clientes
(CRM) ou plataformas de e-mail. Juntos, esses modelos permitem que as
organizações se concentrem em suas competências principais, delegando a
complexidade e os custos da gestão de TI aos provedores de nuvem.

## 5. Computação em névoa

Fog computing, também conhecida como computação em névoa, é uma extensão do
paradigma de computação em nuvem que traz o poder de processamento e
armazenamento mais próximo dos dispositivos que geram e consomem dados. Esse
modelo é projetado para superar as limitações de latência, largura de banda e
segurança associadas à centralização total dos recursos na nuvem. Ao distribuir
recursos computacionais pela "névoa" – ou seja, em dispositivos locais e
gateways próximos à borda da rede – o fog computing permite que aplicações
sensíveis ao tempo, como sistemas de automação industrial, cidades inteligentes
e veículos autônomos, funcionem de forma mais eficiente e responsiva. Esse
paradigma não apenas melhora a eficiência do processamento de dados, mas também
aumenta a resiliência e a segurança, ao minimizar a quantidade de dados que
precisa ser transmitida para a nuvem centralizada.

Uma implementação moderna de fog computing é encontrada no uso de "edge" com
Next.js, um popular framework para a construção de aplicações web com React.
Next.js facilita o desenvolvimento de aplicações full-stack, oferecendo
funcionalidades como renderização no lado do servidor (SSR), geração estática
(SSG) e agora, computação na borda (edge computing). A implementação de "edge"
no Next.js permite que partes críticas do processamento da aplicação sejam
executadas em servidores localizados mais próximos dos usuários finais, em vez
de em data centers centralizados. Isso resulta em tempos de resposta mais
rápidos e uma experiência de usuário mais fluida, especialmente importante para
aplicações que exigem alta interatividade e baixa latência.

No contexto do Next.js, "edge" refere-se à capacidade de executar funções
serverless ou middleware diretamente na borda da rede, usando plataformas como
Vercel Edge Functions. Essas funções são pequenas e otimizadas para execução
rápida, manipulando tarefas como autenticação, roteamento de pedidos, ou
personalização de conteúdo em tempo real. Com a computação na borda,
desenvolvedores podem criar experiências web que respondem quase
instantaneamente às ações do usuário, mantendo a carga nos servidores centrais
e a latência ao mínimo. Dessa forma, a integração de edge computing com Next.js
exemplifica como o fog computing pode ser aplicado para melhorar a performance
e a eficiência das aplicações modernas.

## 6. Computação de borda

Restou apenas uma dos paradigmas que acho interessante pontuar nesse material,
mas esse merece uma seção separada pois é o foco do nosso módulo.
