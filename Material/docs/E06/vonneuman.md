---
title: von Neumann
sidebar_position: 1
sidebar_class_name: autoestudo
---

import vonNeumann from '@site/static/img/vonneumann.png';
import IAS from '@site/static/img/ias.png';
import InstructionWord from '@site/static/img/instrword.png';
import NumberWord from '@site/static/img/numberword.png';
import IASTable from '@site/static/img/iastable.png';
import FetchCycle from '@site/static/img/fetchflow.png';
import ExecuteCycle from '@site/static/img/executeflow.png';

# As máquinas de von Neumann

Vamos explorar outra vertente da história da computação. Um ano antes da
construção do ENIAC, em 1945, um cientista húngaro chamado John von Neumann fez
uma proposta de *arquitetura* que mudaria a história da computação. Como vimos
quando estudamos o ENIAC, basicamente ele era uma máquina computacional que
contava com operadores para a entrada de instruções o tempo todo. A figura
12.01 exibe as programadoras do ENIAC interagindo com o *plugboard*, placa que
era necessária para escolher a operação e inserir os dados de entrada.

<img 
  src="https://www.lifewire.com/thmb/Vn0-17LNNFb54La3ZkJc9Zq361s=/1500x0/filters:no_upscale():max_bytes(150000):strip_icc()/ENIAC-women-2-5b47b1dc46e0fb005b3063ee.jpg"
  alt="Eniacplug"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '35vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.01 - O ENIAC utilizava placas que precisavam ser manuseadas
manualmente para inserir instruções e configurar as entradas para as operações
do computador.</center></p>

Qual era a proposta de von Neumann? Basicamente, ele propos uma arquitetura com
um *bus* de dados comum a todos os componentes e a implementação de uma
*unidade de controle* capaz de selecionar a operação que deve ser feita. Para
finalizar, um dispositivo de *memória* guardaria não só os dados que devem ser
utilizados na operação da máquina, como também as instruções em si. O modelo de
von Neumann introduziu o conceito do *programa armazenado*. Essa mudança foi
tão importante que até hoje pauta o que é conhecido como a arquitetura de von
Neumann.

<img 
  src="https://upload.wikimedia.org/wikipedia/commons/thumb/e/e5/Von_Neumann_Architecture.svg/1920px-Von_Neumann_Architecture.svg.png"
  alt="vonneumannarch"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '35vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.02 - A arquitetura de von Neumann representada em um diagrama
de blocos simplificado. A utilização de apenas um barramento de dados e uma
unidade de controle para decodificar as instruções armazenadas em memória para
depois acionar a unidade de lógica e aritmética significa que não seria mais
necessário operadores manipulando placas de entrada manuais.</center></p>

## 1. A proposta de von Neumann

Vista pela primeira vez em um dos primeiros relatórios de um computador
eletrônico chamado *EDVAC*, a proposta de von Neumann pode ser resumida em
**cinco principais pontos**.

1. Um computador deve ter uma **unidade de lógica e aritmética** (ALU). A essa
   unidade, vamos atribuir o acrônimo *CA*, de *Circuito aritmético*.
2. Um computador deve ter uma unidade de **controle central** (*CC*). Essa
   unidade é responsável pela controle dos circuitos operacionais do computador
   e também pelo sequenciamento de operações.
3. Um computador deve ter um **bloco de memória** (*M*). Nele, devem ser
   armazenadas as intruções a serem executadas e também as variáveis de entrada
   para essas operações.
4. Um computador deve ter uma interface para a **entrada de dados** (*I*). Essa
   entrada não deve ser encaminhada diretamente para o *CC* ou *CA*, mas sim
   passar por *M*.
5. Um computador deve ter uma interface para a **saída de dados** (*O*). Essa
   também deve passar por *M* após sair de *CC* ou *CA*. Idealmente, também
   deve haver um dispositivo capaz de gerenciar a *fila de dados* para *I* e
   *O*. Vamos chamar essa interface de *R*.

Levando em consideração a proposta acima, a figura 12.03 apresenta um diagrama
de blocos atualizado para a arquitetura de von Neumann.

<img 
  src={vonNeumann}
  alt="vonneumannarch"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '35vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.03 - Diagrama de blocos atualizado da arquitetura de von
Neumann.</center></p>

A inspiração para essa arquitetura veio de uma comparação entre o sistema
nervoso de um ser humano e um sistema computacional. Traçou-se o seguinte
paralelo entre os *tipos de neurônios* e as *unidades operacionais do
computador*:

<table style={{ marginLeft: 'auto', marginRight: 'auto', borderCollapse:
'collapse', width: '50%' }}>
    <thead style={{ textAlign: 'center' }}>
        <tr>
            <th scope="col">Tipo</th>
            <th scope="col">Função</th>
            <th scope="col">Unidade relacionada</th>
        </tr>
    </thead>
    <tbody style={{ textAlign: 'center' }}>
        <tr>
            <th scope="row">Neurônios associativos</th>
            <td>Conexão entre neurônios</td>
            <td>CA, CC, M</td>
        </tr>
        <tr>
            <th scope="row">Neurônios motores</th>
            <td>Comandam os músculos</td>
            <td>I</td>
        </tr>
        <tr>
            <th scope="row">Neurônios sensoriais</th>
            <td>Captam informações do ambiente externo</td>
            <td>O</td>
        </tr>
    </tbody>
</table>

Para entender melhor como funcionaria um computador com essa arquitetura, vamos
estudar mais a fundo o funcionamento do segundo computador eletrônico feito por
von Neumann, o **IAS**.

## 2. O IAS

A figura 12.04 exibe o diagrama de blocos de operação do IAS.

<img 
  src={IAS}
  alt="IAS"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.04 - Diagrama de blocos simplificado da arquitetura do
IAS.</center></p>

Eu sei, eu sei. É muita coisa de uma vez só. Peço apenas para que tenha essa
imagem em mente enquanto discutimos aspectos específicos da operação do IAS e
eu *prometo* que aos poucos tudo isso vai fazer sentido. Ok? Ok! Vamos começar
falando sobre os **registradores** que o IAS usa.

### 2.1. Registradores do IAS

Boa parte da confusão que essa imagem gera em uma primeira leitura é a *sopa de
letrinhas* que é criada com o conteúdo de alguns desses blocos. Apesar de eu
ter apresentado registradores para vocês em um contexto em que deixei claro que
eles são amplamente utilizados dentro da CPU, nós nunca discutimos *quais*
registradores tipicamente existem em uma CPU e *para que servem*. Chegou a
hora.

**Registradores do CA**

* *MBR* - O *Memory Buffer Register* serve como a principal interface entre o
  *CA* e os dispositivos de *memória* e *i/o*. Sempre que alguma informação
  precisa **sair ou entrar** de *CA*, o *MBR* é quem armazena essa informação
  até que ela seja transportada/usada.
* *AC* - O *Acumulador* é um registrador **clássico** dentro de qualquer *ALU*.
  Ele serve para guardar *operandos* e *resultados de operações*.
* *MQ* - Similar ao *acumulador*, o registrador de *multiplicador e quocioente*
  é um registrador extra para que a IAS seja capaz de armazenar *operandos* ou
  *resultados*.

*Exemplo:* em uma operação de A x B em que tanto A como B tem 40 bits, a saída da
operação deverá ter 80 bits. Nesse caso, os 40 bits *mais significativos* são
armazenados no *AC* e os 40 bits *menos significativos* são armazenados no
*MQ*.

**Registradores do CC**

* *IR* - O *Instruction Register* guarda a próxima instrução a ser executada.
  Ele armazena apenas os 8 bits relacionados ao *opcode*.
* *IBR* - O *Instruction Buffer Register* é utilizado para guardar instruções
  que devem ser executadas após a instrução armazenada no *IR*. No IAS, o *IBR*
  é utilizado apenas quando há uma instrução nos 20 bits da direita da *palavra
  de instrução* (calma, já explico o que é isso). Diferente do *IR*, o *IBR*
  armazena todos os 20 bits da instrução.
* *PC* - O *Program Counter* armazena o endereço de memória da instrução que
  deve ser executada após o ciclo atual.
* *MAR* - O *Memory Address Register* existe para armazenar endereços de
  memória que devem ser acessados na RAM do sistema. Note que o *PC* armazena
  apenas endereços de *instruções*, enquanto o *MAR* recebe tanto endereços de
  *instruções* como endereços de *variáveis*. É por isso que um endereço no
  *PC* **sempre** passa pelo *MAR* antes de ser buscado na memória do sistema.

Legal. Agora que sabemos o que é cada um dos registradores, vamos discutir
sobre o **formato dos dados** do IAS.

### 2.2. Dados do IAS

O IAS é capaz de armazenar em sua memória *4096* palavras. Cada palavra
(*word*) tem *40 bits*. Existem dois tipos de palavra no IAS. Palavras de
**instrução** e palavras de **número**.

**Palavras de instrução**

A palavra de instrução é dividida em duas partes: a instrução da esquerda e a
instrução da direita. Cada uma delas ocupa 20 bits. Para cada instrução, há a
divisão de *8 bits* para o *opcode* e os *12 bits* restantes para um endereço
de operando/nova instrução. A figura 12.05 representa esse tipo de palavra.

<img 
  src={InstructionWord}
  alt="IWord"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '15vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.05 - A palavra de instrução do IAS tem 40 bits, sendo 20 bits
para cada uma das instruções. O opcode é armazenado em 8 bits e o endereço é
armazenado em 12 bits.</center></p>

**Palavra de número**

A palavra de número é consideravelmente mais simples. Ela conta apenas com um
bit de sinal e *39 bits* para o valor numérico. Aqui é interessante notar que o
IAS usa a representação de *complemento de dois* para os números negativos.

<img 
  src={NumberWord}
  alt="NWord"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '15vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.06 - A palavra de número usa apenas um bit para representar o
sinal e os outros 39 bits para o valor numérico.</center></p>

### 2.3. Instruções do IAS

O conjunto de instruções do IAS conta com *21 operações*. Elas são divididas
em:

* Operações de **transferência de dados** - são utilizadas para carregar ou
  descarregar os registradores do *CA*.
* Operações de **saltos incondicionais** - geram um comportamento não linear do
  programa a ser executado ao permitir que o *PC* pule para uma instrução que
  não esteja logo na sequência na memória. Esse tipo de operação permite, por
  exemplo, a criação de *loops*.
* Operações de **saltos condicionais** - mesma coisa que os *saltos
  incondicionais*, mas dessa vez o salto é feito (ou não) baseando-se no valor
  do registrador *AC*. É o esqueleto de uma *estrutura condicional*.
* Operações de **artimética**
* Operações de **manipulação de endereço** - serve para modificar valores de
  memória, substituindo parte do valor por dados contidos no registrador *AC*.

A figura 12.07 apresenta a tabela completa de instruções do IAS.

<img 
  src={IASTable}
  alt="IASTable"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '80vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.07 - Tabela completa de instruções do IAS.</center></p>

### 2.4. Ciclos de busca e execução

Você pode estar se perguntando agora *como* exatamente é possível mesclar
operações de controle com operações aritméticas. A resposta para isso é a
divisão da operação da CPU em dois ciclos distintos:

1. Ciclo de busca (*fetch*)
2. Ciclo de execução (*execute*)

**Ciclo de busca**

A figura 12.08 representa o fluxograma de execução do IAS, porém omitindo o
ciclo de execução. Dessa forma, conseguimos estudar isoladamente o
comportamento do ciclo de busca.

<img 
  src={FetchCycle}
  alt="FetchCycle"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '100vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.08 - Fluxograma do ciclo de busca do IAS. Basicamente, o
algoritmo consiste em buscar a próxima instrução da memória ou da IBR e guardar
o código de operação no IR e o endereço do operando em MAR.</center></p>

**Ciclo de execução**

De modo similar, a figura 12.09 exibe o ciclo de execução. Nele, há uma decisão
a ser tomada baseando-se no código de operação armazenado em *IR*. Em nome da
simplicidade, o fluxograma foi simplificado para não considerar todas as 21
operações da IAS.

<img 
  src={ExecuteCycle}
  alt="ExecuteCycle"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '100vh',
    marginRight: 'auto'
  }} 
/>
<br/>
<p><center>Fig 12.08 - Fluxograma do ciclo de busca do IAS. Basicamente, o
algoritmo consiste em buscar a próxima instrução da memória ou da IBR e guardar
o código de operação no IR e o endereço do operando em MAR.</center></p>

