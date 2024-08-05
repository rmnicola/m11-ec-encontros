---
title: Introdução
sidebar_position: 1
slug: /
---

# Edge Computing

<img 
  src="img/rick-slap.jpg"
  alt="Um tapinha não dói" 
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>

O advento da computação em nuvem questionou o paradigma da computação
centralizada em servidores, tirando o foco do *hardware* e a limitação para
novos negócios na internet. Por quê parar em alguns servidores por continente?
Por que não trabalhar com ainda mais servidores, cada vez mais próximos da
geração de dados? Essa é a provocação do paradigma de *Edge computing* e também
o chamado principal do módulo 11 do curso de Engenharia de Computação do
Inteli. Nesse módulo, vamos voltar para o *hardware* e discutir sobre o
processamento de inteligência artificial a nível de dispositivos.

Antes de seguirmos em frente com o conteúdo principal dessa seção, vou
aproveitar que tenho sua atenção para fazer um **anúncio** de **extrema
importância**. Se liga, que logo abaixo vem o admonition:

:::danger

Esse material **NÃO** substitui de forma alguma o uso da **Adalove**. Você
**DEVE** entrar na Adalove com frequência e **REGISTRAR O SEU PROGRESSO**.
Entendeu? Ainda não? Pera aí que vou desenhar:

<img 
  src="img/assets/aviso-adalove.png"
  alt="ACESSE A ADALOVE" 
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>

:::

Beleza, agora podemos seguir em frente.

## 1. Descrição do módulo e assuntos abordados

### 1.1. Ementa do módulo

:::warning

Essa é a **ementa oficial** do módulo. O texto é sucinto e formal pois ele faz
parte de um documento **apresentado ao MEC** no momento em que o curso é
reconhecido. A ementa é um dos itens que **obrigatoriamente** deve ser
**mostrado aos alunos**. O que estou fazendo agora? Mostrando a ementa do
módulo para vocês. Sem mais dúvidas, certo?

:::

Este módulo versa sobre o desenvolvimento de uma arquitetura de serviços de
borda (Edge Computing), quais são os seus requisitos de implementação e sob
quais situações sua utilização é recomendada. São amplamente estudados sistemas
de nuvem e processamento distribuído em conjunto com as boas práticas de
engenharia de software, para o desenvolvimento de soluções confiáveis e
escaláveis. O projeto de serviços e sistemas distribuídos são abordados sob o
olhar dos conceitos de engenharia e projeto embarcado. A segurança dos dados,
sua anonimização e processo de armazenamento local são utilizados com a
finalidade de trazer análises locais e rápidas para o processo de tomada de
decisões utilizando dados. Estes dados e informações são posteriormente
enviados para sistemas centralizados, ou em cloud computing, para possibilitar
visões holísticas do processo de forma geral. Este módulo também abrange temas
importantes como poluição, ecotoxicologia e gestão ambiental, com foco especial
na sustentabilidade e nos princípios ESG (Environmental, Social, and
Governance). Para a construção das experiências para o usuário, são
apresentados os conceitos do design centrado no usuário, com testes
incorporados ao sistema para validar as experiências e a utilização dos dados
para tomada de decisões. Os estudantes também serão introduzidos a frameworks
para implementação da estratégia, como BSC (Balanced Scorecard) e OKR
(Objectives and Key Results). Eles também irão consolidar seus conhecimentos no
processo de liderança. Como líderes, devem buscar impacto positivo considerando
a agenda global ESG, fomentando uma cultura de feedbacks e prototipando
soluções para o mundo, sempre partindo do autoconhecimento de seus hábitos e da
experimentação intencional através de hipóteses e com avaliação analítica de
resultados. Ao final do módulo, os estudantes terão os conhecimentos
necessários para avaliar quando os sistemas de borda representam uma vantagem
competitiva e são uma necessidade para o processo analisado. 

## 2. Organização do material

Vamos conversar sobre como esse material foi organizado? Isso vai ser
importante para você não se perder por aqui e conseguir identificar rapidamente
quais seções vão ser as mais importantes para você o mais rápido possível (e
quais **valem nota** também =O). Vamos começar falando dos **ícones** que vocês
vão ver por aqui.

### 2.1. Glossário de ícones

O objetivo desse material é facilitar sua vida e diminuir a distância entre
você e as informações necessárias para que você faça um projeto espetacular.
Para isso, é essencial que as informações aqui dispostas sejam muito fáceis de
categorizar só batendo o olho. Qual a melhor forma de fazer isso? Usando ícones
padronizados. Em cada seção de conteúdo, você vai ver um **ícone à esquerda do
título da seção**. Aqui estão os ícones que você vai encontrar e o que eles
significam:

<div style={{ display: 'flex', justifyContent: 'center', alignItems: 'center',
margin: '0' }}>
    <table>
        <tr>
            <th>Ícone</th>
            <th>Descrição</th>
        </tr>
        <tr>
            <td style={{textAlign: "center", verticalAlign: "middle"}}>
                <img src="icons/artefato.svg"/>
            </td>
            <td style={{textAlign: "left", verticalAlign: 'top', paddingTop:
            '25px' }}>
                Significa que a seção vai conter o detalhamento de um ou mais
                **artefatos** do metaprojeto.
            </td>
        </tr>
        <tr>
            <td style={{textAlign: "center", verticalAlign: "middle"}}>
                <img src="icons/autoestudo.svg"/>
            </td>
            <td style={{textAlign: "left", verticalAlign: 'top', paddingTop:
            '25px' }}>
                Significa que a seção é um autoestudo **obrigatório**.
            </td>
        </tr>
        <tr>
            <td style={{textAlign: "center", verticalAlign: "middle"}}>
                <img src="icons/opcional.svg"/>
            </td>
            <td style={{textAlign: "left", verticalAlign: 'top', paddingTop:
            '25px' }}>
                Significa que a seção é um autoestudo **opcional**.
            </td>
        </tr>
        <tr>
            <td style={{textAlign: "center", verticalAlign: "middle"}}>
                <img src="icons/ponderada.svg"/>
            </td>
            <td style={{textAlign: "left", verticalAlign: 'top', paddingTop:
            '25px' }}>
                Significa que a seção descreve o enunciado de uma atividade que
                **vale nota**.
            </td>
        </tr>
    </table>
</div>

## 3. Bibliografia

:::warning

Sou eu novamente. Só vim avisar que mostrar a bibliografia do módulo para vocês
também é **obrigatório** de acordo com o MEC. O que estou fazendo aqui? Estou
mostrando a bibliografia para vocês.

:::

### 3.1. Bibliografia básica

[ATCHABAHIAN, A. C. R. C. ESG: Teoria e prática para a verdadeira
sustentabilidade nos negócios. São Paulo: Expressa,
2022.](https://integrada.minhabiblioteca.com.br/#/books/9786555599237)

* O livro é uma obra essencial para integrar as diretrizes de Environmental,
  Social, and Governance em estratégias empresariais, enfatizando a importância
  de práticas sustentáveis genuínas. Ele aborda conceitos cruciais sobre como
  negócios podem e devem operar de maneira responsável, alinhando lucratividade
  à ética ambiental e social, crucial para a resiliência e reputação
  corporativa em uma economia cada vez mais consciente.

[BORDIN, M. V.; SERPA, M. S.; BRANDÃO, D. S.; et al. Processamento paralelo e
distribuído. Porto Alegre: SAGAH,
2021](https://integrada.minhabiblioteca.com.br/#/books/9786556901084)

* Este livro oferece uma análise aprofundada dos paradigmas do processamento
  paralelo e distribuído, abordando seus conceitos, motivações, históricos e
  plataformas de execução. Com insights sobre suas perspectivas atuais e
  futuras, é uma leitura fundamental para entender o processamento de dados em
  diferentes cenários computacionais.

[FERNANDES, B. H. R.; BERTON, L. H. Administração estratégica: da competência
empreendedora à avaliação de desempenho. 2. ed. São Paulo: Saraiva,
2017](https://integrada.minhabiblioteca.com.br/#/books/9788502146013)

* Considerando o contexto dos desafios de liderança e administração, este livro
  dá subsídios para que se construa avaliações de desempenho considerando os
  aspectos de gestão de times dentro de organizações. 

[FILHO, R. I.; CIERCO, A. A. Governança, ESG e estrutura organizacional. São
Paulo: Actual,
2022](https://integrada.minhabiblioteca.com.br/#/books/9786587019536)

* O livro aborda temas atuais e relevantes, oferece uma abordagem prática e
  aplicável, é escrito por especialistas respeitados e destaca a importância
  estratégica da governança e da sustentabilidade nas organizações.

[FOROUZAN, B. A. Comunicação de dados e redes de computadores. Porto Alegre:
AMGH, 2010](https://integrada.minhabiblioteca.com.br/#/books/9788563308474)

* Este livro abrangente aborda a teoria e aplicação de redes de computadores,
  utilizando o modelo de cinco camadas da Internet como estrutura. É uma
  leitura essencial para compreender as características dos dispositivos de
  rede e a interdependência das camadas, proporcionando um entendimento
  completo da teoria e prática de redes de comunicação.

[GONZALEZ, R. S. Governança Corporativa. São Paulo: Trevisan,
2012](https://integrada.minhabiblioteca.com.br/#/books/9788599519424)

* A obra é fundamental para compreender os mecanismos de controle e direção nas
  corporações, abordando temas como ética empresarial, responsabilidade dos
  gestores e transparência para stakeholders. Sua utilização é justificada pela
  profundidade com que trata os princípios de boas práticas administrativas,
  essenciais para a sustentabilidade e o sucesso de qualquer organização no
  cenário econômico atual.

[MONTEIRO, E. R.; JUNIOR, R. C M.; LIMA, B. S. de; et al. Sistemas
distribuídos. Porto Alegre: SAGAH,
2020.](https://integrada.minhabiblioteca.com.br/#/books/9786556901978)

* Este livro aborda os sistemas distribuídos, explorando a necessidade de
  compartilhamento de recursos em aplicações que exigem grande capacidade de
  processamento e armazenamento. Leitura essencial para compreender como lidar
  com a imensa quantidade de dados na era atual e aproveitar os benefícios dos
  sistemas distribuídos.

[SOBRAL, W. S. Design de interfaces: introdução. São Paulo: Saraiva,
2019.](https://integrada.minhabiblioteca.com.br/#/books/9788536532073)

* Esta obra aborda o que são interfaces e sua evolução ao longo do tempo, até
  chegarem à Interface Homem-Computador (IHC). Propõe o estudo das fases de um
  projeto, incluindo métodos de construção e documentação. Discorre sobre as
  estratégias de prototipagem adotadas no desenvolvimento do design e comenta a
  lista de princípios para orientar o designer durante esse processo criativo.

[SOLER, F.; PALERMO, C. ESG (ambiental, social e governança): da teoria à
prática. São Paulo: Expressa,
2023.](https://integrada.minhabiblioteca.com.br/#/books/9786553624276)

* O livro é indispensável para a atualização em sustentabilidade empresarial,
  trazendo a interface entre os pilares ESG e sua aplicação prática. Ele é
  crucial por detalhar estratégias operacionais e casos reais, orientando como
  transpor a teoria de responsabilidade corporativa para ações concretas e
  mensuráveis, alinhadas às exigências de um mercado global e consciente.

### 4.2. Bibliografia complementar

[BARSANO, P. R.; BARBOSA, R. P. Gestão ambiental. São Paulo: Saraiva,
2017.](https://integrada.minhabiblioteca.com.br/#/books/9788536521596)

* O livro aborda uma ampla gama de tópicos relacionados à gestão ambiental,
  apresenta uma abordagem prática e contextualizada no cenário brasileiro, e é
  escrito por autores especializados na área. Utilizando esse livro no curso,
  os leitores podem obter uma compreensão aprofundada dos princípios e práticas
  da gestão ambiental, preparando-se para atuar nesse campo de forma consciente
  e responsável.

[COHN, M. Desenvolvimento de software com Scrum. Porto Alegre, Bookman,
2011.](https://integrada.minhabiblioteca.com.br/#/books/9788577808199)

* O livro apresenta estratégias para a implementação e a manutenção de times de
  desenvolvimento utilizando a metodologia Scrum.

[CORMEN, T. Algoritmos: teoria e prática. 3. ed. Rio de Janeiro: LTC,
2022.](https://integrada.minhabiblioteca.com.br/#/books/9788595158092)

* Este livro apresenta um texto abrangente sobre o moderno estudo de algoritmos
  para computadores. É uma obra clássica, cuja primeira edição tornou-se
  amplamente adotada nas melhores universidades em todo o mundo, bem como
  padrão de referência para profissionais da área.

[DELAMARO, M. Introdução ao teste de software. 2. ed. Rio de Janeiro: Elsevier,
2016.](https://integrada.minhabiblioteca.com.br/#/books/9788595155732)

* Este livro, desenvolvido para servir como livro de apoio em cursos de
  engenharia de computação e áreas correlatas, visa apresentar ao profissional
  as informações básicas relativas às técnicas de teste, bem como formas de
  aplicá-las nos mais variados domínios e tipos de software.

[FILHO, E. H. Balanced scorecard e a gestão estratégica: uma abordagem prática.
Rio de Janeiro: Alta Books,
2019.](https://integrada.minhabiblioteca.com.br/#/books/9786555206920)

* O livro oferece uma compreensão clara e prática da gestão estratégica e do
  Balanced Scorecard. Ele fornece as ferramentas e conhecimentos necessários
  para desenvolver e implementar estratégias eficazes, permitindo que os
  leitores adquiram habilidades relevantes e aplicáveis no contexto
  empresarial.

[JR., A. P.; SAMPAIO, C. A. C.; FERNANDES, V. Gestão Empresarial e
Sustentabilidade. Barueri: Manole,
2017.](https://integrada.minhabiblioteca.com.br/#/books/9788520439135)

* O livro oferece uma visão atualizada, prática e abrangente da gestão
  empresarial sustentável. Ele fornece aos estudantes as ferramentas e
  conhecimentos necessários para compreender e lidar com os desafios e
  oportunidades relacionados à sustentabilidade nas organizações, preparando-os
  para uma atuação responsável e eficaz no mundo dos negócios.

[KALBACH, J. Design de navegação Web: otimizando a experiência do usuário.
Porto Alegre: Bookman, 2009.
](https://integrada.minhabiblioteca.com.br/#/books/9788577805310)

* O livro é uma leitura essencial para profissionais de design e
  desenvolvimento web, abordando tópicos como arquitetura de informação,
  usabilidade, e experiência do usuário. Oferece insights práticos e
  estratégias para criar interfaces eficientes, melhorando a interação do
  usuário com websites e aplicativos.

[MISSEL, S. Feedback corporativo: como saber se está indo bem. 2. ed. São
Paulo: Benvirá, 2017.
](https://integrada.minhabiblioteca.com.br/books/9788557170322)

* Este livro analisa e descreve como o feedback pode ser utilizado em
  organizações e em processos de avaliação, dando subsídios para os estudantes
  conheçam essa ferramenta de desenvolvimento pessoal e organizacional. 

[SILBERSCHATZ, A. Sistema de bancos de dados. 7. ed. Rio de Janeiro: LTC,
2020.](https://integrada.minhabiblioteca.com.br/#/books/9788595157552/ )

* Este livro abrangente sobre sistema de banco de dados apresenta desde os
  fundamentos até os conceitos mais recentes, como Big Data e blockchain. Com
  uma abordagem prática e teórica, cobre uma variedade de tópicos, incluindo
  gerenciamento, implementação e aplicação de bancos de dados.

[SILVA, L. F.; RIVA, A. D.; ROSA, G. A.; et al. Banco de dados não relacional.
Porto Alegre: SAGAH,
2021.](https://integrada.minhabiblioteca.com.br/#/books/9786556901534)

* Este guia prático oferece uma referência completa sobre os bancos de dados
  NoSQL, abordando suas classificações, contextos de uso, características e
  tipos de dados. Leitura essencial para entender e aproveitar as vantagens dos
  bancos de dados não relacionais na era dos grandes volumes de dados.
