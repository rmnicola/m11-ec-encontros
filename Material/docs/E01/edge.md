---
title: Edge Computing
sidebar_position: 4
sidebar_class_name: autoestudo
---

# Introdução à computação na borda

Continuando nossa jornada pelos principais paradigmas de computação, chegamos
finalmente ao paradigma que empresta o nome ao módulo 11.

Antes de mergulharmos nas definições importantes a respeito de edge computing,
vamos relembrar rapidamente a jornada até aqui:

* **Século 17** - o panomara da computação estava embrionário, com apenas
  algumas máquinas de cálculo puramente mecânicas.
* **Século 19** - projeto de máquinas de cálculo mais sofisticadas, com memória
  e conjunto de microcode. Primeiro algoritmo da história.
* **1945** - Primeiro computador eletrônico.
* **1965 - 1985** - era do processamento centralizado (e sequêncial) em
  *mainframes*.
* **1986 - 1990** - começa a era dos PCs e compartilhamento de arquivos.
* **1990 - 1996** - surge o conceito de computação distribuída com o paradigma
  cliente/servidor.
* **1996 em diante** - web 1.0 e computação distribuída no modelo navegador -
  servidor. 
* **2005 em diante** - web 2.0 e novos paradigmas de computação distribuída
  (grid, p2p, cloud, etc)

Olhando o panorama acima, fica claro que desde que a computação se tornou
prevalente na sociedade, o esforço tem sido de tornar a computação uma
mercadoria dissociada do *hardware* e disponível a uma distância cada vez menor
das pessoas.

Quando olhamos o progresso da computação sob esse prisma, se torna natural a
conclusão que a próxima evolução da computação, já nos anos 2010, foi a de
**encurtar a distância entre a fonte dos dados (cliente) e processamento**.

Assim, surgem dois conceitos importantes: computação em névoa (*Fog computing*)
e computação na borda (*Edge computing*)

## 1. Fog computing

Se você perguntar para uma criança de 5 anos qual a diferença entre a nuvem e a
névoa, qual seria a resposta dela? Como eu não tenho nenhuma criança de 5 anos
em mãos, vou pedir para o GPT fingir ser uma criança de 5 anos e responder para
mim:

> A nuvem é aquela coisa fofa e branca lá no céu, que parece algodão doce. A
> névoa é quando tem tipo uma fumaça no chão e a gente não consegue ver as coisas
> direito, como se as nuvens tivessem caído no chão!
>
> GPT 4.o (como uma criança de 5 anos)

*Como se as nuvens tivessem caído no chão*. Eu não poderia ter dito melhor. A
ideia central por trás da computação em névoa é **trazer a nuvem para mais
próximo do "chão"**. O que é o chão? Nesse caso, o chão é o cliente (ou, de
onde saem os dados).

<img 
  src="https://www.securens.in/wp-content/uploads/2020/02/Fog-computing_01.jpg"
  alt="Fog computing"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '50vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 3.01 - Fog computing é quando a nuvem se aproxima dos
dispositivos que geram os dados.</center></p>

Quais as vantagens disso? Latência! Ou, explicando de outra forma: o tempo que
demora entre capturar um dado e esse dado ser processado é *menor*. Isso
significa que o usuário precisa esperar menos tempo por uma resposta do
sistema.

Pô, legal! Só que e aí? A solução é só encher o mundo de bem mais servidores?
Que baita paradigma inovador, né? Calma, tem uma sacada: os dispositivos que
ficam na camada de *névoa* tem **muito menos poder computacional** e, por
consequência, são **bem mais baratos**. Infelizmente, isso trás uma
*contrapartida*. Se os dispositivos na névoa são mais fracos, significa que
precisamos tomar alguns cuidados na hora de fazermos o setup desses
dispositivos.

1. Naturalmente há uma *heterogeneidade* bem maior no hardware dos dispositivos
   na névoa. Isso significa que faz muito sentido trabalhar com ambientes
   totalmente containerizados/virtualizados para minimizar essa diferença.
2. O tempo de resposta, que é o motivo pelo qual esse paradigma sequer existe,
   pode sofrer com o baixo poder computacional. Sendo assim, muitas arestas
   precisam ser aparadas. Uma das mais dolorosas para nossos amigos *web devs*
   é que o tempo de *cold start* do Node é simplesmente incompatível com essa
   aplicação.
3. Deve ficar bem delimitado o que é um processamento adequado para o
   dispositivo na camada de névoa e o que **precisa ser enviado à nuvem**.

:::tip Exercício 3.01

*Cold start*. Cuma? É, rapazeada. Essa é de vocês. Pesquise o que significa a
frase que soltei casualmente acima. O que é cold start e o que o Node tem a ver
com isso. Além disso, descubra quais as alternativas já que o Node não atende a
esse requisito.

:::

Há um certa confusão à respeito do que é *fog computing* e o que é *edge
computing*. Em muitos lugares, você vai ver exatamente esse mesmo diagrama
acima e a mesma descrição do conceito de *fog computing*, só que sendo chamado
de *edge computing*. Isso **não está errado**. A maioria da literatura faz a
distinção entre esses dois paradigmas, mas *entende fog computing como uma das
formas possíveis de edge computing*. Esse disclaimer vai ser importante para
manter em mente enquanto você assiste a esse vídeo:

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/yOP5-3_WFus" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

:::tip Exercício 3.02

Vamos ver se você estava prestando atenção. O vídeo acima citou uma *clara
limitação* relacionada ao paradigma de fog computing. Tendo essa limitação em
mente, cite um exemplo de aplicação em que fog computing é adequado e outra em
que utilizar fog computing vai mais atrapalhar do que ajudar.

:::

### 1.1. Dúvidas a respeito de Fog computing

Não há exatamente um consenso sobre a real utilidade de adicionar dispositivos
para computação na camada de névoa. Um dos momentos mais marcantes recentes foi
quando a Vercel desistiu de oferecer a possibilidade de processar requisitos na
"borda" em seu framework, o NextJS. Veja o vídeo abaixo para mais detalhes.

:::info Autoestudo opcional

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/lAGE-k1Zfrg" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

## 2. Edge computing

Não, *edge computing* não tem nada a ver com o *eddie*.

<img 
  src="https://uploads.jovemnerd.com.br/wp-content/uploads/2017/06/eddie-vitrine.jpg"
  alt="Eddie"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 3.02 - Eddie, o mascote do Iron Maiden.</center></p>

Depois dessa piada *pavorosa* que eu só deixei para marcar o momento vergonhoso
em que tive essa ideia, segue um diagrama do que de fato é *edge computing*:

<img 
  src="https://www.wipro.com/content/dam/nexus/en/infrastructure/infographics/simple-edge-computing-architecture.jpg"
  alt="Edge computing"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '45vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 3.03 - A arquitetura simplificada de um sistema que funciona com
o paradigma de Edge computing.</center></p>

Pera...

<img 
  src="img/samepicture.jpg"
  alt="Edge computing"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '45vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 3.03 - A arquitetura simplificada de um sistema que funciona com
o paradigma de Edge computing.</center></p>





Edge computing é um paradigma de tecnologia que desloca o processamento e a
análise de dados para mais próximo do local onde eles são gerados, ao invés de
depender de data centers centralizados. Este método é especialmente útil em
cenários onde a latência precisa ser mínima para garantir a eficácia e
segurança dos processos. Por exemplo, em veículos autônomos, a necessidade de
tomar decisões em frações de segundo torna inviável depender de um data center
remoto para processar informações críticas, como dados de sensores e câmeras.
Da mesma forma, em sistemas de monitoramento de saúde, uma resposta rápida pode
ser a diferença entre vida e morte, especialmente em monitoramento remoto de
condições de pacientes.

Além disso, em aplicações industriais de IoT, como controle de equipamentos em
fábricas ou monitoramento de infraestrutura, a edge computing permite que
análises e decisões sejam feitas localmente, evitando possíveis problemas de
latência e conectividade. Ao processar dados na borda, é possível filtrar e
agregar informações de maneira mais eficiente, enviando apenas os dados mais
relevantes para a nuvem, o que reduz significativamente o tráfego na rede e os
custos associados.

### 2.1. Device Layer

A Device Layer, ou camada de dispositivos, é a primeira linha de coleta e
consumo de dados na arquitetura de edge computing. Esta camada é composta por
uma variedade de dispositivos conectados, como sensores, atuadores, câmeras,
smartphones e veículos autônomos. Esses dispositivos são responsáveis pela
coleta de dados do ambiente, como temperatura, pressão, imagens e movimentos,
entre outros.

Além da coleta de dados, muitos desses dispositivos têm capacidade de
processamento embutida, permitindo a execução de algoritmos de análise básica.
Isso inclui a filtragem de ruído, pré-processamento de dados e detecção de
eventos simples. Essa capacidade de processamento local é crucial para reduzir
o volume de dados que precisa ser transmitido para outras camadas, como a Edge
Layer ou a Cloud Layer, especialmente em situações onde a largura de banda é
limitada ou os dados são sensíveis e precisam ser mantidos localmente para
garantir a privacidade e segurança.

### 2.2. Edge Layer

O Edge Layer é a camada intermediária na arquitetura de edge computing, onde
ocorre a maior parte do processamento intensivo de dados e análise local. Esta
camada inclui dispositivos como gateways inteligentes, servidores de borda e
micro data centers. Esses dispositivos são geralmente localizados próximos aos
dispositivos da Device Layer e são responsáveis por tarefas mais complexas de
processamento de dados.

No Edge Layer, é comum realizar filtragem, agregação de dados, análise avançada
e, em alguns casos, armazenamento temporário. Por exemplo, em um sistema de
vigilância por vídeo, as câmeras podem enviar feeds de vídeo para servidores de
borda que analisam as imagens em tempo real para detectar atividades suspeitas.
Somente os dados relevantes, como eventos de segurança, são transmitidos para a
nuvem para análise posterior ou armazenamento de longo prazo.

Essa camada também é crítica para a tomada de decisões em tempo real. A
proximidade do Edge Layer aos dispositivos de origem dos dados permite uma
resposta rápida, essencial em muitas aplicações como controle de tráfego em
cidades inteligentes, gerenciamento de ativos industriais e até mesmo em
serviços de emergência.

### 2.3. Cloud Layer

A Cloud Layer, ou camada de nuvem, continua a desempenhar um papel fundamental
na arquitetura de edge computing. Embora muitas das operações sejam realizadas
localmente na borda, a nuvem é responsável por fornecer recursos adicionais de
processamento, armazenamento e análise que podem não ser práticos de
implementar na borda.

Esta camada oferece escalabilidade e capacidade para realizar processamento de
dados em larga escala, armazenamento de longo prazo e análises complexas que
não exigem respostas imediatas. Por exemplo, dados coletados e processados na
borda podem ser enviados para a nuvem para análises mais profundas, como
aprendizado de máquina ou mineração de dados, que requerem maior poder de
computação.

Além disso, a nuvem serve como um ponto central para integrar dados de várias
bordas, proporcionando uma visão global e unificada de todas as operações. Isso
é particularmente útil para empresas que operam em vários locais ou precisam
consolidar dados de diferentes fontes para uma análise mais abrangente. A
combinação de edge computing e cloud computing cria uma abordagem híbrida, onde
as vantagens de uma resposta rápida e local são complementadas pelo poder e
flexibilidade da nuvem centralizada, oferecendo uma solução robusta e eficiente
para uma ampla gama de aplicações.

## 6. Quando usar edge computing

A edge computing é especialmente útil em situações onde a latência, a largura
de banda, a privacidade dos dados, a confiabilidade e a autonomia do sistema
são fatores críticos. Aqui estão alguns cenários específicos em que a edge
computing é vantajosa:

### 6.1. Baixa Latência

Aplicações que requerem tempos de resposta rápidos, como veículos autônomos,
robótica industrial e realidade aumentada, se beneficiam enormemente da edge
computing. Nestes casos, qualquer atraso na transmissão de dados pode levar a
falhas no sistema ou comprometer a segurança. Ao processar dados localmente, a
edge computing minimiza a latência, permitindo que decisões sejam tomadas quase
instantaneamente.

### 6.2. Limitações de Largura de Banda

Em ambientes onde a conectividade de rede é limitada ou os custos de
transmissão de dados são altos, como em áreas rurais ou em alto mar, a edge
computing pode ser uma solução eficiente. Processar e filtrar dados na borda
reduz a quantidade de informações que precisa ser enviada para a nuvem,
economizando largura de banda e custos associados.

### 6.3. Privacidade e Segurança de Dados

Para aplicações que lidam com dados sensíveis, como informações de saúde ou
dados financeiros, a edge computing oferece uma camada adicional de segurança.
Ao manter o processamento e o armazenamento de dados localmente, é possível
reduzir o risco de exposição de dados durante a transmissão para a nuvem. Além
disso, as regulamentações de proteção de dados, como o GDPR na Europa,
incentivam o processamento local para proteger a privacidade dos usuários.

### 6.4. Confiabilidade e Resiliência

Em sistemas críticos onde a interrupção do serviço não é uma opção, como em
instalações industriais ou infraestruturas de emergência, a edge computing
proporciona uma maior confiabilidade. Mesmo que a conectividade com a nuvem
seja perdida, os dispositivos de borda podem continuar operando de forma
autônoma, garantindo que os serviços essenciais permaneçam ativos.

### 6.5. Eficiência Operacional

Aplicações de monitoramento em tempo real, como vigilância por vídeo ou
monitoramento de equipamentos industriais, beneficiam-se da edge computing para
realizar análises locais e tomar ações imediatas. Isso não só reduz o tempo de
resposta, mas também alivia a carga nos servidores centrais, resultando em uma
operação mais eficiente.

### 6.6. Personalização e Experiência do Usuário

Em cenários onde a personalização é crucial, como em aplicações de varejo ou
entretenimento, a edge computing permite a entrega de conteúdos e serviços
adaptados às preferências do usuário em tempo real. Ao processar dados de
interação localmente, as empresas podem fornecer uma experiência mais ágil e
relevante para seus clientes.
