---
title: Ponderadas
sidebar_position: 2
slug: /ponderadas
---

# Atividades ponderadas do módulo

<img 
  src="https://i.imgur.com/Sfmg0N8.jpeg"
  alt="Puck is not amused" 
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '30vh',
    marginRight: 'auto'
  }} 
/>
<br/>

## 1. Como vão funcionar as ponderadas do módulo 11

As atividades ponderadas tem um papel importante para medir o progresso dos
estudantes em sua compreensão dos assuntos principais abordados no módulo.
Muitas vezes estas atividades acabam sendo um fragmento do conteúdo estudado.
Para este módulo, as atividades propostas terão uma profundidade e complexidade
maior. 

No entanto, não é exatamente razoável imaginar que é possível aumentar a
complexidade e escopo de todas as atividades do módulo. Há uma
incompatibilidade de horário disponível que deve ser resolvida. A solução deste
módulo é oferecer a liberdade de escolha: o estudante é apenas obrigado a
concluir 3 atividades ponderadas das 6 disponíveis. Quais atividades? Isso é
uma decisão do estudante de acordo com o assunto que for mais interessante para
um aprofundamento.

### 1.1. Notas e entregas

Para que essa escolha seja possível dentro do sistema da Adalove, foram
registradas três atividades ponderadas genéricas no sistema. Essas três
atividades genéricas serão utilizadas para publicação das notas do estudante.
Quais notas serão publicadas? As 3 melhores notas, sempre. Se o estudante não
tiver 3 atividades concluídas no prazo, ficará com uma ou mais atividade
ponderada com 0.

### 1.2. Prazos

Embora as atividades registradas na adalove estejam com os prazos especificados
para as semanas 8, 9 e 10 respectivamente, na verdade cada atividade ponderada
proposta terá um prazo em específico. Este prazo poderá ser visto aqui, nesta
seção, na seção específica de cada atividade ponderada e no Github Classrooms.

### 1.3. Atividades com pré-requisitos

Algumas das atividades propostas vão ter pré-requisitos (e.g. para poder fazer
a atividade 5, deve-se concluir a atividade 4). Quando existir essa
dependência, ela estará claramente descrita aqui e no enunciado da atividade.

### 1.4. Github Classrooms

Em breve mais detalhes

## 2. Ponderadas

### 2.1. P1 - Criando um processador de 8 bits

**Pré-requisitos** 

Nenhum

**Descrição**

Nesta atividade, o estudante deverá criar um processador de 8 bits completo em
um simulador de lógica. Para isso, deve-se estudar cuidadosamente arquiteturas
simples como o SAP (Simple as possible) e implementar registradores, circuitos
lógicos e i/o. Além disso, deve-se também implementar um conjunto enxuto de
microcode.

**Prazo**

A ser decidido

**Mais detalhes**

Link em breve

### 2.2. P2 - Visão computacional em um ESP32

**Pré-requisitos** 

Nenhum

**Descrição**

Nesta atividade, o estudante deverá resolver um problema de visão computacional
tendo como recurso principal apenas um microcontrolador (sugere-se o uso do
ESP32). Para isso, será importante considerar um modelo que simultaneamente é
capaz de resolver o problema proposto e rodar com uma performance aceitável em
um microcontrolador com recursos computacionais restritos.

**Prazo**

A ser decidido

**Mais detalhes**

Link em breve

### 2.3. P3 - Explorando concorrência em microcontroladores (visão computacional + RTOS)

**Pré-requisitos** 

Esta ponderada depende da ponderada P2.

**Descrição**

Nesta atividade, o estudante deverá utilizar um framework de concorrência em
microcontroladores (sugere-se o uso do FreeRTOS) para adicionar uma tarefa ao
sistema de visão computacional em microcontroladores. Este gerenciamento de
tarefas deve permitir que não só a verificação de visão computacional seja
executada como a comunicação do seu resultado seja feita com outro dispositivo
sem utilizar fios.

**Prazo**

A ser decidido

**Mais detalhes**

Link em breve

### 2.4. P4 - Criando um framework de inferência para Deep Learning

**Pré-requisitos** 

Nenhum

**Descrição**

Para esta atividade, deve-se desenvolver o código-base para um framework de
inferência minimalista. Este framework deve ser capaz de ler um arquivo de
modelos de formato aberto (e.g. ONNX) e executá-lo.

**Prazo**

A ser decidido

**Mais detalhes**

Link em breve

### 2.5. P5 - Explorando paralelismo para CPUs (inferência em paralelo)

**Pré-requisitos** 

Esta atividade depende da atividade P4.

**Descrição**

Adição de paralelismo utilizando CPU ao framework de inferência. Este
paralelismo pode ser feito utilizando ferramentas como o OpenMP ou MPI, mas
também é possível utilizar as ferramentas nativas de paralelismo de
**linguagens de sistema** (nada de Python).

**Prazo**

A ser decidido

**Mais detalhes**

Link em breve

### 2.6. P6 - Explorando paralelismo para GPUs (inferência em paralelo + CUDA)

**Pré-requisitos** 

Esta atividade depende da atividade P4.

**Descrição**

Adição de paralelismo utilizando GPU ao framework de inferência. Como há uma
restrição maior para implementação de paralelismo para GPUs, essa atividade
fica restrita à utilização de CUDA (ROCm está liberado também, mas não é
recomendado). Ferramentas que criam abstrações sob CUDA (e.g. Bend) também
estão liberadas.

**Prazo**

A ser decidido

**Mais detalhes**

Link em breve
