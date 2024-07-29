---
title: Paradigmas de computação
sidebar_position: 3
sidebar_class_name: autoestudo
---

# Paradigmas de computação

## 1. Computação sequencial

A computação sequencial é o paradigma computacional mais simples e intuitivo
entre os aqui dispostos. Esse paradigma é tão intuitivo, que ele nasceu antes
mesmo do primeiro computador com memória e CPU.

Na seção anterior eu mencionei o projeto de Charles Babbage, o motor analítico. 
O que eu não mencionei é que o projeto de Babbage era tão complexo que foi
necessário documentar claramente como operar o equipamento em termos de input e
operações possíveis. O que isso significa? Que o computador de Babbage foi o
primeiro a ter um **instruction set** (não se preocupe se não souber exatamente
o que isso significa, vamos voltar nesse assunto em breve).

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

Junto com essa arquitetura e o paradigma sequencial, surge também a **Lei de
Moore**. A lei de Moore vem de uma observação feita por Gordon Moore em seu
artigo de 1965, *Cramming more components onto integrated circuits*. Moore
notou que havia uma tendência em que a densidade de transistores em
processadores dobrava a cada 1.5 anos.

A figura que estou pintando aqui é de um mundo novo e em franca expansão; as
possibilidades eram quase infindáveis quase nenhuma havia sido explorada. Havia
uma arquitetura nova que fazia com que programar computadores deixasse de ser
uma tarefa exclusiva para os matemáticos envolvidos na criação das primeiras
máquinas. Havia até uma tendência de aproximadamente dobrar o poder
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

## 2. Computação paralela

Não, não estou falando dessa era de ouro ~graças a Deus~.

Quase tão famosa quanto a lei de Moore em si é a frase: *A lei de Moore está
morta*. Essa frase foi dita incontáveis vezes sempre que a evolução do
processador esbarrava em alguma dificuldade técnica. A primeira vez que essa
frase realmente ganhou tração foi no começo dos anos 2000 (detalhe inútil: eu
já estava usando/montando computadores nessa época com meus 10 anos de idade e
meus 13 disquetes para instalar o Windows 95 =D).

De fato parecia que finalmente o ritmo frenético de evolução das CPUs iria
frear um pouco, até que em meados dos anos 2000 surgiu a resposta para o
problema; se não dá mais para dobrar a densidade de transistores a cada 2 anos,
que tal dobrar a quantidade de processadores por chip? E foi assim que surgiram
duas CPUs muito importantes para um novo paradigma de computação:

1. Intel Pentium Extreme 840 (no ano seguinte introduziram uma arquitetura
   muito similar para o mercado além das workstations, o Pentium D~isastre~); e
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

A decisão da AMD se mostrou muito mais acertada e norteou a arquitetura que
hoje é padrão para CPUs multicore, em que há um nível (ou mais) de cache
compartilhado por mais de um núcleo após o cache L2. Hoje em dia chamamos esse
de cache L3.

<img 
  src="https://software.rajivprab.com/wp-content/uploads/2019/07/cache.png"
  alt="Cache L3"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '70vh',
    marginRight: 'auto'
  }} 
/>
<br/>

Por quê entrei nessa tangente para falar do paradigma de computação paralela?
Pois acesso compartilhado a memória é **O** assunto mais importante quando
falamos de paralelismo (ou sistemas distribuídos).

### 2.1. Taxonomia de Flynn

Dentro do paradigma de computação paralela, surgem alguns acrônimos
importantes a partir do que chamamos de taxonomia de Flynn.

**Single instruction, single data (SISD)**

Aqui é basicamente a denominação para o paradigma sequencial. Há apenas um
stream de informação e apenas um stream de instruções.

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

**Single instruction, multiple data (SIMD)**

Aqui já temos o primeiro exemplo de paralelismo. A situação do SIMD é quando
temos apenas uma instrução que deve ser executada para diversos dados
separadamente. Ou seja, o problema precisa estar disposto de uma forma que a
mesma operação deve ser feita para todos os dados envolvidos. Esse tipo de
operação é muito comum na álgebra linear (vetores/tensores). Um exemplo de
hardware moderno que funciona dessa forma é a GPU. Um exemplo de aplicação é
para deep learning. Sistemas SIMD são tipicamente o que chamamos de
*embarrasingly parallel* e são o santo graal do paralelismo. O problema é que
nem todos os problemas computacionais podem ser vetorizados.

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

**Multiple instruction, single data (MISD)**

Esse é um tipo de arquitetura paralela menos usual. Aqui temos apenas uma
entrada de dados e mais de uma operação em unidades computacionais diferentes.
Esse tipo de paralelismo não tem ganho algum de performance, por isso é pouco
usual. O ganho aqui é de segurança. Em sistemas em que a falha é absolutamente
inaceitável, é comum ter dois processadores trabalhando com o mesmo stream de
dados para replicação de tarefas e validação dos resultados.

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
