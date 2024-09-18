---
title: RTOS II
sidebar_position: 1
sidebar_class_name: autoestudo
---

import e2301 from '@site/static/img/desafio2301.jpg';

# Explorando o FreeRTOS

## 1. Filas

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/pHJ3lxOoWeI" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

:::tip Exercício 23.01

Crie uma aplicação utilizando freeRTOS com duas tasks e duas filas. A primeira
task deve receber as mensagens da fila 2 e exibi-las na porta serial. Essa task
deve, também, ler mensagens recebidas na porta serial, ecoá-las de volta na
porta serial, mas também alimentar a fila 1 com o valor do novo delay.

A segunda task deve piscar um LED com um delay t. Ela deve ler as mensagens da
fila 1 e atualizar o valor de t sempre que chegar pela mensagem da fila 1.
Quando o LED piscar 100 vezes, envia uma mensagem na fila 2.

<img 
  src={e2301}
  alt="e2301"
  style={{ 
    display: 'block',
    marginLeft: 'auto',
    maxHeight: '40vh',
    marginRight: 'auto'
  }} 
/>

:::


## 2. Mutex

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/I55auRpbiTs" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::


## 3. Semáforos

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/5JcMtbA9QEE" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

## 4. Timers

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/b1f1Iex0Tso" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::

## 5. Interrupts

:::info Autoestudo obrigatório

<div style={{ textAlign: 'center' }}>
    <iframe 
        style={{
            display: 'block',
            margin: 'auto',
            width: '100%',
            height: '50vh',
        }}
        src="https://www.youtube.com/embed/qsflCf6ahXU" 
        frameborder="0" 
        allowFullScreen>
    </iframe>
</div>

:::
