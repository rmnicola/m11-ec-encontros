---
title: Edge Computing
sidebar_position: 4
sidebar_class_name: autoestudo
---

import SamePicture from '@site/static/img/samepicture.jpg';

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
  src={SamePicture}
  alt="They're the same picture"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '45vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 3.04 - They're the same picture.</center></p>

O diagrama *não tem diferença* **nenhuma**? Pois é... Por isso que a "confusão"
entre fog computing e edge computing é absolutamente natural. Cá entre nós, eu
até entendo querer diferenciar as duas coisas, mas eu tô mais do lado de quem
chama tudo de edge de forma indiscriminada.

Tá, mas tem alguma diferença? Tem. Edge computing vai um pouco além de Fog
computing. A pergunte relevante aqui é *por que não utilizar logo o dispositivo
na terminação da rede para fazer a computação*. Em muitos casos essa pergunta
trás uma resposta positiva.

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/3hScMLH7B4o" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

Na verdade, para poder criar um sistema coeso em que parte da computação é
feita no dispositivo final, é bastante comum que a técnica de ter um mini
servidor ou *cloudlet* em uma camada intermediária entre o dispositivo e a
nuvem. Sendo assim, quando temos processamento no dispositivo, geralmente
tempos ao mesmo tempo *fog computing* e *edge computing* ~só pra coisa ficar
ainda mais confusa~.

:::tip Exercício 3.03

Rá! Paradigma secreto desbloqueado... quase. Esse é o seu trabalho. Você pensou
que eu ia falar do nada de *cloudlet* e ia ficar por isso mesmo? Pode ir lá
pesquisar o que isso significa que eu te espero aqui para continuar.

:::

Quando falamos de edge computing, geralmente existe uma separação bem clara de
*camadas*. São elas:

1. **Device layer** - é a camada mais próxima dos dados e do usuário. Carros,
   robôs, smartphones, dispositivos IoT. Essa é a camada mais heterogênea e
   tipicamente a que tem o menor recurso computacional. Trazer o processamento
   para essa camada é um desafio que requer um conhecimento de hardware mais
   aprofundado, principalmente quando trata-se de processamento de inteligência
   artificial.
2. **Edge Layer** - é uma camada intermediária e onde acontece boa parte do
   processamento de dados e análise local. Esta camada inclui dispositivos como
   gateways inteligentes, servidores de borda e micro data centers. Esses
   dispositivos são geralmente localizados próximos aos dispositivos da Device
   Layer e são responsáveis por tarefas mais complexas de processamento de
   dados. No Edge Layer, é comum realizar filtragem, agregação de dados,
   análise avançada e, em alguns casos, armazenamento temporário.
3. **Cloud layer** - essa é a camada que estamos acostumados a lidar quando
   trabalhamos com o já prevalente paradigma de cloud computing. Embora muitas
   das operações sejam realizadas localmente na borda, a nuvem é responsável
   por fornecer recursos adicionais de processamento, armazenamento e análise
   que podem não ser práticos de implementar na borda.

## 6. Quando usar edge computing

Esse é um assunto que vou querer discutir com vocês em sala de aula. Sendo
assim, adivinha? Vai virar exercício para vocês fazerem antes do encontro.

:::tip Exercício 3.04

Tendo em vista o que foi apresentado aqui sobre Edge Computing e o que você
encontrou em sua pesquisa independente, faça considerações sobre vantagens e
desvantagens desse paradigma no que diz respeito aos seguintes quesitos:

a) Latência;

b) Largura e utilização de banda;

c) Privacidade e segurança de dados;

d) Confiabilidade e tolerância à falhas;

e) Personalização e experiência do usuário (e.g. recomendação de conteúdo)

:::

Miau, é isso aí! Vejo vocês no encontro!
