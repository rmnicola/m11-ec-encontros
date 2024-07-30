---
title: Circuitos lógicos
sidebar_position: 2
sidebar_class_name: autoestudo
---

# Como criar (praticamente) qualquer circuito lógico

## 1. A tabela verdade

A tabela verdade é uma ferramenta fundamental na lógica digital usada para
representar o comportamento de um circuito lógico. Ela descreve todas as
possíveis combinações de entradas e as respectivas saídas do circuito. Cada
linha da tabela corresponde a uma combinação específica de valores de entrada,
e a coluna correspondente indica o resultado esperado na saída. A tabela
verdade é o ponto de partida para o design de circuitos lógicos, pois permite
especificar claramente o comportamento desejado de uma função lógica,
facilitando o processo de síntese de circuitos.


## 2. Mapas de Karnaugh

Os mapas de Karnaugh são uma técnica gráfica utilizada para simplificar
expressões booleanas e minimizar o número de portas lógicas necessárias para
implementar um circuito. Eles são particularmente eficazes para funções lógicas
com até quatro ou cinco variáveis, facilitando a identificação visual de termos
comuns que podem ser combinados e simplificados. A organização dos valores da
tabela verdade em uma grade específica permite que os projetistas identifiquem
rapidamente padrões de agrupamento de 1s (para simplificação em forma
disjuntiva) ou 0s (para simplificação em forma conjuntiva), que são essenciais
para reduzir a complexidade dos circuitos.

### Algoritmo para Utilizar Mapas de Karnaugh

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

## 3. Circuitos lógicos

### 3.1. Circuitos combinacionais

Os circuitos combinacionais são fundamentais na eletrônica digital, pois suas
saídas dependem exclusivamente das entradas atuais, sem memória de estados
anteriores. Eles são utilizados em diversas aplicações, como aritmética,
decodificação de sinais e roteamento de dados. Aqui estão alguns exemplos
importantes:

- **Encoder (Codificador)**: Um encoder é um circuito que converte informações
  de formato de entrada para um formato de saída codificado. Ele aceita várias
  entradas e gera uma saída binária que representa qual entrada está ativa. Por
  exemplo, um encoder decimal para binário converte números decimais em
  binários. Eles são utilizados em teclados de computador para codificar a
  posição das teclas pressionadas.

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

Esses circuitos são utilizados em várias aplicações, como unidades aritméticas
e lógicas (ALUs), sistemas de comunicação e em dispositivos de processamento de
dados.

### 3.2. Circuitos sequenciais

Os circuitos sequenciais são caracterizados pela dependência de estados
anteriores além das entradas atuais. Eles possuem elementos de memória que
armazenam informações sobre o passado do sistema, permitindo operações mais
complexas e comportamentos temporais.

#### 3.2.1. Circuitos sequenciais síncronos

Nos circuitos sequenciais síncronos, as transições de estado são coordenadas
por um sinal de clock. Este clock define momentos específicos em que o estado
do circuito pode mudar, garantindo sincronismo e previsibilidade. Exemplos
    incluem:

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

## 3.3. Máquinas de estados

Máquinas de estados são modelos matemáticos e conceituais que descrevem o
comportamento de sistemas que podem estar em um número finito de estados. Elas
são compostas por três elementos principais: estados, transições e ações. 

- **Estados**: Representam as diferentes condições ou situações em que o
  sistema pode estar. Cada estado define um conjunto de comportamentos ou ações
  específicas que o sistema executa enquanto está nesse estado.

- **Transições**: São mudanças de um estado para outro, que ocorrem em resposta
  a eventos ou condições específicas. As transições são frequentemente
  condicionadas por entradas ou eventos externos.

- **Ações**: São as atividades realizadas pelo sistema, que podem ocorrer
  durante as transições ou enquanto o sistema permanece em um estado
  particular.

### Importância e Aplicações

As máquinas de estados são uma ferramenta poderosa e versátil para a modelagem
e controle de sistemas em várias disciplinas. 

#### Eletrônica

Na eletrônica digital, máquinas de estados são amplamente utilizadas em
controladores sequenciais para dispositivos como processadores, onde são
essenciais para gerenciar a execução de instruções. Elas ajudam a coordenar
operações internas e a interagir com periféricos externos. Por exemplo,
unidades de controle em CPUs utilizam máquinas de estados para sequenciar a
execução de instruções, controlar fluxos de dados e gerenciar a comunicação
entre diferentes componentes do sistema.

#### Robótica

Em robótica, máquinas de estados são fundamentais para o desenvolvimento de
comportamentos de controle e navegação. Robôs frequentemente enfrentam
ambientes dinâmicos e precisam mudar de comportamento com base em suas
percepções e decisões internas. Máquinas de estados permitem que os
desenvolvedores definam claramente os diferentes modos de operação de um robô
(como exploração, obstáculo evitado, ou retorno à base) e as condições sob as
quais o robô deve transitar entre esses modos. Isso é particularmente útil em
sistemas de controle autônomo e robótica móvel, onde é crucial responder
adequadamente a mudanças no ambiente ou nos objetivos.

#### Programação e Desenvolvimento de Software

Na programação, máquinas de estados são usadas para modelar o fluxo de controle
de software, especialmente em sistemas de software reativos, como GUIs
(interfaces gráficas de usuário), jogos e sistemas embarcados. Elas são
utilizadas para gerenciar estados de aplicativos, como em um jogo, onde o
programa pode estar em estados como "menu principal", "jogando", "pausado" ou
"fim de jogo". O uso de máquinas de estados ajuda a organizar o código de forma
clara e modular, facilitando a manutenção e expansão do software.

#### Sistemas de Comunicação e Protocolos

Máquinas de estados são essenciais para o design de protocolos de comunicação,
onde são usadas para modelar a sequência de mensagens trocadas entre diferentes
sistemas ou componentes. Por exemplo, em protocolos de comunicação como TCP/IP,
máquinas de estados ajudam a gerenciar as etapas de estabelecimento, manutenção
e término de conexões, garantindo que os dados sejam transferidos de maneira
confiável e ordenada.

### Vantagens das Máquinas de Estados

- **Clareza e Organização**: Elas fornecem uma estrutura clara para modelar
  comportamentos complexos, facilitando a compreensão e a documentação do
  sistema.
- **Modularidade**: Permitem a decomposição de sistemas complexos em partes
  menores e gerenciáveis, onde cada estado ou transição pode ser tratado como
  um módulo separado.
- **Verificação e Validação**: Facilita a análise formal de sistemas,
  permitindo verificar propriedades como correção e ausência de condições de
  corrida.

### 3.3.1. Máquinas de estados vs autômatos

Máquinas de estados e autômatos são conceitos intimamente relacionados. Ambos
descrevem sistemas que podem estar em diferentes estados e mudar de estado em
resposta a eventos ou condições de entrada. A principal diferença é que
autômatos são uma formalização matemática usada para descrever máquinas de
estados, especialmente em teoria da computação. Autômatos são essenciais para a
criação de compiladores, onde são utilizados para o reconhecimento de padrões
em cadeias de caracteres (como parte da análise léxica) e para a análise
sintática de linguagens de programação.
